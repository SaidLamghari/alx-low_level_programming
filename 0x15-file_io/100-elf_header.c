#include <fcntl.h>
#include <unistd.h>
#include <elf.h>
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Start of the program
 * @ac: argc
 * @av: argv
 * Return: 0 or 1
 */
int main(int ac, char **av)
{
	int file, i;
	Elf64_Ehdr header;

	if (argc != 2)
		dprintf(STDERR_FILENO, "Usage: elf_header elf_filename\n"), exit(98);

	file = open(av[1], O_RDONLY);
	if (file == -1)
		dprintf(STDERR_FILENO, "Cant open file : %s\n", av[1]), exit(98);



	printf("  Magic:   ");
	for (i = 0; i < EI_NIDENT; i++)
		printf("%02x ", header->e_ident[i]);
	printf("\n");
	
	printf("  Class:                             ");
		if (header->e_ident[EI_CLASS] == ELFCLASS64)
			printf("ELF64\n");
		else printf("ELF32\n");
	printf("  Data:                              ");
		if(header->e_ident[EI_DATA] == ELFDATA2LSB)
		       printf("2's complement, little endian\n");
		else printf("2's complement, big endian\n");
}
