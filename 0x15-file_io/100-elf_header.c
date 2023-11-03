#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>




typedef struct {
    unsigned char e_ident[16];
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

void print_header_info(Elf64_Ehdr header);
int main(int argc, char *argv[]);


void print_header_info(Elf64_Ehdr header)
{
	int i;
    printf("ELF Header:\n");
    printf("  Magic:   ");
    for (i = 0; i < 16; i++) {
        printf("%02x ", header.e_ident[i]);
    }
    printf("\n");
    printf("  Type:                              %hu\n", header.e_type);
    printf("  Machine:                           %hu\n", header.e_machine);
    printf("  Version:                           %u\n", header.e_version);
    printf("  Entry point address:               %#lx\n", header.e_entry);
    printf("  Start of program headers:           %#lx\n", header.e_phoff);
    printf("  Start of section headers:           %#lx\n", header.e_shoff);
    printf("  Flags:                             %u\n", header.e_flags);
    printf("  Size of this header:                %hu\n", header.e_ehsize);
    printf("  Size of program header entry:       %hu\n", header.e_phentsize);
    printf("  Number of program header entries:   %hu\n", header.e_phnum);
    printf("  Size of section header entry:       %hu\n", header.e_shentsize);
    printf("  Number of section header entries:   %hu\n", header.e_shnum);
    printf("  Section header string table index:  %hu\n", header.e_shstrndx);
}

int main(int argc, char *argv[])
{
	FILE *file;

    if (argc < 2) {
        printf("Usage: %s <elf_file>\n", argv[0]);
        return 1;
    }

    file = fopen(argv[1], "rb");
    if (file == NULL) {
        printf("Error: Cannot open file %s\n", argv[1]);
        return 1;
    }

    Elf64_Ehdr header;
    if (fread(&header, sizeof(Elf64_Ehdr), 1, file) != 1) {
        printf("Error: Failed to read ELF header\n");
        fclose(file);
        return 1;
    }

    print_header_info(header);

    fclose(file);
    return 0;
}
