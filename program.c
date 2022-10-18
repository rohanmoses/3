#include<stdio.h>
#include<conio.h>
void main()
{

FILE *fp;
int i,n,c=0,w,m;
printf("enter n");
scanf("%d",&n);
fp=fopen("sample.txt","r");
if(fp==NULL)
{	
printf("empty file\n");
c=0;
}
else
{
while((w=getw(fp))!=EOF)
{
c+=w;
}
}

fclose(fp);

m=n+c;
for(i=c+1;i<=m;i++)
{
printf("%d\n",i);
}

fp=fopen("sample.txt","w");
putw(m,fp);
fclose(fp);
}
