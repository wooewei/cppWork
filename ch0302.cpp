#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    int x=5 , y=10 , z=8;
    x+=y; //x=x+y
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    x %= z;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    y=x--+ z*2;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
    z += y++ * x--;
    printf("x=%10d  y=%10d  z=%10d  \n",x,y,z);
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

