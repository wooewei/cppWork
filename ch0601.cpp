#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++�R�W�Ŷ�

int main()
{
	int score[5]={0}; //�ŧi�}�C
	score[0] = 95; 
	score[3] = 100;
	for(int i=0;i<5;i++)
	{
		printf("score[%d]=%d\n",i,score[i]);
	}
	

	system("pause");
	return 0;
}

