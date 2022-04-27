#include "Complex.h"

complex complex:: sum(complex n1, complex n2)
{
	complex n3;
	n3.Re = n1.Re + n2.Re;
	n3.Im = n1.Im + n2.Im;
	cout << n3.Re << " " << n3.Im << 'i' << endl;
	return n3;
}
complex complex:: dif(complex n1, complex n2)
{
	complex n3;
	n3.Re = n1.Re - n2.Re;
	n3.Im = n1.Im - n2.Im;
	cout << n3.Re << " " << n3.Im << "i" << endl;
	return n3;
}
complex complex:: mult(complex n1, complex n2)
{
	complex n3;
	n3.Re = n1.Re * n2.Re - n1.Im * n2.Im;
	n3.Im = n1.Re * n2.Re + n1.Im * n2.Im;
	cout << n3.Re << " " << n3.Im << "i" << endl;
	return n3;
}
complex complex:: div(complex n1, complex n2)
{
	complex n3;
	n3.Re = (n1.Re * n2.Re + n1.Im * n2.Im) / (pow(n2.Re, 2) + pow(n2.Im, 2));
	n3.Im = (n1.Im * n2.Re - n1.Re * n2.Im) / (pow(n2.Re, 2) + pow(n2.Im, 2));
	cout << n3.Re << " " << n3.Im << "i" << endl;
	return n3;
}
double modul(complex a)
{
	return sqrt(pow(a.Re, 2) + pow(a.Im, 2));
}
