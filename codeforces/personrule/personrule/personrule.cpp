// @ELSAGAN

#include <iostream>
#include <math.h>
#include <cmath>

using namespace std;

class MyClass
{
public:

	float caluc2(float numx[100], float numy[100], int n)
	{
		float sumxy{ 0 }, sumx2{ 0 }, sumy2{ 0 }, sumx{ 0 }, sumy{ 0 };

		for (int i = 0; i < n; i++)
		{
			cout << "    " << numx[i] * numy[i] << "  |  " << pow(numx[i], 2) << "  |  " << pow(numy[i], 2) << endl;
			sumxy += numx[i] * numy[i];
			sumx2 += pow(numx[i], 2);
			sumy2 += pow(numy[i], 2);

			sumx += numx[i];
			sumy += numy[i];
		}
		n1 = n;

		cout << "sum " << sumxy << "  |  " << sumx2 << "  |  " << sumy2 << endl;
		cout << endl << "sum of x = " << sumx << endl << "sum of y = " << sumy << endl;

		float r = ((n * sumxy) - (sumx * sumy)) / (pow((n * sumx2) - pow((sumx), 2), 0.5) * pow((n * sumy2) - pow((sumy), 2), 0.5));

		cout << "r or p = " << r << endl;
		classsumxy = sumxy;
		classsumx = sumx;
		classsumy = sumy;
		classsumy2 = sumy2;
		classsumx2 = sumx2;

		return r;

	}

	void check(float r)
	{
		if (r != 0)
		{
			if (r > 0 || r < 0.5)
			{
				cout << "(postive) (weak) correlation between x and y" << endl;
			}
			else if (r > 0 || r > 0.5)
			{
				cout << "(postive) (strong) correlation between x and y" << endl;
			}
			else if (r < 0 || r > -0.5)
			{
				cout << "(negtive) (weak) correlation between x and y" << endl;
			}
			else
			{
				cout << "(negtive) (strong) correlation between x and y" << endl;
			}
		}
		else
		{
			cout << "no correlation between x and y" << endl;
		}

	}

	float xya()
	{
		float a;
		a = ((n1 * classsumxy) - (classsumx * classsumy)) / ((n1 * classsumx2) - pow((classsumx), 2));

		cout << "a = " << a <<endl;

		return a;

	}
	float xyb(float a)
	{
		float b;
		b = (classsumy / n1) - (a * (classsumx / n1));
		cout << "b = " << b << endl;


		return b;
			
	}



private:
	
	float classsumxy, classsumx, classsumy , classsumx2, classsumy2 ;
	int n1;
	
};



int main()
{
	MyClass first;
	float x[100], y[100];
	int n;
	float r,a,b;
	cout << "entre number of numbers" << endl;
	cin >> n;
	cout << "entre x value" << endl;
	for (int i = 0; i < n; i++)
	{
		cin >> x[i];
	}
	cout << "entre y value" <<endl;
	for (int i = 0; i < n; i++)
	{
		cin >> y[i];
	}
	
	r = first.caluc2(x, y, n);

	first.check(r);

	a = first.xya();
	b =first.xyb(a);

	cout << "Y = (" << a << ") X + (" << b << ")";
	


}
