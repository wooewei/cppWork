#include <iostream> //�ޤJ C++ ���Y��
#include <stdlib.h> //�o�@�ޤJ���Y�ɤ]�i�ٲ��A�]�ǽsĶ���|�۰ʥ[�J
using namespace std;//C++�R�W�Ŷ�
//�D�禡(main function)
int main()
{
    printf("%d/n", 10/3);
    printf("%f/n", 10/3.0);
    cout<<7+6-5*4/ 3 % (2+1)<<endl; 
    for(int i=1 ; i <=128 ; i++)
  {
  
  	printf("%d=%c\t",i,i);
  	if(i%5 == 0)
  	
  	{
  		printf("\n");
    
	}
  
   }
	system("pause");//�I�s���w�禡
    return 0; //��^�öǦ^0
}

