#include<stdio.h>
int main(){
	int n,i,s=1 ;
	printf("Enter the number : ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		s = s*i;
	}
	printf("%d\n",s);
	return 0 ;
}