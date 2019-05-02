/*
//Lab4.1

#include "pch.h"
#include <iostream>
float circarea(float radius);
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double rad;
	cout << "\nВвкдите радиус окружности: ";
	cin >> rad;
	cout << "\nПлощадь равна " << circarea(rad) << endl;
	return 0;
}

float circarea(float r) {
	const float PI = 3.14159F;
	return r * r*PI;
}*/


/*
//Lab4.2

#include "pch.h"
#include <iostream>
double power(double n, int p = 2);
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	double number,answer;
	int pow;
	char yeserno;
	cout << "\nВведите число: ";
	cin >> number;
	cout << "\nБудете возводить в степень?(y/n) " << endl;
	cin >> yeserno;
	if (yeserno == 'y') {
		cout << "Введите степень: ";
		cin >> pow;
		answer = power(number,pow);
	}
	else
	{
		answer = power(number);

	}
	cout << "Ответ: " << answer << endl;
	return 0;
}

double power(double n, int p) {
	double result = 1.0;
	for (int i = 0; i < p; i++)
	{
		result *= n;
	}
	return result;
}*/



/*
//Lab4.3

#include "pch.h"
#include <iostream>
float circarea(float radius);
using namespace std;
int main()
{
	void zeroSmaller(int&, int&);
	int a = 4, b = 7, c = 11, d = 9;
	zeroSmaller(a, b);
	zeroSmaller(c, d);
	cout << "\na= " << a << " b= " << b << " c= " << c << " d= " << d;

	return 0;
}
void zeroSmaller(int&first, int&second) {
	if (first < second)
		first = 0;
	else
		second = 0;
}*/




/*
//Lab4.4

#include "pch.h"
#include <iostream>
using namespace std;
struct Disnace
{
	int feet;
	float inches;
};
Disnace bigengl(Disnace, Disnace);
void engldisp(Disnace);
int main()
{
	setlocale(LC_ALL, "rus");
	Disnace d1, d2, d3;
	cout << "\nВведите число футов первого расстояния: ";
	cin >> d1.feet;
	cout << "\nВведите число дюймов первого расстояния: ";
	cin >> d1.inches;
	cout << "\nВведите число футов второго расстояния: ";
	cin >> d2.feet;
	cout << "\nВведите число дюймов второго расстояния: ";
	cin >> d2.inches;
	d3 = bigengl(d1, d2);
	cout << "\nd1= "; engldisp(d1);
	cout << "\nd2= "; engldisp(d2);
	cout << "\nНаибольшее: ";
	engldisp(d3);
	cout<< endl;
	return 0;
}

Disnace bigengl(Disnace dd1, Disnace dd2) {
	if (dd1.feet > dd2.feet)
		return dd1;
	if (dd1.feet < dd2.feet)
		return dd2;
	if (dd1.inches > dd2.inches)
		return dd1;
	else
		return dd2;
}

void engldisp(Disnace dd) {
	cout << dd.feet << "\'-" << dd.inches << "\"";
}*/

/*
//Lab4.5

#include "pch.h"
#include <iostream>
int hms_to_secs(int hour, int minut, int sec);
using namespace std;
int main()
{
	setlocale(LC_ALL, "rus");
	int h, m, s;
	cout << "\nВведите количество часов: ";
	cin >> h;
	cout << "\nВведите количество минут: ";
	cin >> m;
	cout << "\nВведите количество секунд: ";
	cin >> s;
	cout << "\nА в секундах это будет: " << hms_to_secs(h,m,s) << endl;
	return 0;
}

int hms_to_secs(int hour, int minut, int sec) {
	long total_sec = hour * 3600 + minut * 60 + sec;
	return total_sec;
}*/



