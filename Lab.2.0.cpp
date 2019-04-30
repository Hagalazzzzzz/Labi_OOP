// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
/*

// Lab 2.3
#include "pch.h"
#include <iostream>
#include <conio.h>


using namespace std;
int main()
{
	char ch;
	unsigned long total = 0;

    cout << "\nEnter a number: ";
	while ((ch = _getche()) != '\r') {
		total = total * 10 + ch - 48;
									}
	cout << "\nNumber is: " << total << endl;
	return 0;
}
*/


/*

// Lab2.4
#include "pch.h"
#include <iostream>

using namespace std;
int main() {
	double n1, n2, ans;
	char oper, ch;
	do {
		cout << "\nEnter first number, operator, second number: ";
		cin >> n1 >> oper >> n2;
		switch (oper)
		{
		case '+': ans = n1 + n2; break;

		case '-': ans = n1 - n2; break;

		case '*': ans = n1 * n2; break;

		case '/': ans = n1 / n2; break;

		default:
			ans = 0;
		}
		cout << "Answer = " << ans;
		cout << "\nDo another(Enter 'y' or 'n')? ";
		cin >> ch;
	}
		while (ch != 'n');


	return 0;

}*/

/*

//lab2.5
#include "pch.h"
#include <iostream>

using namespace std;
int main() {
	for (int i = 0; i < 20; i++) {
		for (int j = 0; j <= 39 ; j++)
		{
			if ((j > 19 - i) && (j <= 20 + i)) {
				cout << "X";
				continue;

			}

			cout << " ";


		}
		cout<< endl;
	}

	return 0;

}*/


/*
// Lab 2.6
#include "pch.h"
#include <iostream>


using namespace std;
int main() {
	unsigned int numb;
	unsigned long fact = 1;
	do {
		cout << "Enter a number: ";
		cin >> numb;
		fact = 1;
		if (numb != 0) {
			for (int i = numb; i > 0; i--)
			{
				fact *= i;


			}
			cout << "Factorial is: " << fact << endl;
		}
	} while (numb != 0);
	return 0;
}*/

/*
//Lab2.7
#include "pch.h"
#include <iostream>
#include<math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	float sum,persent;
	int years;

	cout << "Введите начальный вклад: \n";
	cin >> sum;
	cout << "Введите число лет: \n";
	cin >> years;
	cout << "Введите процентную ставку: \n";
	cin >> persent;
	sum = sum * (pow((100 + persent ), years))/100;
	cout << sum;
	return 0;
}*/

/*
//Lab2.8

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int funt1, funt2, pens1, pens2, shil1, shil2;
	char ch;
	do {
		cout << "Введите первую сумму: " << endl;
		cin >> funt1 >> pens1 >> shil1;
		cout << "Введите вторую сумму: " << endl;
		cin >> funt2 >> pens2 >> shil2;
		shil1 += shil2;
		pens1 += (pens2 + shil1 / 12);
		shil1 %= 12;
		funt1 += (funt2 + shil2 / 20);
		cout << "Всего: " << funt1 << " " << pens1 << " " << shil1;

		cout << "\nПродолжить('y' или 'n')? ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}*/

/*
//Lab2.9

#include "pch.h"
#include <iostream>
using namespace std;
int main() {
	int guest, chair, combo=1;
	setlocale(LC_ALL, "rus");
	cout << "\nВведите количество гостей: ";
	cin >> guest;
	cout << "\nВведите количество стульев: ";
	cin >> chair;
	for (int i = 0; i < chair; i++)
	{
		combo *= guest;
		guest--;
	}
	cout << "Колиство возможных рассадок гостей: " << combo;

return 0;
}*/


/*
//Lab2.10

#include "pch.h"
#include <iostream>
#include<math.h>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	float sum, persent,fut_sum,cont_sum;
	int years;

	cout << "Введите начальный вклад: \n";
	cin >> sum;
	cont_sum = sum;
	cout << "Введите процентную ставку: \n";
	cin >> persent;
	cout << "Введите желаемую сумму: ";
	cin >> fut_sum;
	for (int i = 0; i < 1; i++)
	{
		years = (log(fut_sum) - log(sum)) / log(1 + persent / 100) + 1;
	}
	cout<<"Желаемая сумма будет достигнута через "<<years<<" лет";
	return 0;
}

*/

/*
//Lab2.11

#include "pch.h"
#include <iostream>

using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	int funt1, funt2, pens1, pens2, shil1, shil2, last_pou, last_sch, last_pen;
	char ch, oper;
	do {

		cout << "Введите оператор: " << endl;
		cin >> oper;

		switch (oper)
		{
		case('+') :
			cout << "Введите первую сумму: " << endl;
			cin >> funt1 >> pens1 >> shil1;
			cout << "Введите вторую сумму: " << endl;
			cin >> funt2 >> pens2 >> shil2;
			shil1 += shil2;
			pens1 += (pens2 + shil1 / 12);
			shil1 %= 12;
			funt1 += (funt2 + shil2 / 20);
			cout << "Всего: " << funt1 << " " << pens1 << " " << shil1;
			break;
		case('-'):
			cout << "Введите первую сумму: " << endl;
			cin >> funt1 >> pens1 >> shil1;
			cout << "Введите вторую сумму: " << endl;
			cin >> funt2 >> pens2 >> shil2;
			last_pen = pens1 - pens2 + (shil1 - shil2) * 12 + (funt1 - funt2) * 240;
			last_pou = last_pen / 240;
			last_sch = (last_pen - last_pou * 240) / 12;
			last_pen = (last_pen - last_pou * 240) - last_sch * 12;
			cout << "Всего: " << last_pou << " " << last_sch << " " << last_pen;
			break;
		case('*'):
			cout << "\nВведите сумму: ";
			cin >> funt1 >> shil1 >> pens1;

			cout << "\nВведите число: ";
			cin >> funt2;
			last_pen = pens1 + shil1 * 12 + funt1 * 240;
			last_pen *= funt2;
			last_pou = last_pen / 240;
			last_sch = (last_pen - last_pou * 240) / 12;
			last_pen = (last_pen - last_pou * 240) - last_sch * 12;
			cout << "Результат: " << last_pou << "." << last_sch << "." << last_pen << endl;
			break;

		default:
			cout << "KEK";
		}

		cout << "\nПродолжить('y' или 'n')? ";
		cin >> ch;
	} while (ch != 'n');
	return 0;
}*/

/*
//lab2.12


#include "pch.h"
#include <iostream>

using namespace std;
int main() {
	int a, b, c, d, e;
	char ch1, ch2;
	char dummychar = '/';
	do
	{
		cout << "Insert the first fraction: ";
		cin >> a >> dummychar >> b;
		cout << "Insert operation: ";
		cin >> ch1;
		cout << "Insert the second fraction: ";
		cin >> c >> dummychar >> d;
		switch (ch1)
		{
		case '+':
			e = (a * d) + (b * c);
			cout << "Result is " << e << "/" << b * d << endl;
			break;
		case '-':
			e = (a * d) - (b * c);
			cout << "Result is " << e << "/" << b * d << endl;
			break;
		case '*':
			e = (a * c);
			cout << "Result is " << e << "/" << b * d << endl;
			break;
		case '/':
			e = a * d;
			cout << "Result is " << e << "/" << b * c << endl;
			break;
		default:
			cout << "You inserted wrong operation!" << endl;
		}
		cout << "\nDo you want repeat (y / n)? ";
		cin >> ch2;
	} while (ch2 != 'n');
	return 0;
}
*/
