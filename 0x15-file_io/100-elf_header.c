#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define EI_NIDENT 16

typedef struct {
    unsigned char e_ident[EI_NIDENT]; // ELF Identification
    unsigned short e_type;             // Object file type
    unsigned short e_machine;          // Machine type
    unsigned int e_version;           // Object file version
    unsigned long e_entry;             // Entry point address
} Elf64_Ehdr;

void print_error(const char *message) {
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void print_elf_header(const Elf64_Ehdr *header) {
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; ++i) {
        printf("%02x ", header->e_ident[i]);
    }
    printf("\n");
    printf("  Class:                             ELF%d\n", header->e_ident[4]);
    printf("  Data:                              2's complement, %s endian\n", 
           header->e_ident[5] == 1 ? "little" : "big");
    printf("  Version:                           %d (current)\n", header->e_ident[6]);
    printf("  OS/ABI:                            ");
    switch (header->e_ident[7]) {
        case 0:
            printf("UNIX - System V\n");
            break;
        case 6:
            printf("UNIX - Solaris\n");
            break;
        case 2:
            printf("UNIX - NetBSD\n");
            break;
        default:
            printf("<unknown: %d>\n", header->e_ident[7]);
    }
    printf("  ABI Version:                       %d\n", header->e_ident[8]);
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
            printf("<unknown: %hu>\n", header->e_type);
    }
    printf("  Entry point address:               0x%lx\n", header->e_entry);
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    int fd = open(argv[1], O_RDONLY);
    if (fd == -1) {
        print_error("Error: Unable to open the file");
    }

    Elf64_Ehdr header;
    if (read(fd, &header, sizeof(header)) != sizeof(header)) {
        close(fd);
        print_error("Error: Unable to read ELF header");
    }

    if (header.e_ident[0] != 0x7f || header.e_ident[1] != 'E' ||
        header.e_ident[2] != 'L' || header.e_ident[3] != 'F') {
        close(fd);
        print_error("Error: Not an ELF file");
    }

    print_elf_header(&header);
    close(fd);
    return 0;
}

