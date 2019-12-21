/**
 * @author: Á÷Ë®ÕË 
 * @Date: 2019/12/21 14:32
 *Ã°ÅİÅÅĞòËã·¨ 
 */
#include<stdio.h>
int main()
{
	int a[6],i=0,j=0,t;
	for(i=0;i<6;i++)
	 {
		scanf("%d",&a[i]); 
	 }
	for(i=0;i<6;i++)
	{
		for(j=i;j<6;j++)
		if(a[i]>=a[j])
		{
			t=a[i];
			a[i]=a[j];
			a[j]=t;
		}

	printf("%d ",a[i]);
	}
	return 0;
}

