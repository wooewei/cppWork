#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�

int a=10;//�����ܼ�
//�ۭq�禡
void fun1(int arg) 
{
	cout<<"�I�s�ɶǶi�Ӫ���:"<< arg <<endl; 
	cout<<"�I�s�ɶǶi�Ӫ���:"<< arg+a <<endl; 
}

//�D�禡(main function)
int main()
{
	
    int b=20;
    cout<<b<<endl;
    cout<<b+a<<endl;
    fun1(200); //�I�s�ۭq�禡 
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

