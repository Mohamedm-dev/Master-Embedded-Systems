/* ********* Assignement 1 **********
    ********* EX7: calculate factorial of a number   ******** */
    


#include <stdio.h>

main()
{
	int i, n;
	long long f=1;
	printf("Enter an enteger: ");
	scanf("%d",&n);
	
	if (n==0){
		printf("factorial = 1");
	}
	else if (n<0){
		printf("Error!!! factorial of negative number dosen't exist.'");
	}
	else 
	{
	    for( i=0;i<n;++i)
	    {
		    f=f*(n-i);
		}
		printf("factorail = %d",f);
   }
}
