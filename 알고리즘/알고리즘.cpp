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

	printf("���ݺ��� ���丮�� ����� ���� ���� �ϰڽ��ϴ�. ^^\n���� �Է����ּ���:");

	scanf("%d",&num);
	if(num<1)
	{
		printf("���� %d�� ���丮�� ����� ���ؿ�... �ٽ��Է����ּ���.\n���� �Է�:");count++;
		if(count>3)
		{
			printf("%d���̳� �߸� �Է��Ͻó׿�.\n",count);
			if(count>5)
			{
				printf("���� �Ϳ��� �Ѱ谡 �־�!!! ���־��! �� ����!\n");
				Sleep(60);
				return 0;
			}


			return 0;
		}
	}
		

	printf("%d!�� ���� ����� %d �Դϴ�.\n",num,facttail(num,n));
	printf("�� ������ּ���~~\n");

	while(1)
	{
		count=0;
		printf("�����ǰſ���??(ok=1,no=�ƹ�����)");
		scanf("%d",&count);
		if(count==1)
		{
			printf("�Ф� �ȳ��� ������....\n");
			Sleep(500);
			return 0;
		}

		else
			printf("�����ϴ�. ������ �ҰԿ�\n\n\n\n");
			printf("===========================================================\n\n");
			goto restart;
	}
}
		