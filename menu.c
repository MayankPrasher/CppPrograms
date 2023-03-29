#include<stdio.h>


int main(){
	int input,a,b;
	menu();
	scanf("%d",&input);
	printf("Enter the first no. :");
	scanf("%d",&a);
	printf("Enter the second no. :");
	scanf("%d",&b);
	choice(input,a,b);

	
	
}
void menu(){
	
	printf("Choose the option :\n");
	printf("1. Addition\n");
	printf("2. Subtraction\n");
    printf("3. Multiplication\n");
	printf("4. Division\n");
	printf("5. Modulation\n");
}

int choice(int input , int a , int b){
	
	switch(input){
		
		case 1 : {
			
			printf("The sum of %d and %d is : %d",a,b,(a+b));
			break;
		}
		case 2 :{
				printf("The subtraction of %d and %d is : %d",a,b,(a-b));
			break;
		}
		case 3 : {
			printf("The product of %d and %d is : %d",a,b,(a*b));
			break;
		}
		case 4 : {
			printf("The division of %d and %d is : %d",a,b,(a/b));
			break;
		}
		case 5 : {
			printf("The modulation of %d and %d is : %d",a,b,(a%b));
			break;
		}
		default : {
			printf("Wrong input");
			break;
		}
	}
}
