#include <iostream> //引入 C++ 標頭檔
#include <stdlib.h> //這一引入標頭檔也可省略，也些編譯器會自動加入
using namespace std;//C++命名空間
//主函式(main function)
int main()
{
	int season;
	string name;
	printf("輸入1~4:");
	cin>>season;
	
	switch(season)
	{
	
	
			case 1:
				name="春天";
				break;
			case 2:
				name="夏天";
				break; 
			case 3:
				name="秋天";
				break;
			case 4:
				name="冬天";
				break; 
			default ("錯誤請輸入1~4");
				break;
	}
	if(season>= 1 && season<= 4)
	{
		cout<<"現在是"<<endl 
	}
	
	
	cout>>season>>endl
	system("pause");//呼叫內定函式
    return 0; //返回並傳回0
}

