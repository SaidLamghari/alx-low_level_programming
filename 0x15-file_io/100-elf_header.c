#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdint.h>

#define EI_NIDENT 16

typedef struct {
    uint8_t e_ident[EI_NIDENT];
    uint16_t e_type;
    uint16_t e_machine;
    uint32_t e_version;
    uint64_t e_entry;
    uint64_t e_phoff;
    uint64_t e_shoff;
    uint32_t e_flags;
    uint16_t e_ehsize;
    uint16_t e_phentsize;
    uint16_t e_phnum;
    uint16_t e_shentsize;
    uint16_t e_shnum;
    uint16_t e_shstrndx;
} Elf64_Ehdr;

void print_elf_header(const Elf64_Ehdr *header);

void print_elf_header(const Elf64_Ehdr *header) 
{
	int i;

    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             ELF%d\n", header->e_ident[4] == 1 ? 32 : 64);
    printf("  Data:                              2's complement, %s endian\n", header->e_ident[5] == 1 ? "little" : "big");
    printf("  Version:                           %u (current)\n", header->e_ident[6]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[7]) {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 6:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %u>\n", header->e_ident[7]);
    }
    printf("  ABI Version:                       %u\n", header->e_ident[8]);
    printf("  Type:                              ");
    switch (header->e_type) {
        case 1:
            printf("REL (Relocatable file)\n");
            break;
        case 2:
            printf("EXEC (Executable file)\n");
            break;
        case 3:
            printf("DYN (Shared object file)\n");
            break;
        default:
            printf("<unknown: %u>\n", header->e_type);
    }
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[])
{
	int fd;

    if (argc != 2) {
        fprintf(stderr, "Usage: %s elf_filename\n", argv[0]);
        exit(98);
    }

    fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        perror("Error");
        exit(98);
    }

    Elf64_Ehdr elf_header;
    if (read(fd, &elf_header, sizeof(elf_header)) != sizeof(elf_header)) {
        perror("Error");
        close(fd);
        exit(98);
    }


    
    if (elf_header.e_ident[0] != 0x7f || elf_header.e_ident[1] != 'E' || elf_header.e_ident[2] != 'L' || elf_header.e_ident[3] != 'F') {
        fprintf(stderr, "Error: Not an ELF file\n");
        close(fd);
        exit(98);
    }

    print_elf_header(&elf_header);
    close(fd);
    return 0;
}
