#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	FILE *fp;
	char word[100];
	char filename[100];
	char input[100];

	printf("original file name: ");
	scanf("%s",filename);
	
	fp=fopen(filename,"r");
	
	printf("word to find: ");
	scanf("%s",word);

	while(fgets(input,100,fp)!=NULL)
	{
		if (strncmp(input,word,strlen(word))==0)
		{
			printf("fine a word %s\n", input);
		}
	}
	printf("search done!\n");
	return 0;
}
