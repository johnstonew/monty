#include "monty.h"

int main(int argc, char* argv[]){
	if (argc < 2 || argc > 2){
		printf("USAGE: monty file\n");
		exit(EXIT_FAILURE);
	} else {
		FILE *fp = fopen(argv[1],"r");
		char line[150];

    		if (fp == NULL){
       			fprintf(stderr, "Error: Can't open file %s\n", argv[1]);
       			exit(EXIT_FAILURE);
    		} else {
			while(!feof(fp)) {
				fgets(line, 150, fp);
				printf("%s", line);
			}
		}
    		fclose(fp);
} 
}
