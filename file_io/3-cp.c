#include "main.h"

/**
 * printerrors - just helping me print errors
 * @message: the thing to print
 * @file: the file name
 * @exitVal: the exit status
 * Return: void
 */

void printerrors(char *message, char *file, int exitVal)
{
	dprintf(STDERR_FILENO, "%s%s\n", message, file);
	exit(exitVal);
}
/**
 * main - copied data from one file to another
 * @argc: # of args passed
 * @argv: pointer to array containing args
 * Return: always 0
 */
int main(int argc, char **argv)
{
	/* declarations */
	int fddest, fdsrc, readVal, writeVal;
	char buffer[1024];

	/* checks 3 cmd arguments, else prints error exit code 97 */
	if (argc != 3)
		printerrors("Usage: cp file_from file_to", "", 97);
	/* create and write if fails prints with code 99*/
	fddest = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	/* checks if file open, if not, prints error with code 99 */
	if (fddest == -1)
		printerrors("Error: Can't write to ", argv[2], 99);

	/* open file and read, if fail prints error with file name, exit code 98 */
	fdsrc = open(argv[1], O_RDONLY);
	if (fdsrc == -1)
		printerrors("Error: Can't read from file ", argv[1], 98);
	/* reads/writes files in 1024 id an error occurs*/
	/* call a function to print an error message with file name and error code */
	do {
		readVal = read(fdsrc, buffer, 1024);
		if (readVal == -1)
			printerrors("Error: Can't read from file ", argv[1], 98);

		writeVal = write(fddest, buffer, readVal);
		if (writeVal == -1 || writeVal != readVal)
			printerrors("Error: Can't write to ", argv[2], 99);
	/* checks writing close descriptor if error, print error and exit code 100 */
		} while (writeVal == 1024);
	if (close(fdsrc))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fdsrc);
		exit(100);
	}
	if (close(fddest))
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fddest);
		exit(100);
	}
	return (0);
}
