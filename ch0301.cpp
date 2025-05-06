#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間

int a=10;//全域變數
//自訂函式
void fun1(int arg) 
{
	cout<<"呼叫時傳進來的值:"<< arg <<endl; 
	cout<<"呼叫時傳進來的值:"<< arg+a <<endl; 
}

//主函式(main function)
int main()
{
	
    int b=20;
    cout<<b<<endl;
    cout<<b+a<<endl;
    fun1(200); //呼叫自訂函式 
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

