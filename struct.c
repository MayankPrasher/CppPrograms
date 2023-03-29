#include<stdio.h>
int main(){
	
	struct book{
		char name;
		long pages;
		char author;
	};
	struct book b1 = {"M",34,"h"};
//	scanf("%c" "%d" "%c" ,&b1.name,&b1.pages,&b1.author);
	printf("\n entered maal : ");
	printf("%c""%d""%c",b1.name,b1.pages,b1.author); 
	return 0 ;
}