#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    int x=5 , y=10 , z=8;
    x+=y; //x=x+y
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    x %= z;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    y=x--+ z*2;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    z += y++ * x--;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

