#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	char src[100]="Programming course";
	char dst[100];
	int i=0;
	
	while(src[i]!='\0'){
		dst[i]=src[i];
		i++;
		
		
	}
	dst[i]='\0';
	printf("%s\n",dst);
	
	return 0;
}
