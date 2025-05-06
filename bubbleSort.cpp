#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間

int main()
{
	int  data[] = { 28,22,12,44,13,9,99};
	int len = sizeof(data)/4; //陣列長度 
	//bubble sort
	for(int i=len-1;i>0;i--) //5個元素時，外迴圈執行4次 i = 4 ~ 1
	{
		for(int j=0;j<i;j++)
		{
			if(data[j]>data[j+1])
			{
				int t=data[j]; /*交換資料處理*/
				data[j]=data[j+1];
				data[j+1]=t;
			}
		}
	}
	//顯示資料
	for(int i=0;i<len;i++)
	{
		cout << data[i] << endl;
	}

	system("pause");
	return 0;
}

