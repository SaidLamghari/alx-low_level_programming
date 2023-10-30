#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>
#include <elf.h>

#include "main.h"

#define BUFFER_SIZE 128

void print_error(const char *message)
{
    fprintf(stderr, "%s\n", message);
    exit(98);
}

void print_magic(const unsigned char *magic)
{
    printf("  Magic:   ");
    for (int i = 0; i < EI_NIDENT; i++) {
        printf("%02x ", magic[i]);
    }
    printf("\n");
}

void print_class(uint8_t class)
{
    printf("  Class:                             ");
    switch (class) {
        case ELFCLASS32:
            printf("ELF32\n");
            break;
        case ELFCLASS64:
            printf("ELF64\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
}

void print_data(uint8_t data)
{
    printf("  Data:                              ");
    switch (data) {
        case ELFDATA2LSB:
            printf("2's complement, little endian\n");
            break;
        case ELFDATA2MSB:
            printf("2's complement, big endian\n");
            break;
        default:
            printf("<unknown>\n");
            break;
    }
}

void print_version(uint8_t version)
{
    printf("  Version:                           %d (current)\n", version);
}

void print_osabi(uint8_t osabi)
{
    printf("  OS/ABI:                            ");
    switch (osabi) {
        case ELFOSABI_SYSV:
            printf("UNIX - System V\n");
            break;
        case ELFOSABI_NETBSD:
            printf("UNIX - NetBSD\n");
            break;
        case ELFOSABI_SOLARIS:
            printf("UNIX - Solaris\n");
            break;
        default:
            printf("<unknown: %d>\n", osabi);
            break;
    }
}

void print_abi_version(uint8_t abi_version)
{
    printf("  ABI Version:                       %d\n", abi_version);
}

void print_type(uint16_t type)
{
    printf("  Type:                              ");
    switch (type) {
        case ET_NONE:
            printf("NONE (Unknown type)\n");
            break;
        case ET_REL:
            printf("REL (Relocatable file)\n");
            break;
        case ET_EXEC:
            printf("EXEC (Executable file)\n");
            break;
        case ET_DYN:
            printf("DYN (Shared object file)\n");
            break;
        case ET_CORE:
            printf("CORE (Core file)\n");
            break;
        default:
            printf("<unknown: %#x>\n", type);
            break;
    }
}

void print_entry(uint64_t entry)
{
    printf("  Entry point address:               %#lx\n", entry);
}

void display_elf_header(const char *filename)
{
	int fd;
	ssize_t bytes_read;
    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        print_error("Error opening file");
    }

    Elf64_Ehdr header;
    bytes_read = read(fd, &header, sizeof(header));
    if (bytes_read == -1)
    {
        print_error("Error reading file");
    }

    if (bytes_read != sizeof(header))
    {
        print_error("Invalid ELF header");
    }

    print_magic(header.e_ident);
    print_class(header.e_ident[EI_CLASS]);
    print_data(header.e_ident[EI_DATA]);
    print_version(header.e_ident[EI_VERSION]);
    print_osabi(header.e_ident[EI_OSABI]);
    print_abi_version(header.e_ident[EI_ABIVERSION]);
    print_type(header.e_type);
    print_entry(header.e_entry);

    close(fd);
}

int main(int argc, char *argv[])
{
    if (argc != 2) {
        print_error("Usage: elf_header elf_filename");
    }

    display_elf_header(argv[1]);

    return 0;
}
