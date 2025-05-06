#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
    printf("%d/n", 10/3);
    printf("%f/n", 10/3.0);
    cout<<7+6-5*4/ 3 % (2+1)<<endl; 
    for(int i=1 ; i <=128 ; i++)
  {
  
  	printf("%d=%c\t",i,i);
  	if(i%5 == 0)
  	
  	{
  		printf("\n");
    
	}
  
   }
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

