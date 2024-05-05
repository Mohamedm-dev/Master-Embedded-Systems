/* ********* Assignement 1 **********
    ********* EX2: check vowels or consonante ******** */
    


#include <stdio.h>

int  main()
{
	char N;
	printf ("Enter an alphabet : ");
	scanf("%c",&N);
	
	if (N =='a' || N =='i' || N =='o' || N =='u' || N =='e' )
	{
		printf("%c is a vowel.",N);
	} 
	else  
		printf("%c is a consonante.",N);
}
