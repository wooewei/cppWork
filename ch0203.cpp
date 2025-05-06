#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間

int main()
{
	int temp;
	int color = 0x41; //16 進位資料 
	cout << "請輸入溫度：";
	cin >> temp;
	//條件選擇 
	if(temp>=25)
	{
		printf("\"啟動冷氣!\"\n");
		printf("好舒服～\n");
	}
	else
	{
		printf("關閉冷氣!\n");
	}
	printf("%d\n",color);
	printf("%x\n",color);
	system("pause");
	return 0;
}

