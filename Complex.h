#ifndef COMPLEX_H
#define COMPLEX_H
#include<iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;
struct complex
{
	double Re = 0, Im = 0;

	complex sum(complex n1, complex n2);
	complex dif(complex n1, complex n2);
	complex mult(complex n1, complex n2);
	complex div(complex n1, complex n2);

	complex() 
	{
		Re = 0;
		Im = 0;
	};
};


double modul(complex a);
#endif
