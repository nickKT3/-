#include<iostream>
#include<windows.h>

using namespace std;

int main(void){
	double value=12.3456789;

	//Ĭ�������,cout���6λ��Ч����
	cout<<value<<endl;

	cout.precision(5); //�������Ϊ5   ����С����ǰ���������
	cout<<value<<endl;

	cout.flags(cout.fixed);//���㷢:����,������ʾС��������λ��
	cout<<value<<endl;

	cout<<3.145126456<<endl; //�ڵ�14���趨��,��������������ն��㾫�����

	cout.unsetf(cout.fixed);//ȡ�����㾫��.
	cout<<3.145126456<<endl; 

	system("pause");
	return 0;
}