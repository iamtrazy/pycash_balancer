#include <stdio.h>
#include <stdlib.h>

int ft,th,fh,hn,ff,tw,tn,fv,yst,axp,inc,sum,bls,D_th,T_th,D_fh,T_fh,D_sum,T_sum;

void
ClearScreen(void)
{
	if (system("CLS")) system("clear");
}

void
TakeInput(void)
{
	printf("5000 x ");
	scanf("%d", &ft);
	printf("1000 x ");
	scanf("%d", &th);
	printf("500 x ");
	scanf("%d", &fh);
	printf("100 x ");
	scanf("%d", &hn);
	printf("50 x ");
	scanf("%d", &ff);
	printf("20 x ");
	scanf("%d", &tw);
	printf("10 x ");
	scanf("%d", &tn);
	printf("5 x ");
	scanf("%d", &fv);
	printf("Yesterday Cash : ");
	scanf("%d", &yst);
	printf("+ Additional Expenses : ");
	scanf("%d", &axp);
	printf("- Additional Incomes : ");
	scanf("%d", &inc);
}

void
Cash(void)
{
	printf("5000 x %02d = %d \n", ft, ft*5000);
	printf("1000 x %02d = %d \n", th, th*1000);
	printf(" 500 x %02d = %d \n", fh, fh*500);
	printf(" 100 x %02d = %d \n", hn, hn*100);
	printf("  50 x %02d = %d \n", ff, ff*50);
	printf("  20 x %02d = %d \n", tw, tw*20);
	printf("  10 x %02d = %d \n", tn, tn*10);
	printf("   5 x %02d = %d ", fv, fv*5);
	sum = ft*5000+th*1000+fh*500+hn*100+ff*50+tw*20+tn*10+fv*5;
}

void 
CashBalance(void)
{
	printf("\n\nTotal Money In Cashier = %d \n\n", sum);
	printf("Yesterday Cash = (%d) \t\t\t| %d \n\n", yst, sum-yst);
	if (axp>0)
	{
		printf("Additional Expenses = %d \t\t\t| %d \n\n", axp, sum-yst+axp);
	}
	if (inc>0)
	{
		printf("Additional Incomes = (%d) \t\t\t| %d \n\n", inc, sum-yst+axp-inc);
	}
	bls=sum-yst+axp-inc;
	printf ("Your Cash Balance For Today : %d \n\n", bls);
}

void
Deposit(void)
{
		if (th>10)
		{
			D_th=th-10;
			T_th=th-D_th;
		}
		else 
		{
			D_th=0;
			T_th=th;
		}
		if (fh>10)
		{
			D_fh=fh-10;
			T_fh=fh-D_fh;
		}
		else 
		{
			D_fh=0;
			T_fh=fh;
		}
	printf("Deposit \n\n");
	printf("5000 x %02d = %d \n", ft, ft*5000);
	printf("1000 x %02d = %d \n", D_th, D_th*1000);
	printf(" 500 x %02d = %d ", D_fh, D_fh*500);
	D_sum=ft*5000+D_th*1000+D_fh*500;
	printf ("\t\t\t| %d \n\n", D_sum);
}

void
TommorowCash(void)
{
	printf("Tommorow Cash \n\n");
	printf("1000 x %02d = %d \n", T_th, T_th*1000);
	printf(" 500 x %02d = %d \n", T_fh, T_fh*500);
	printf(" 100 x %02d = %d \n", hn, hn*100);
	printf("  50 x %02d = %d \n", ff, ff*50);
	printf("  20 x %02d = %d \n", tw, tw*20);
	printf("  10 x %02d = %d \n", tn, tn*10);
	printf("   5 x %02d = %d ", fv, fv*5);
	T_sum = T_th*1000+T_fh*500+hn*100+ff*50+tw*20+tn*10+fv*5;
	printf ("\t\t\t| %d \n\n", T_sum);
}

int main(void)
{
	TakeInput();
	ClearScreen();
	Cash();
	CashBalance();
	if (ft>=1 || th>10 || fh>10)
	{
		Deposit();
		TommorowCash();
	}
	else
	{
		printf ("No Deposits \n\n");
		printf("Tommorow Cash \n\n");
		Cash();
		printf ("\t\t\t| %d \n\n", sum);
	}
	system("pause")
	return 0;
}
