#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int data[ 5 ] = { 28 , 22 , 12 , 44 , 13};
	for(int i=5-1 ; i > 0 ; i--) 
	
	{for(int j=0 ; j < i ; j++)
	{if(data[j] > data[j+1])
	{int t=data[j];data[j]=data[j+1];data[j+1]=t;}}
	}


	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

