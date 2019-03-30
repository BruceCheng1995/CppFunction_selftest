//2. CandyBar结构包含3个成员。第一个成员存储candy bar的品牌名称；第二个成员存储candy bar的重量（有可能有小数）；
//第三个成员存储candy bar的热量。请编写一个程序，它使用一个这样的函数，即将CandyBar的引用、char指针、double和int作为参数，
//并用最后3个值设置相应的结构成员。最后3个参数的默认值分别为"Millennium Munch"、2.85 和350。
//另外，该程序还包含一个以CandyBar的引用为参数，并显示结构内容的函数。请尽可能使用const。
#include <iostream>
using namespace std;

struct CandyBar
{
	char title[50];
	double weight;
	int heat;
};

void Setting(CandyBar& cb, char* name, double weight, int heat)
{
	strcpy_s(cb.title, name);
	cb.weight = weight;
	cb.heat = heat;
}

void show(const CandyBar& cb)
{
	cout << "title = " << cb.title << endl;
	cout << "weight = " << cb.weight << endl;
	cout << "heat = " << cb.heat << endl;
}

int main2()
{
	CandyBar cb;
	char input_name[50] = "Millennium Munch";
	double input_weight= 2.85;
	int input_heat= 350;

	Setting(cb, input_name, input_weight, input_heat);
	show(cb);

	cout << "\nHello..." << endl;
	return 0;
}