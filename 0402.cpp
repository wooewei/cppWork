#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
	int season;
	string name;
	printf("��J1~4:");
	cin>>season;
	
	switch(season)
	{
	
	
			case 1:
				name="�K��";
				break;
			case 2:
				name="�L��";
				break; 
			case 3:
				name="���";
				break;
			case 4:
				name="�V��";
				break; 
			default ("���~�п�J1~4");
				break;
	}
	if(season>= 1 && season<= 4)
	{
		cout<<"�{�b�O"<<endl 
	}
	
	
	cout>>season>>endl
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

