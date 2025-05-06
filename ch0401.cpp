#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int num =12;
    printf("偶數? %c\n", num%2==0 ? 'y':'n');
	

	int a,b,c,max,mini;
	cout<<"輸入三個整數:";
	cin >> a >> b >> c;
	
	
	//max = a>b ? a:b;
	//max = max>c ? max:c;
	//cout<<"三數最大值 :"<<max<<endl ;
	mini = a<b ? a:b;
	mini =max<c ? a:b; 
	cout<<"三數最小值 :"<<mini<<endl ;
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
	
}

