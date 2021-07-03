#include<stdio.h>

int main(){
	char s[100];
	printf("Enter the day of week: ");
	scanf("%s", &s);
	int a,b,c;
	printf("Type of rent Rent per disk\nOvernight $7.00: ");
	scanf("%d", &a);
	printf("Three-day $5.0: ");
	scanf("%d", &b);
	printf("Weekly $3.00: ");
	scanf("%d", &c);	
    printf("Total: %d", a * 7 +b *5 + c* 3);
}
