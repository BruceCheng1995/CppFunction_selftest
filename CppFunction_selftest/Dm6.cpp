//6. ��дģ�庯��maxn()��������һ��T����Ԫ����ɵ������һ����ʾ����Ԫ����Ŀ��������Ϊ����������������������Ԫ�ء�
//�ڳ���������в��ԣ��ó���ʹ��һ������6��intԪ�ص������һ������4��doubleԪ�ص����������øú�����
//���򻹰���һ�����廯������charָ�������������ָ��������Ϊ����������������ַ����ĵ�ַ��
//����ж���������ַ��������������е�һ���ַ��ĵ�ַ��ʹ����5���ַ���ָ����ɵ����������Ըþ��廯��

#include <iostream>
using namespace std;

template<typename T>				//ģ��
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

template<>							//���廯
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