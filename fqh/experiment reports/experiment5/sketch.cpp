#include <iostream>
using namespace std;
 
 
//����falseΪС�˻�����trueΪ��˻���
bool test()
{
	bool flag = false;   //Ĭ����С�˻���
	unsigned int x = 0x01234567;
	if(*((unsigned char *)&x) == 0x01)  //ȡ����һ���ֽڵ�ֵ��0x11�Ƚ�
		flag = true;
	return flag;
}
 
int main()
{
	bool flag = test();
	if(flag)
		cout<<"������Ϊ��˷�"<<endl;
	else
		cout<<"������ΪС�˷�"<<endl;
	system("pause");
} 
