//编写一个函数，它接受一个指向string对象的引用作为参数，并将该string对象的内容转换为大写，
//为此可使用cctype中的字符函数toupper()。然后编写一个程序，他通过使用一个循环让您能够用不同的输入来测试这个函数。
//该程序的运行情况如下：
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

string& upper(string& str)						//其实这里完全可以不返回，str已经被改变了，直接输出str，即input_str就可以了
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