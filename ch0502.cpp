#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	for(int i=1 ; i<=5;i++ )
	{
		printf("i=%d/t",i);
		for(int j=1;j>=i;j++)
{
	
	printf("@");
	}
		printf("\n");
	}
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

