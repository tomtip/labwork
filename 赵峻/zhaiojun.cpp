#include <iostream>

using namespace std;  //该指令涵盖了C++的名字空间中所有的标识符

int main()
{
	bool f = 1 < 2;

	cout << f << "  " << boolalpha << f << "  " << noboolalpha << f << endl;

	return 0;
}

#include <iostream>
using namespace std;

int main()
{
	int x = 5;

#define  T1  x+x    	//用宏定义定义符号常量T1

#define  T2  T1-T1  	//用宏定义定义符号常量T2

	cout << "T1=" << T1 << "  T2=" << T2 << endl;

	return 0;
}
