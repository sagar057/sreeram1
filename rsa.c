#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int gcd(int a,int b)
{
	int temp;
	if(a==0)
	return b;
	a=b;
	b=temp;
}

void main()
{
	int p,q;
	string s;
	char plaintext[100];
	printf("Enter two prime numbers\n");
	scanf("%d%d",&p,&q);
	int i,n = p * q;
	char a;	
	int function = (p-1) * (q-1);
	printf("Enter plain text\n");
	scanf("%s",s);
	printf("%s\n",s);
	i=0;
	while(plaintext[i]!='\n')
	{
		i = s[i];
		i++;
		printf("%d",i);
	}	
}
