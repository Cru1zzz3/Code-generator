#include <stdio.h>
#include <stdlib.h>

#define N 50

void main (void){

	char n[N];
	int i = 0;
	FILE *f, *f2;

	f = fopen("input.txt","rt");
	if (f == NULL)
		perror("Error reading file");

	f2 = fopen("output.txt", "wt");
	if (f2 == NULL)
		perror ("Error writing file");


	while((n[i] = fgetc(f)) != EOF){
		//printf("%c", n[i]);
		fprintf(f2,"%c", n[i]);
	}


	/*
		do {
			fscanf(f,"%c",&n[i]);
			printf( "%c", n[i]);
			i++;
		
		} while (!feof(f));
	*/
	
	fclose(f);
	fclose(f2);
	printf ("File successful copied");

	getchar();
}
