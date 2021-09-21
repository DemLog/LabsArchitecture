#include <iostream>

using namespace std;

void getBigEnd(char* num, int bytes)
{
	cout << "Big-Endian:";
	for (int i = bytes - 1; i >= 0; i--)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << ((*(num + i) >> (7 - k)) & 1);
		}
	}
	cout << endl;
}

void getLittleEnd(char* num, int bytes)
{
	cout << "Little-Endian:";
	for (int i = 0; i < bytes; i++)
	{
		for (int k = 0; k < 8; k++)
		{
			cout << ((*(num + i) >> (7 - k)) & 1);
		}
	}
	cout << endl;
}

int main()
{
	cout << "Input your number: ";
	double num;
	cin >> num;
	int numInt = (int)num;
	float numFloat = (float)num;

	cout << "int:" << endl;
	getBigEnd((char*)&numInt, sizeof(int));
	getLittleEnd((char*)&numInt, sizeof(int));

	cout << "float:" << endl;
	getBigEnd((char*)&numFloat, sizeof(float));
	getLittleEnd((char*)&numFloat, sizeof(float));

	cout << "double:" << endl;
	getBigEnd((char*)&num, sizeof(double));
	getLittleEnd((char*)&num, sizeof(double));
	return 0;
}