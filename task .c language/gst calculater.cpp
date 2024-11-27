#include<stdio.h>
int main() {
	float amount,sgst,cgst,finalamount;
	printf("Enter the amount:");
	scanf("%f",&amount);
	sgst= amount*0.9;
	cgst= amount*0.9;
	
	 finalamount=amount+sgst+cgst;
	printf("Amount %2.f\n",amount);
	printf("SGST (9%)%2.f\n",sgst);
	printf("CGST(9%)%2.f\n",cgst);
	printf("Final amount:%2.f\n",finalamount);
	
	return 0;
}