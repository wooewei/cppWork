#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int data[ 5 ] = { 28 , 22 , 12 , 44 , 13};
	for(int i=5-1 ; i > 0 ; i--) 
	
	{for(int j=0 ; j < i ; j++)
	{if(data[j] > data[j+1])
	{int t=data[j];data[j]=data[j+1];data[j+1]=t;}}
	}


	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

