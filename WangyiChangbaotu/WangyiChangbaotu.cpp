/**************************************************************************
����2017 �ر�ͼ
��Ŀ������
ţţ�õ���һ���ر�ͼ��˳�Ųر�ͼ��ָʾ��ţţ������һ���ر��У��ر�������һ�����أ�
����ÿ�λ���ʾ�����ַ��� s �� t�����ݹ��ϵĴ�˵��ţţ��Ҫÿ�ζ��ش� t �Ƿ��� s ��
�����С�ע�⣬�����в�Ҫ����ԭ�ַ������������ģ����紮 abc�����������о��� {�մ�, 
a, b, c, ab, ac, bc, abc} 8 �֡�
����������
ÿ���������һ������������ÿ�����������������г��Ȳ����� 10 �Ĳ������ո�Ŀɼ�
ASCII �ַ�����
���������
���һ�� ��Yes�� ���� ��No�� ��ʾ�����
***************************************************************************/

#include <iostream>
#include <string>
using namespace std;

bool ProcessStr(string& str1, string &str2)
{
	int Preposition = 0;
	int Position = 0;
	for (int i = 0; i < str2.size(); i++)
	{
		Position = str1.find_first_of(str2[i], Preposition);
		if (Position == string::npos)
			return false;
		Preposition = Position + 1;
	}
	return true;
}

int main()
{
	string str1, str2;
	while (cin >> str1 >> str2)
	{
		bool flag = ProcessStr(str1, str2);
		if (flag)
			cout << "Yes" << endl;
		else
			cout << "No" << endl;
	}
	return 0;
}