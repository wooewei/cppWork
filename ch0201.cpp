#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;//C++命名空間

int main()
{
	short var_1;
	int age = 18;
	printf("學生的年齡:%d\n",age);
	
	age = age + 3;
	printf("三年後學生的年齡:%d\n",age);
	//宣告字元
	char ch1 = 'a';
	char ch2 = 97;
	printf("%c\t%c\n",ch1,ch2); 
	
	ch2 = ch2 + 3;
	printf("%c\t%c\n",ch1,ch2); 
	//宣告浮點數 
	double f1 = 0.0185697;
	cout << "浮點數:" << f1 << endl;
	
	
	system("pause");
	return 0;
}

