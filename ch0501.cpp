#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int c=1, loop;
	printf("��J���榸��");
	cin>>loop;
	while(c<=loop)
	{
		
		printf("hello ++%d\n",c);
		c++;
	}
	printf("-----------------/n");
	for(int i=1;i<=loop;i++)
	{
		
		printf("hello ++%d\n",i);
		
	}
	
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

