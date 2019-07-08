#include "cstdio"
extern "C" int pl(int, short, char);
extern "C" void print(int res)
{
	printf("Result: %d", res);
}
int main()
{
	int a;
	short c;
	short d;
	int result=0;
	printf("Enter A(integer): ");
	scanf_s("%d", &a);
	printf("\n");
	printf("Enter C(integer): ");
	scanf_s("%hi", &c);
	printf("\n");
	printf("Enter D(char): ");
	scanf_s("%d", &d);
	result=pl(a,c,d);
	printf("\n%d",result);
	scanf_s("%d",&result);
	return 0;
}