#include <stdio.h>
#include <Windows.h>

int facttail(int n, int a)
{
	if(n < 0)
			return 0;
		else if(n == 0)
			return 1;
		else if(n == 1)
			return a;
		else
			return facttail(n-1,n*a);

}

int main()
{
	int n=1,a=0;
	int num=0;
	int count=0;

restart:

	printf("지금부터 팩토리안 계산을 제가 전부 하겠습니다. ^^\n정수 입력하주세요:");

	scanf("%d",&num);
	if(num<1)
	{
		printf("숫자 %d는 팩토리안 계산을 못해요... 다시입력해주세요.\n정수 입력:");count++;
		if(count>3)
		{
			printf("%d번이나 잘못 입력하시네요.\n",count);
			if(count>5)
			{
				printf("참는 것에도 한계가 있어!!! 잘있어라! 나 안해!\n");
				Sleep(60);
				return 0;
			}


			return 0;
		}
	}
		

	printf("%d!의 연산 결과는 %d 입니다.\n",num,facttail(num,n));
	printf("또 사용해주세요~~\n");

	while(1)
	{
		count=0;
		printf("끝내실거에요??(ok=1,no=아무숫자)");
		scanf("%d",&count);
		if(count==1)
		{
			printf("ㅠㅠ 안녕히 가세요....\n");
			Sleep(500);
			return 0;
		}

		else
			printf("고맙습니다. 열심히 할게요\n\n\n\n");
			printf("===========================================================\n\n");
			goto restart;
	}
}
		