/*
//Lab4.6


#include "pch.h"
#include <iostream>
using namespace std;
struct time
{
	int hours;
	int minutes;
	int seconds;
	long totalsecs;
};
long time_to_secs(time t1);
time secs_to_time(long tt1);
int main()
{
	setlocale(LC_ALL, "rus");
	time time1;
	char l;
	cout << "Введите время в формате: часы:минуты:секунды" << endl;
	cin >> time1.hours >> l >> time1.minutes >> l >> time1.seconds;

	cout<<time_to_secs(time1)<<endl;

	secs_to_time(500);

	return 0;
}
long time_to_secs(time t1) {
	long totalsecs = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
	return totalsecs;
}
time secs_to_time(long dd1) {
	time t;
	t.hours = dd1 / 3600;
	dd1 %= 3600; // отбросили часы
	t.minutes = dd1 / 60; // минуты
	dd1 %= 60; // отбросили минуты
	t.seconds = dd1;
	cout << t.hours << ":" << t.minutes << ":" << t.seconds;
	return t;
}*/


/*

//Lab4.7

#include <iostream>
using namespace std;
double power(double n, int p = 2);
double power(char n, int p = 2);
double power(int n, int p = 2);
double power(long n, int p = 2);
double power(float n, int p = 2);
int main()
{
	//double n;
	//int p;
	//cout<<"Vvedite chislo: ";cin>>n;
	//cout<<"\nVvedite stepen' chisla: ";cin>>p;


	cout << "\nRezul'tat: " << power(3.5, 2);
	cout << "\nRezul'tat: " << power('D', 3);
	cout << "\nRezul'tat: " << power(4, 5);
	cout << "\nRezul'tat: " << power(4, 4);
	cout << "\nRezul'tat: " << power(3.5F, 2);

	cin.get();
	cin.get();
	return 0;
}
//////////////////////////////////
double power(double n, int p)
{
	double summa = n;
	for (int j = 1; j < p; j++)
		summa *= n;
	return summa;
}
//////////////////////////////////
double power(char n, int p)
{
	char summa = n;
	for (int j = 1; j < p; j++)
		summa *= n;
	return summa;
}
//////////////////////////////////
double power(int n, int p)
{
	int summa = n;
	for (int j = 1; j < p; j++)
		summa *= n;
	return summa;
}
//////////////////////////////////
double power(long n, int p)
{
	long summa = n;
	for (int j = 1; j < p; j++)
		summa *= n;
	return summa;
}
//////////////////////////////////
double power(float n, int p)
{
	float summa = n;
	for (int j = 1; j < p; j++)
		summa *= n;
	return summa;
}*/



/*
//Lab4.8

#include "pch.h"
#include <iostream>
void swap(int&, int&);
using namespace std;
int main()
{
	int num1, num2;
	cout << "Enter first number:";
	cin >> num1;
	cout << "Enter second number:";
	cin >> num2;
	swap(num1, num2);
	cout << "First: " << num1 << " Second: " << num2;
	return 0;
}

void swap(int& nu1, int& nu2)
{
	int temp;
	temp = nu1;
	nu1 = nu2;
	nu2 = temp;
}*/





/*
//Lab4.9

#include "pch.h"
#include <iostream>
struct time
{
	int hours;
	int minutes;
	int seconds;
};

void swap(time&, time&);
using namespace std;
int main()
{
	time num1, num2;
	cout << "Enter first number:";
	cin >> num1.hours>>num1.minutes>>num1.seconds;
	cout << "Enter second number:";
	cin >> num2.hours >> num2.minutes >> num2.seconds;
	swap(num1, num2);
	cout << "First: " << num1.hours<<" "<<num1.minutes<<" "<<num1.seconds << endl;
	cout << " Second: " << num2.hours << " " << num2.minutes << " " << num2.seconds << endl;
	return 0;
}

void swap(time& nu1, time& nu2)
{
	int temp;
	temp = nu1.hours;
	nu1.hours = nu2.hours;
	nu2.hours = temp;
	temp = nu1.minutes;
	nu1.minutes = nu2.minutes;
	nu2.minutes = temp;
	temp = nu1.seconds;
	nu1.seconds = nu2.seconds;
	nu2.seconds = temp;
}*/


