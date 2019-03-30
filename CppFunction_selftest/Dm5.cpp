//5. 编写模板函数max5()，它将一个包含5个T类型元素的数组作为参数，并返回数组中最大的元素
//（由于长度固定，因此可以在循环中使用硬编码，而不必通过参数来传递）。
//在一个程序中使用该函数，将T替换为一个包含5个int值的数组和一个包含5个double值的数组，以测试该函数。

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