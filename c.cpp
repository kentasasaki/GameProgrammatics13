#include <iostream>
#include <string>
 
void FizzBazz(int a);
int main()
{ 
	int upperlimit=100;
	 FizzBazz(upperlimit);
}
void FizzBazz(int a)
{
	int count=0;
	for(int i=1;i<=a;i++)
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
		count++;
		if(count%10==0)
		{
			printf("\n");
		}
	}
}