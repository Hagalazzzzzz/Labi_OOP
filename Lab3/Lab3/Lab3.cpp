// Lab3.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//


/*
//Lab3.1
#include "pch.h"
#include <iostream>
using namespace std;

struct phone
{
	int area;
	int exchange;
	int number;
};
int main()
{
	phone ph1 = { 212, 767, 8900 };
	phone ph2;
	cout << "\nEnter your area code, exchange, and number";
	cout << "\n(Don`t use leading zeros): ";
	cin >> ph2.area >> ph2.exchange >> ph2.number;
	cout << "\nMy number is " << '(' << ph1.area << ")" << ph1.exchange << '-' << ph1.number;
	cout << "\nYour number is " << '(' << ph2.area << ")" << ph2.exchange << '-' << ph2.number << endl;
	return 0;
}
*/



/*
//lab3.2

#include "pch.h"
#include <iostream>

using namespace std;

struct point
{
	int xCo;
	int yCo;
};
int main()
{
	point p1, p2, p3;
	cout << "\nEnter coordinates for p1: ";
	cin >> p1.xCo >> p1.yCo;
	cout << "\nEnter coordinates for p2: ";
	cin >> p2.xCo >> p2.yCo;
	p3.xCo = p1.xCo + p2.xCo;
	p3.yCo = p2.yCo + p2.yCo;

	cout << "Coordinates of p1 + p2 are: " << p3.xCo << " , " << p3.yCo << endl;

return 0;
}*/


/*
//lab3.3

#include "pch.h"
#include <iostream>

using namespace std;
struct Distance
{
	int feet;
	float inches;
};

struct Volume
{
	Distance lengh;
	Distance width;
	Distance height;

};
int main()
{
	float l, w, h;
	Volume room1 = { {16,3.5},{12,6.25},{8,1.75} };
	l = room1.lengh.feet + room1.lengh.inches / 12.0;
	w = room1.width.feet + room1.width.inches / 12.0;
	h = room1.height.feet + room1.height.inches / 12.0;
	cout << "Volume = " << l * w*h << " cubic feet\n";
return 0;

}*/


/*
//lab3.4

#include "pch.h"
#include <iostream>

using namespace std;

struct employee
{
	int number_sotr;
	float posob;
};
int main()
{
	setlocale(LC_ALL, "rus");
	employee rabotyaga1, rabotyaga2, rabotyaga3;
	cout << "Введите данные первого сотрудника(номер и величину пособия): " << endl;
	cin >> rabotyaga1.number_sotr >> rabotyaga1.posob;
	cout << "Введите данные второго сотрудника(номер и величину пособия): " << endl;
	cin >> rabotyaga2.number_sotr >> rabotyaga2.posob;
	cout << "Введите данные третьего сотрудника(номер и величину пособия): " << endl;
	cin >> rabotyaga3.number_sotr >> rabotyaga3.posob;

	cout << "Информация о первом сотруднике -  его номер " <<rabotyaga1.number_sotr <<", а величинаего пособия: "<<rabotyaga1.posob<<endl;
	cout << "Информация о втором сотруднике -  его номер " << rabotyaga2.number_sotr << ", а величинаего пособия: " << rabotyaga2.posob << endl;
	cout << "Информация о третьем сотруднике -  его номер " << rabotyaga3.number_sotr << ", а величинаего пособия: " << rabotyaga3.posob << endl;
	return 0;
}*/


/*
//lab3.5

#include "pch.h"
#include <iostream>

using namespace std;

struct date
{
	int month, day, year;

};
int main()
{
	date data1;
	setlocale(LC_ALL, "rus");
	cout << "Введите дату в формате дд/мм/гг:" << endl;
	cin >> data1.day >> data1.month >> data1.year;
	cout << "Введена дата: " << data1.day << "/" << data1.month << "/" << data1.year << endl;
return 0;
}*/


/*
//lab3.6

#include "pch.h"
#include <iostream>
using namespace std;
enum etype { laborer, secretary, manager, accountant, executive, researcher };

int main()
{
	etype temp;
	char letter;
	cout << "Input first letter of position\n";
	cout << "(laborer, secretary, manager, accontant, executive, reseacher): ";
	cin >> letter;
	switch (letter)
	{
	case 'l': temp = laborer; break;
	case 's': temp = secretary; break;
	case 'm': temp = manager; break;
	case 'a': temp = accountant; break;
	case 'e': temp = executive; break;
	case 'r': temp = researcher;
	}
	switch (temp)
	{
	case 0: cout << "laborer" << endl; break;
	case 1: cout << "secretary" << endl; break;
	case 2: cout << "manager" << endl; break;
	case 3: cout << "accountant" << endl; break;
	case 4: cout << "executive" << endl; break;
	case 5: cout << "researcher" << endl; break;
	}

	system("pause");
	return 0;
}*/


