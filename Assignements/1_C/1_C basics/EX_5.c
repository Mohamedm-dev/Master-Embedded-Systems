/* ********* Assignement 1 **********
    ********* EX4: calculate sum of natural numbers   ******** */
    


#include <stdio.h>

main()
{
	int i, n,sum=0;
	printf("Enter an enteger: ");
	scanf("%d",&n);
	
	for( i=1;i<=n;i++){
		sum+=i;
	}
	printf("Sum= %d",sum);	
	
}
