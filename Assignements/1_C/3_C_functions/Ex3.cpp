/*
 *      Author: MAMMA Mohamed
              EX: 3 (reverce a sentence)
 */

#include<stdio.h>
#include<string.h>



void reverse (char T[50]);
int main(){
	char sentence [50];
	printf("Enter a sentence:\n");
	gets(sentence);
	reverse (sentence);

}

void reverse (char T[50] )
{
	int i , len=strlen(T);
	char v;
	for(i=0; i<len/2 ;i++){
		v=T[i];
		T[i]=T[len-1-i];
		T[len-1-i]=v;	
	}
	printf("%s",T);
}

