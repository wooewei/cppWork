#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int num =12;
    printf("����? %c\n", num%2==0 ? 'y':'n');
	

	int a,b,c,max,mini;
	cout<<"��J�T�Ӿ��:";
	cin >> a >> b >> c;
	
	
	//max = a>b ? a:b;
	//max = max>c ? max:c;
	//cout<<"�T�Ƴ̤j�� :"<<max<<endl ;
	mini = a<b ? a:b;
	mini =max<c ? a:b; 
	cout<<"�T�Ƴ̤p�� :"<<mini<<endl ;
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
	
}

