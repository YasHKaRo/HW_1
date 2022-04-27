// OOP_2.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include "Complex.h"
 //Первая часть
int main()
{
	int oper;
	setlocale(LC_ALL, "rus");
	complex a;
	cout << "Введите первой комплексное число. Реальная часть: ";
	cin >> a.Re;
	cout << "Введите Мнимую часть: ";
	cin >> a.Im;

	complex b, c;
	cout << "Введите второе комплексное число. Реальная часть: ";
	cin >> b.Re;
	cout << "Введите Мнимую часть: ";
	cin >> b.Im;
	cout << "Выберите действие(1 - сумма, 2 - разность, 3 - умножение, 4 - деление):";
	cin >> oper;
	switch (oper)
	{
		case(1): 
			c.sum(a, b);
			break;
		case(2):
			c.dif(a, b);
			break;
		case(3):
			c.mult(a, b);
			break;
		case(4):
			c.div(a, b);
			break;
		default:
		cout << "Конец первой части" << endl;
	}
	
}
/*
// Вторая часть
int main()
{
	int n1, Re, Im, find_probel;
	double max_modul = 0;
	string vremen_peremen, max_numb = "";
	ifstream file;
	complex a;

	file.open("complex.txt");
	if (!file.is_open())
	{
		cout << "file is not open" << endl;
	}
	else
	{
		file >> n1;
		vector<string> p;
		while (getline(file, vremen_peremen))
		{
			p.push_back(vremen_peremen); // добавляем в массив
		}

		for (int i = 1; i <= n1; i++)
		{
			cout << p[i] << endl;
		}
		for (int i = 1; i <= n1; i++)
		{
			vremen_peremen = p[i];
			find_probel = vremen_peremen.find(" "); // находим разделение чисел
			Re = stoi(vremen_peremen.substr(0, find_probel));
			Im = stoi(vremen_peremen.substr(find_probel, -1)); // из строки в целое 
			cout << "Re = " << Re << "\t" << "Im = " << Im << endl;
			a.Re = Re;
			a.Im = Im;
			if (max_modul < modul(a))
			{
				max_modul = modul(a);
				max_numb = vremen_peremen;
			}
		}
	}
	cout << "Max abs: " << max_modul << "\t" << endl << "max chislo: " << max_numb << endl;
}
*/
// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
