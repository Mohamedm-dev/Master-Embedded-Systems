/*
 *      Author: MAMMA Mohamed
              EX: 3 (reverce a sentence Using reccursion)
 */
 
#include<stdio.h>
#include<string.h>

void reverse (char T[] ,int i);
int main()
{
	char sentence [50];
	printf("Enter a sentence:\n");
	gets(sentence);
	reverse (sentence,0);
	printf("%s\n",sentence);
    return 0;
}

void reverse (char T[] ,int i)
{
	int len=strlen(T);
	char v;
	if(i<len/2)
	{
		v=T[i];
		T[i]=T[len-1-i];
		T[len-1-i]=v;
		reverse(T,++i);
	}		
}
