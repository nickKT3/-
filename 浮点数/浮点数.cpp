#include<iostream>
#include<windows.h>

using namespace std;

int main(void){
	double value=12.3456789;

	//默认情况下,cout输出6位有效数字
	cout<<value<<endl;

	cout.precision(5); //输出精度为5   包含小数点前面的数字量
	cout<<value<<endl;

	cout.flags(cout.fixed);//定点发:精度,用来表示小数点后面的位数
	cout<<value<<endl;

	cout<<3.145126456<<endl; //在第14行设定后,后续的输出将按照定点精度输出

	cout.unsetf(cout.fixed);//取消定点精度.
	cout<<3.145126456<<endl; 

	system("pause");
	return 0;
}