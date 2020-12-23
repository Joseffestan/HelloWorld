// LeetCode.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

int reverse(int x) {
	int nNum[32] = { 0 };
	nNum[31] = x % 10;
	int temp = 10;
	int i = 1;
	int n = 1;
	while (x / temp != 0)
	{
		nNum[31 - i] = x / temp % 10;
		temp *= 10;
		i++;
		n++;
	}
	int nResult = 0;
	for (int i = 0; i < n; i++)
	{
		int k = 1;
		for (int j = 0; j < n - i - 1; j++)
			k *= 10;
		nResult += nNum[31 - i] * k;
	}
	return nResult;
}

int main()
{
	int num;
	while (1)
	{
		cout << "input a num:";
		cin >> num;
		int ans = reverse(num);
		cout << ans << endl;
	}
    return 0;
}

