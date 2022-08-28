
#include <iostream>
#include <algorithm>

using namespace std;


int main()
{
	int a, b, c;
	cin >> a >> b >> c;
	int op1, op2, op3, op4, op5, op6;
	op1 = a * b + c;
	op2 = a + b * c;
	op3 = a * b * c;
	op4 = a * (b + c);
	op5 = (a + b) * c;
	op6 = a + b + c;
	if (op1 >= op2 && op1 >= op3 && op1 >= op4 && op1 >= op5 && op1 >= op6)
	{
		cout << op1;
		return 0;
	}
	if (op2 >= op1 && op2 >= op3 && op2 >= op4 && op2 >= op5 && op2 >= op6)
	{
		cout << op2;
		return 0;
	}
	if (op3 >= op2 && op3 >= op1 && op3 >= op4 && op3 >= op5 && op3 >= op6)
	{
		cout << op3;
		return 0;
	}
	if (op4 >= op2 && op4 >= op3 && op4 >= op1 && op4 >= op5 && op4 >= op6)
	{
		cout << op4;
		return 0;
	}
	if (op5 >= op2 && op5 >= op3 && op5 >= op4 && op5 >= op6 && op5 >= op6)
	{
		cout << op5;
		return 0;
	}
	if (op6 >= op2 && op6 >= op3 && op6 >= op4 && op6 >= op5 && op6 >= op1)
	{
		cout << op6;
		return 0;
	}


}
