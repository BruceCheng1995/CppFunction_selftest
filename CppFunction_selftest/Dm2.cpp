//2. CandyBar�ṹ����3����Ա����һ����Ա�洢candy bar��Ʒ�����ƣ��ڶ�����Ա�洢candy bar���������п�����С������
//��������Ա�洢candy bar�����������дһ��������ʹ��һ�������ĺ���������CandyBar�����á�charָ�롢double��int��Ϊ������
//�������3��ֵ������Ӧ�Ľṹ��Ա�����3��������Ĭ��ֵ�ֱ�Ϊ"Millennium Munch"��2.85 ��350��
//���⣬�ó��򻹰���һ����CandyBar������Ϊ����������ʾ�ṹ���ݵĺ������뾡����ʹ��const��
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