/*
//lab3.7

#include "pch.h"
#include <iostream>

using namespace std;

enum etype { laborarer, secretary, manager };

struct employee
{
	etype dol;
	int number;
	float zp;

};
int main()
{
	setlocale(LC_ALL, "Russian");
	employee d1, d2, d3;
	char temp;
	cout << "Введите номер сотрудника: ";
	cin >> d1.number;
	cout << "Введите доджность (l-laborer,s-secretary,m-manager): ";
	cin >> temp;
	switch (temp)
	{
	case 'l': d1.dol = laborarer; break;
	case 's': d1.dol = secretary; break;
	case 'm': d1.dol = manager; break;
	}
	cout << "Введите ЗП: ";
	cin >> d1.zp;
	cout << endl << "Сотрудник номер " << d1.number << " должность ";
	switch (d1.dol)
	{
	case 0: cout << "laborarer "; break;
	case 1: cout << "secret "; break;
	case 2: cout << "manager "; break;
	}
	cout << " с ЗП " << d1.zp << endl;
	return 0;
}*/


/*
//lab3.8

#include "pch.h"
#include <iostream>

using namespace std;
struct fraction
{
	int num; //numerator - числитель
	int den; //denominator - знаменатель
};

int main()
{
	fraction f1;
	f1.num = 1;
	f1.den = 2;

	fraction f2;
	f2.num = 3;
	f2.den = 4;
	fraction f3;//3-я дробь, которая получится при складывании 2х предыдущих

	f3.num = f1.num*f2.den + f1.den*f2.num;
	f3.den = f1.den*f2.den;
	cout << f3.num << "/" << f3.den;
	return 0;
}*/


/*
//lab3.9

#include "pch.h"
#include <iostream>

using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
	int totalsecs;
};

int main()
{
	setlocale(LC_ALL, "rus");
	time time1;
	char l;
	cout << "Введите время в формате: часы:минуты:секунды" << endl;
	cin >> time1.hours >> l >> time1.minutes >> l >> time1.seconds;
	time1.totalsecs = time1.hours * 3600 + time1.minutes * 60 + time1.seconds;
	cout << "А в секундах это будет: " << time1.totalsecs << endl;
return 0;
}*/


/*
//lab3.10

#include "pch.h"
#include <iostream>

using namespace std;

struct sterling
{
	int pounds;
	int shiling;
	int pense;
};

int main()
{
	sterling newp, oldp;
	int sumpens;
	setlocale(LC_ALL, "rus");
	cout << "Введите десятичный фунт: " << endl;
	cin >> newp.pounds >> newp.pense;
	sumpens = ((newp.pounds * 100) + newp.pense)*2.4;
	newp.pounds = sumpens / (20 * 12);
	newp.shiling = sumpens % (20 * 12) / 12;
	newp.pense = sumpens % (20 * 12) % 12;
	cout << "Старые фунты: " << newp.pounds << "." << newp.shiling << "." << newp.pense << endl;

return 0;
}*/


/*
//lab3.11


#include "pch.h"
#include <iostream>

using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
	int totalsecs;
};

int main()
{
	setlocale(LC_ALL, "rus");
	time time1, time2 ,time3;
	char l;
	cout << "Введите время в формате: часы:минуты:секунды" << endl;
	cin >> time1.hours >> l >> time1.minutes >> l >> time1.seconds;
	cout << "Введите время в формате: часы:минуты:секунды еще раз :)" << endl;
	cin >> time2.hours >> l >> time2.minutes >> l >> time2.seconds;

	time3.totalsecs = (time1.hours + time2.hours) * 3600 + (time1.minutes + time2.minutes) * 60 + time1.seconds + time2.seconds;
	time3.hours = time3.totalsecs / 3600;
	time3.minutes = (time3.totalsecs % 3600) / 60;
	time3.seconds = (time3.totalsecs % 3600) % 60;
	cout << "А в сумме это будет: " << time3.hours <<":"<<time3.minutes<<":"<<time3.seconds<< endl;
	return 0;
}
*/

/*
//lab3.12

#include "pch.h"
#include <iostream>

using namespace std;
struct fraction
{
	int numerator;
	int denominator;
};
int main()
{
	fraction f1, f2, sumf;
	char ch = '/', zn;
	do
	{
		cout << "Введите первую дробь: " << endl;
		cin >> f1.numerator >> ch >> f1.denominator;
		cout << "Введите операцию: " << endl;
		cin >> zn;
		cout << "Введите вторую дробь: " << endl;
		cin >> f2.numerator >> ch >> f2.denominator;
		switch (zn)
		{
		case '+': sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '-':  sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '*': sumf.numerator = f1.numerator * f2.denominator;
			sumf.denominator = f1.denominator * f2.denominator; break;
		case '/': sumf.numerator = f1.numerator * f2.denominator;
			sumf.denominator = f1.denominator * f2.numerator; break;
		}
		cout << sumf.numerator << ch << sumf.denominator << endl;
		cout << "Продолжить?? (y,n) " << endl;
		cin >> ch;
	} while (ch != 'n');
	return 0;
}*/