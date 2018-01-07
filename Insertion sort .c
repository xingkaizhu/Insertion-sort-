#include <stdio.h>
int main()
{int n,j,k,m,t,i;
int a[20];
scanf("%d",&n);
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("%d\n",a[0]);
  for(i=1;i<n;i++)
 {
 j=i-1;
 t=a[i];
  while(j>=0&&a[j]>t)
{ 
 a[j+1]=a[j];
j--;  
}
a[j+1]=t;	
for(m=0;m<=i;m++)
printf("%d ",a[m]);
printf("\n");	
}
	
	return 0;
}
