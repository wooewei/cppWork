#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間
int main()
{
	char name[20] = "Hello"; //宣告 c 字串 
	//宣告布林型別
	int temp = 18;
	bool isOpen = true;
	
	//條件選擇 
	if(isOpen)
	{
		printf("啟動冷氣!\n");
		printf("好舒服～\n");
	}
	else
	{
		printf("關閉冷氣!\n");
	}
	isOpen = false;
	if(isOpen)
	{
		printf("啟動冷氣!\n");
		printf("好舒服～\n");
	}
	else
	{
		printf("關閉冷氣!\n");
	}
	system("pause");
	return 0;
}

