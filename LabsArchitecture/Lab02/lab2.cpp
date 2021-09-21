#include <iostream>

using namespace std;

int Add(int numFirst, int numSecond)
{
	int result;
	__asm
	{
		mov eax, numFirst;
		mov ebx, numSecond;
		add eax, ebx;
		mov result, eax;
	}
	return result;
}

int Sub(int numFirst, int numSecond)
{
	int result;
	__asm
	{
		mov eax, numFirst;
		mov ebx, numSecond;
		sub eax, ebx;
		mov result, eax;
	}
	return result;
}

int Mul(int numFirst, int numSecond)
{
	int result;
	__asm
	{
		mov eax, numFirst;
		mov ebx, numSecond;
		mul ebx;
		mov result, eax;
	}
	return result;
}

int Div(int numFirst, int numSecond)
{
	int result;
	__asm
	{
		mov eax, numFirst;
		mov ebx, numSecond;
		mov edx, 0;
		div ebx;
		mov result, eax;
	}
	return result;
}

int main()
{
	int nums[5];
	int x;

	for (char i = 'a'; i <= 'e'; i++)
	{
		string name = "";
		name = i;
		cout << "Number " << name << ": ";
		cin >> nums[i - 'a'];
		cout << endl;
	}

	x = Add(nums[0], nums[1]);
	x = Mul(x, nums[2]);
	x = Sub(x, nums[3]);
	x = Div(x, nums[4]);

	cout << "Answer: " << x << endl;

	return 0;
}