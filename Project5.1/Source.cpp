#include<iostream>
#include<cmath>
using namespace std;
double p (const double x);
int main()
{
	double p, s;
	cout << "p="; cin >> p;
	cout << "s="; cin >> s;
	double c = (p * p * (1 + s * s) + p * p * p * (1 - s * s * s)) / (1 + p * (10 * s));
	cout << "c=" << c << endl;
	return 0;
}
double p(const double x)
{
	return (1 + sin(x) * sin(x));
}