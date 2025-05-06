#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間

int main()
{
	string names[5] = {"apple","melon","西瓜","lemon","pineapple"};
	int price[5] = {200,120,85,100,58};
	int sum=0;
	for(int i=0;i<5;i++)
	{
		printf("names[%d]=%10s 價格:%3d\n",i,names[i].c_str(),price[i]); //.c_str() method
		sum += price[i];
	}
	printf("加總金額: %d 元\n",sum);
	system("pause");
	return 0;
}

