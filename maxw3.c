#include <stdio.h>
int max(int A[],int k)
{
	int t,i;
	t=A[0];
	for(i=1;i<k;i++)
        {
		if(A[i]>t)
			t=A[i];
	}
	return(t);
}
int main()
{
	int a[]={101,105,104,109,107};
	int n=5,m;
	m=max(a,n);
	printf("MAXIMUM NUMBER IS %d",m);
     return 0;
}