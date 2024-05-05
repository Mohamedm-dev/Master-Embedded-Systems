/* ********* Assignement 2 **********
    ********* EX3: Tronspose of a matrix   ******** */
    
#include<stdio.h>

main(){
	int i,j;
	int n,m;
	printf("Enter rows and column size of matrix: ");
	scanf("%d%d",&n,&m);
	float A[n][m], B[n][m];
	
	printf("Enter elements of matrix:\n");
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Enter element a%d%d: ",i,j);
			scanf("%f",&A[i][j]);
		}
	}
	
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			B[i][j]=A[i][j];
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Entered matrix :",A[i][j]);
			if (j==m)  print("\n");
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			printf("Transpose of matrix :",B[i][j]);
			if (j==m)  print("\n");
		}
	}
}  
