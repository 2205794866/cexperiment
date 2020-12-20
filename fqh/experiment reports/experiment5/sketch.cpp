#include <iostream>
using namespace std;
 
 
//返回false为小端机器，true为大端机器
bool test()
{
	bool flag = false;   //默认是小端机器
	unsigned int x = 0x01234567;
	if(*((unsigned char *)&x) == 0x01)  //取出第一个字节的值与0x11比较
		flag = true;
	return flag;
}
 
int main()
{
	bool flag = test();
	if(flag)
		cout<<"本机器为大端法"<<endl;
	else
		cout<<"本机器为小端法"<<endl;
	system("pause");
} 
