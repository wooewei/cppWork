#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int c=1, loop;
	printf("輸入執行次數");
	cin>>loop;
	while(c<=loop)
	{
		
		printf("hello ++%d\n",c);
		c++;
	}
	printf("-----------------/n");
	for(int i=1;i<=loop;i++)
	{
		
		printf("hello ++%d\n",i);
		
	}
	
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

