/* ********* Assignement 1 **********
    ********* EX7: simple calculator to add, Substract, Multiply or divide Using Switch    ******** */
    


#include <stdio.h>

main(){
	
	char o;
	float oper1 ,oper2;
	printf("Enter operator either + or - or * or devide : ");
	scanf("%c",&o);
	printf("Enter two operands : ");
	scanf("%f%f",&oper1,&oper2);
	
	switch (o){
		case '+' :
		{
			printf("%.2f + %.2f = %.2f",oper1,oper2,oper1+oper2);
			break;
		}
		case '-' :
		{
			printf("%.2f - %.2f = %.2f",oper1,oper2,oper1-oper2);
			break;
		}
		case '*' :
		{
			printf("%.2f * %.2f = %.2f",oper1,oper2,oper1*oper2);
			break;
		}
		case '/' :
		{
			printf("%.2f / %.2f = %.2f",oper1,oper2,oper1/oper2);
			break;	
		}
		default:
		{
			printf("Error!! %c is not exist.",o);		
			break;
		}
		
    }
}
