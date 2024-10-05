#include <stdio.h>
#include <stdlib.h>

typedef struct _
{
	char name[50];
	int s1,s2,s3,total_s;
}st;



int main() 
{
	int n,i = 0;	
	scanf("%d",&n);
	st *pst = (st *)malloc(sizeof(st) * n);
	
	while(i < n)
	{
		st temp;
		scanf("%s %d %d %d",temp.name,&temp.s1,&temp.s2,&temp.s3);
		temp.total_s = temp.s1 + temp.s2 + temp.s3;
		pst[i] = temp;
		i++;
	}
	printf("\n");
	
	i = 0;
	while(i < n)
	{
		st t1 = pst[i];
		int j = i;
		while(j < n)
		{
			st t2 = pst[j];
			if(t2.total_s > t1.total_s)
			{
				st temp = t1;
				pst[i] = t2;
				pst[j] = temp;
			}
			printf("i : %d j : %d\n",i,j);
			printf("%s %d %d %d %d\n",pst[i].name,pst[i].s1,pst[i].s2,pst[i].s3,pst[i].total_s);
			printf("%s %d %d %d %d\n",pst[j].name,pst[j].s1,pst[j].s2,pst[j].s3,pst[j].total_s);
			j++;
		}
		i++;
	}
	
	i = 0;
	while(i < n)
	{
		st temp = pst[i];
		printf("%s %d %d %d %d\n",temp.name,temp.s1,temp.s2,temp.s3,temp.total_s);
		i++;
	}
	
	
	return 0;
}


