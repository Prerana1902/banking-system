#include<stdio.h>
struct bank
{
	int acc,bal;
	char name;
};
void main()
{
	struct bank b[15];
	int ch,i,no,n;
	int amt,dep;
	printf("enter how many account\n");
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		printf("enter name \n");
  		scanf("%s",&b[i].name);
		printf("enter account number\n");
		scanf("%d",&b[i].acc);
		printf("enter balance\n");
		scanf("%d",&b[i].bal);
	}
	printf("enter your account number\n");
	scanf("%d",&no);
	for(i=0;i<n;i++)
	{ 
		if(no==b[i].acc)
		{ 
			do
			{
			
				printf("enter choice\n1:withdraw\n2:deposit\n3:check balance\n");
				scanf("%d",&ch);
				switch(ch)
				{
					case 1:
						
						printf("enter ammount to withdraw\n");
						scanf("%d",&amt);
						if(b[i].bal-amt<500)
						{
							printf("balance cannot be less than 500\nyour'e current balance is %d",b[i].bal);
						}
						else
						{
							b[i].bal= b[i].bal-amt;
							printf("current balance is %d",b[i].bal);
			}
						break;
					case 2:
					
					printf("enter depositamount");
					scanf("%d",&dep);
				    b[i].bal=b[i].bal+dep;
				    printf("current balance is %d",b[i].bal);
						break;
					case 3:
						printf("current balance is %d",b[i].bal);
						break;
				}
				printf("\ndo you want to continue\n1:yes\n2:no\n");
				scanf("%d",&ch);	
			}
	while(ch==1);
		}
	}
	
	
}

