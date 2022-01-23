#include <iostream>
 using namespace std;
 
 int main()
 {
 	int n;
	cin>>n;
	int A[n][n], B[n][n], C[n][n];
	int i,j,k;
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			A[i][j]=1;
		}
	}
 	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			B[i][j]=1;
		}
	}
	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			C[i][j]=0;
		}
	}
 	for (i=0;i<n;i++)
	{
		for (j=0;j<n;j++)
		{
			for (k=0;k<n;k++)
			{
				C[i][j]+=A[i][k]*B[k][j];
			}
		}
	}
return 0; 	
}
