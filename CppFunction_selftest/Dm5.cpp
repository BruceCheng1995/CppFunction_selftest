//5. ��дģ�庯��max5()������һ������5��T����Ԫ�ص�������Ϊ����������������������Ԫ��
//�����ڳ��ȹ̶�����˿�����ѭ����ʹ��Ӳ���룬������ͨ�����������ݣ���
//��һ��������ʹ�øú�������T�滻Ϊһ������5��intֵ�������һ������5��doubleֵ�����飬�Բ��Ըú�����

#include <iostream>
using namespace std;

template<typename T>
T max5(T a[5])
{
	T max = a[0];
	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}
	cout << "Array :" << a[0] << "	" << a[1] << "	" << a[2] << "	" << a[3] << "	" << a[4] << "	" << endl;
	cout << "Max :" << max << endl;
	return max;
}

int main5()
{
	int int_array[5] = { 342,2356,5685,23,3469 };
	double double_array[5] = { 234.6,3452.34,56.24,25.7,26.5 };

	max5(int_array);
	max5(double_array);

	cout << "\nHello..." << endl;
	return 0;
}