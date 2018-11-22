#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	FILE*fp, *fp2;
	char input;
	int i;
	char original[100];
	char copy[100];
	
	printf("original file: ");
	scanf("%s",original);
	printf("copy file: ");
	scanf("%s",copy);
	scanf("%s",original);
	
	fp=fopen(original,"r");
	fp2=fopen(copy,"w");
	
	while((input=fgetc(fp))!=EOF)
	{
		fputc(input,fp2);
		i++;
	}
	printf("copy succeed~(%i bytes copied)\n",i);
	fclose(fp);
	fclose(fp2);

	return 0;
}
