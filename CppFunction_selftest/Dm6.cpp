//6. 编写模板函数maxn()，它将由一个T类型元素组成的数组和一个表示数组元素数目的整数作为参数，并返回数组中最大的元素。
//在程序对它进行测试，该程序使用一个包含6个int元素的数组和一个包含4个double元素的数组来调用该函数。
//程序还包含一个具体化，它将char指针数组和数组中指针数量作为参数，并返回最长的字符串的地址。
//如果有多个这样的字符串，将返回其中第一个字符的地址。使用由5个字符串指针组成的数组来测试该具体化。

#include <iostream>
using namespace std;

template<typename T>				//模板
T maxn(T array[], int lenth)
{
	T max = array[0];
	for (int i = 0; i < lenth ; i++)
	{
		if (max<array[i])
		{
			max = array[i];
		}
	}
	return max;
}

template<>							//具体化
const char* maxn(const char* array[], int lenth)
{
	const char* max = array[0];
	for (int i = 0; i < lenth ; i++)
	{
		if (strlen(max)<strlen(array[i]))
		{
			max = array[i];
		}
	}
	return max;
}

int main6()
{
	int input_int[] = { 34,632,53,222,45,232 };
	double input_double[] = { 234.6,56.24,25.7,26.5 };
	const char* input_char1[] = { "hugh","gtjy","sdrtf","tjyrtyrrj","rtu" };
	const char* input_char2[] = { "fgh","fghe","rtj","tklyi","fjf" };

	cout << maxn(input_int, 6) << endl;
	cout << maxn(input_double, 4) << endl;
	cout << maxn(input_char1, 5) << endl;
	cout << maxn(input_char2, 5) << endl;


	cout << "\nHello..." << endl;
	return 0;
}