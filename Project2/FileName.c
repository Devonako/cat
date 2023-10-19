#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv) {
	if (argc <= 1) {
		fprintf(stderr, "Enter a file name as an argument.\n");
		return 1;
	}
	else {
		int ct = 1;
		char buffer[2000] = { 0 };
		while (ct < argc) {
			FILE* f = fopen(argv[ct], "rb");
			if (!f) {
				fprintf(stderr, "\nFile name '%s' does not exist.", argv[ct]);
				return 1;
			}
			int ret = 0;
			do  {
				ret = fread(buffer, 2000, 1, f);
					
					fprintf(stdout, buffer);
				
			} while (ret > 0);
				ct++;
		}
	}
}