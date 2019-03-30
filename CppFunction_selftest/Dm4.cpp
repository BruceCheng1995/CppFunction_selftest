//请提供其中描述的函数和原型，从而完成该程序。注意，应有两个show()函数，每一个都使用默认参数。
//请尽可能使用const参数。set()使用new分配足够的空间来存储指定的字符串。这里使用的技术与设计和实现类时使用的相似。
//（可能还必须修改头文件的名称，删除using编译指令，这取决于所用的编译器）


#define  _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;
#include <cstring>              // for strlen(), strcpy()

struct stringy {
	char* str;					// points to a string
	int ct;						// length of string (not counting '\0')
};
// prototypes for set(), show(), and show() go here 

void set(stringy& beany, char* ch)
{
	beany.str = new char[strlen(ch) + 1];
	strcpy(beany.str, ch);
	beany.ct = strlen(ch);
}

void show(const stringy& st, const int a = 1)
{
	for (int i = 0; i < a ; i++)
	{
		cout << st.str << endl;
	}
}

void show(const char* ch, const int a = 1)
{
	for (int i = 0; i < a ; i++)
	{
		cout << ch << endl;
	}
}

int main4()
{
	stringy beany;
	char testing[] = "Reality isn't what it used to be.";

	set(beany, testing);		// first argument is a reference,
								// allocates space to hold copy of testing,
								// sets str member of beany to point to the new block,
								// copies testing to new block, and sets ct member of beany
								//第一个参数是一个引用，分配空间来保存testing副本，
								//设置beany的str成员指向新块，将testing复制到新块，
								//并设置beany的ct成员
	show(beany);				// prints member string once			//using struct or struct&
	show(beany, 2);				// prints member string twice			//using struct/struct& and int/int&
	testing[0] = 'D';
	testing[1] = 'u';
	show(testing);				// prints testing string once			//using char[]
	show(testing, 3);			// prints testing string thrice			//using char[] and int
	show("Done!");														//using string
	return 0;
}