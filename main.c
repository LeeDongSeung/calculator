#include <stdio.h>
 
int add(int, int);
int sub(int, int);
int div(int, int);
int multi(int, int);
 
int main(int argc, char* argv[])
{
	int a, b, c;
	char operator;
	
	printf("수식을 입력해주세요!!!!!!!!!!: ");
	scanf("%d %c %d", &a, &operator, &b);
	
	switch (operator)
	{
		case '+':
			c = add(a, b);
			break;
		case '-':
			c = sub(a, b);
			break;
		case '*':
			c = multi(a, b);
			break;
		case '/':
			c = div(a, b);
			break;
		default:break;
	}
	
	printf("result is %d.\n", c);
	printf("hoho");
	return 0;
}
 
int add(int a, int b)
{
	return a + b;
}
 
int sub(int a, int b)
{
	//TODO implementation
	return a-b;
}
 
int multi(int a, int b)
{
	//TODO implementation
	return a*b;
}
 
int div(int a, int b)
{
	//TODO implementation
	if(b==0) {
		printf("0으로 나눌 수 없습니다.");
		return -1
	}
	return a/b;
}