#include <iostream>
 
void FizzBazz(int a);
int main()
{ 
	int upperlimit=100;
	 FizzBazz(upperlimit);
}
void FizzBazz(int upperlimit)
{
	for(int i=1;i<=upperlimit;i++)
	{   
		if(i%3==0 && i%5==0)
		{
			printf("FizzBuzz,");
		}else if(i%3==0)
		{
			printf("Fizz,");
		}else if(i%5==0)
		{
			printf("Buzz,");
		}else{
			printf("%d,",i);
		}
		// 時々改行
		if(i%10==0)
		{
			printf("\n");
		}
	}
}
