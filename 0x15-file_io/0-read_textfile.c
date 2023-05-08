#include<unistd.h>
#include<fcntl.h>
#include"main.h"
/**
  * read_textfile - reads a text file and prints it to the POSIX standard
  * output
  * @filename: name of file
  * @letters: number of letters to read and print
  * Return: actual number of letters it could read and print
  * else 0 if it cannot opened or filename is NULL
  * or write fails
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *c;

	__attribute__((unused))ssize_t lett_read = 0, flag;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	c = malloc(letters * sizeof(char));
	if (c == NULL)
		return (0);
	lett_read = read(fd, c, letters);
	flag = write(STDIN_FILENO, c, lett_read);
	close(fd);
	free(c);
	return (lett_read);
}