/*
//Lab4.10

#include "pch.h"
#include <iostream>

void f()
{
	static size_t count;
	count++;

	cout << "Функция вызвана " << count << " раз" << endl;
}
using namespace std;
int main()
{
	setlocale(0, "rus");
	static size_t count = 0;

	for (size_t i = 0; i < 10; i++)
	{
		f();
	}
	cout << "а count, зараза, равен " << count << endl;

}*/


/*

//Lab4.11

#include "pch.h"
#include <iostream>
using namespace std;
struct sterling
{
	int pounds;
	int shilling;
	int pence;
};

//Принимает от пользователя число фунтов, шиллингоу и пенсов и возвращать значение типа sterling
sterling accept(int pounds, int shilling, int pence)
{
	sterling first;
	//Фунт
	first.pounds = pounds;
	//Шиллинг
	first.shilling = shilling;
	//Пенс
	first.pence = pence;
	cout << "Фунты - " << first.pounds << " Шиллинги - " << first.shilling << " Пенни - " << first.pence << endl;
	return first;
}

//Принимает в качестве аргументов два значения типа sterling, складывает их и возвращает значения, так же имеющие тип sterling
sterling accept_pound_and_shilling(sterling f, sterling s)
{
	sterling sum;
	sum.pounds = f.pounds + s.pounds;
	cout << "Сумма фунтов - " << sum.pounds << endl;
	sum.shilling = f.shilling + s.shilling;
	cout << "Сумма шиллингов - " << sum.shilling << endl;
	sum.pence = f.pence + s.pence;
	cout << "Сумма пенсов - " << sum.pence << endl;
	return sum;
}

//Принимает аргумент типа sterling и выводит его значение на экран
void accept_sterling(sterling f)
{
	cout << "Фунты - " << f.pounds << " Шиллинги - " << f.shilling << " Пенсы - " << f.pence << endl;
}


int main()
{
	setlocale(LC_ALL, "rus");
	sterling first, second, sum;
	cout << "Введите фунты, шиллинги, пенс: ";
	cin >> first.pounds >> first.shilling >> first.pence;

	accept(first.pounds, first.shilling, first.pence);

	cout << "Введите вторые значение фунт, шиллингов и пенсов : ";
	cin >> second.pounds >> second.shilling >> second.pence;

	accept_pound_and_shilling(first, second);

	accept_sterling(first);

	return 0;
}*/


/*
//Lab4.12
#include "pch.h"
#include <iostream>
#include <iomanip>
using namespace std;
struct fraction
{
	int numerator;
	int denominator;
};
fraction f1, f2, sumf;

fraction fadd(fraction, fraction);
fraction fsub(fraction, fraction);
fraction fmul(fraction, fraction);
fraction fdiv(fraction, fraction);

int main()
{
	char ch = '/', zn;
	do
	{
		cout << "enter 1-st fraction" << endl;
		cin >> f1.numerator >> ch >> f1.denominator;
		cout << "Enter symbol" << endl;
		cin >> zn;
		cout << "enter 2-nd fraction" << endl;
		cin >> f2.numerator >> ch >> f2.denominator;
		switch (zn)
		{
		case '+': sumf = fadd(f1, f2); break;
		case '-': sumf = fsub(f1, f2); break;
		case '*': sumf = fmul(f1, f2); break;
		case '/': sumf = fdiv(f1, f2); break;
		}
		cout << sumf.numerator << ch << sumf.denominator << endl;
		cout << "esche raz? (y,n)" << endl;
		cin >> ch;
	} while (ch != 'n');
	return 0;
}

fraction fadd(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator + f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fsub(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator - f1.denominator * f2.numerator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fmul(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator;
	sumf.denominator = f1.denominator * f2.denominator;
	return sumf;
}

fraction fdiv(fraction f1, fraction f2)
{
	sumf.numerator = f1.numerator * f2.denominator;
	sumf.denominator = f1.denominator * f2.numerator;
	return sumf;
}*/