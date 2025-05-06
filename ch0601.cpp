#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間

int main()
{
	int score[5]={0}; //宣告陣列
	score[0] = 95; 
	score[3] = 100;
	for(int i=0;i<5;i++)
	{
		printf("score[%d]=%d\n",i,score[i]);
	}
	

	system("pause");
	return 0;
}

