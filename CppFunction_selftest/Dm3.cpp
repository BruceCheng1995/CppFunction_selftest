//��дһ��������������һ��ָ��string�����������Ϊ������������string���������ת��Ϊ��д��
//Ϊ�˿�ʹ��cctype�е��ַ�����toupper()��Ȼ���дһ��������ͨ��ʹ��һ��ѭ�������ܹ��ò�ͬ���������������������
//�ó��������������£�
//Enter a string(q to quit) : go away
//Go AWAY
//Next string(q to quit) : good grief!
//GOOD grief!
//Next string(q to quit) : q
//Bye.

#include <iostream>
#include "string"
#include "cctype"
using namespace std;

string& upper(string& str)						//��ʵ������ȫ���Բ����أ�str�Ѿ����ı��ˣ�ֱ�����str����input_str�Ϳ�����
{
	for (int i = 0; i < str.size(); i++)
	{
		str[i] = toupper(str[i]);
	}
	return str;
}

int main3()
{
	string intpu_str;
	cout << "Enter a string(q to quit) :";
	getline(cin, intpu_str);
	while (intpu_str[0] != 'q')
	{
		cout << upper(intpu_str) << endl;
		cout << "Next string(q to quit) :";
		getline(cin, intpu_str);
	}
	cout << "Bye.";

	cout << "\nHello..." << endl;
	return 0;
}