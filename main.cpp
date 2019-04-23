// 1.1
//#include <iostream>
//
//using namespace std;
//int main() {
//    float gallons, cufeet;
//    cout<<"Enter quantity in gallons: \n";
//    cin>>gallons;
//    cufeet = gallons/7.481;
//    cout<<"Equivalent in cublic feet is "<<cufeet<<endl;
//
//    return 0;
//}


//1.2

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//    cout<<1990<<setw(8)<<135<<endl
//        <<1991<<setw(8)<<7290<<endl
//        <<1992<<setw(8)<<11300<<endl
//        <<1993<<setw(8)<<16200<<endl;
//    return 0;
//}


//1.3

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
// int var =10;
// cout<< var<<endl;
// var*=2;
// cout<<var<<endl;
// cout<<--var<<endl;
//    return 0;
//}

//1.4

//#include <iostream>
//#include <clocale>
//using namespace std;
//
//int main() {
//setlocale(LC_ALL,"rus");
//cout<<"Русь моя, жизнь моя, вместе ль нам маяться?\n"<<endl
//      <<"Царь, да Сибирь, да Ермак, да тюрьма!\n"<<endl
//      <<"Эх, не пора ль разлучиться, раскаяться…\n"<<endl
//      <<"Вольному сердцу на что твоя тьма?"<<endl
//      <<"Знала ли что? Или в бога ты верила?\n"<<endl
//      <<"Что’ там услышишь из песен твоих?\n"<<endl
//      <<"Чудь начудила, да Меря намерила\n"<<endl
//      <<"Гатей, дорог да столбов верстовых…"<<endl
//      <<"Лодки да грады по рекам рубила ты,\n"<<endl
//      <<"Но до Царьградских святынь не дошла…\n"<<endl
//      <<"Соколов, лебедей в степь распустила ты —\n"<<endl
//      <<"Кинулась и’з степи черная мгла…"<<endl;
//    return 0;
//}

//1.5

//#include <iostream>
//#include <CTYPE.H>
//using namespace std;
//
//int main() {
//    char bukva;
//
//cout<<"Please, enter a bukvy";
//cin>>bukva;
//if (islower(bukva) == 0){
//    cout<<"Bukva verhnevo registra: \n"<<islower(bukva)<<endl;
//} else
//    cout<<"Bukva lower registra: \n"<<islower(bukva)<<endl;
//return 0;
//}

//1.6

//#include <iostream>
//#include <iomanip>
//using namespace std;
//
//int main() {
//float number;
//cout<<"Please, enter kolichestvo baksov"<<endl;
//cin>>number;
//cout<<"V funtax = "<<setw(4)<<number*1.487<<endl
//    <<"V frankax = "<<setw(4)<<number*0.172<<endl
//    <<"V german mark = "<<setw(4)<<number*0.584<<endl
//    <<"V japan yeon = "<<setw(4)<<number*0.00955<<endl;
//    return 0;
//}

//1.7

//#include <iostream>
//using namespace std;
//
//int main() {
//    float number;
//cout<<"Please, enter kolichestvo gradusov"<<endl;
//cin>>number;
//cout<<"V farengeitax = "<<(number*9/5)+32<<endl;
//    return 0;
//}

//1.8

//#include <iostream>
//#include <iomanip>
//
//#include <clocale>
//using namespace std;
//
//int main() {
//
//    setlocale(LC_ALL, "rus");
//    cout<<"Москва"<<setw(12)<<8425785<<endl;
//    cout<<"Москва"<<setfill('.')<<setw(12)<<8425785<<endl;
//    return 0;
//}

//1.9

//#include <iostream>
//#include <cmath>
//#include <iomanip>
//using namespace std;
//int main() {
//    int a, b, c, d;
//    char dummychar;
//    cout << "Vvedite 1 drob: ";
//    cin >> a >> dummychar >> b;
//    cout <<"Vvedite 2 drob: ";
//    cin >> c >> dummychar >> d;
//    cout << a*d + b*c << "/" << b*d << endl;
//    return 0;
//}

//1.10

//#include <iostream>
//using namespace std;
//int main()
//{
//    double funt, shilling, pens, sum=0;
//
//    cout<<"Vvedite funt:";
//    cin>>funt;
//
//    cout<<"Vvedite shilling:";
//    cin>>shilling;
//
//    cout<<"Vvedite pens:";
//    cin>>pens;
//
//    sum=(shilling*12+pens)/2.4;
//
//    funt+=sum/100;
//
//    cout<<"Desjatichnuh funtov:"<<funt<<endl;
//    cout<<"\n";
//
//    return 0;
//}

//1.11

//#include <iostream>
//#include <iomanip>
//using namespace std;
//int main() {
//    setlocale(LC_ALL, "Rus");
//    cout << setiosflags(ios::left)<< setfill('.') << setw(10) << "Фамилия"
//         << setfill('.') << setw(10) << "Имя"
//         << setfill('.') << setw(15) << "Адрес"
//         << setfill('.') << setw(12) << "Город"<<"\n"
//         << setfill('.') << setw(10) << "Петров"
//         << setfill('.') << setw(10) << "Василий"
//         << setfill('.') << setw(15) << "Кленовая 16"
//         << setfill('.') << setw(12) << "Питер"<<"\n"
//         << setfill('.') << setw(10) << "Иванов"
//         << setfill('.') << setw(10) << "Сергей"
//         << setfill('.') << setw(15) << "Осиновая 3"
//         << setfill('.') << setw(12) << "Находка"<<"\n"
//         << setfill('.') << setw(10) << "Сидоров"
//         << setfill('.') << setw(10) << "Иван"
//         << setfill('.') << setw(15) << "Березовая 21"
//         << setfill('.') << setw(12) << "Калиниград"<<"\n";
//    cin.get();
//    return 0;
//}

//1.12


#include <iostream>
#include <iomanip>
#include <ctype.h>
using namespace std;
int main()
{
    int old01,old02,old1,old2,old3;
    float decpounds;   // сумма в десятичных фунтах
    cout<<"Vvedite kolichestvo funtov\n";
    cin>>decpounds;
    old01=decpounds*240;    // sum v old pens
    old02=old01/12;
    old1=old02/20;      // sum old funt
    old2=(old01/12)-(20*old1);  // sum old shiling
    old3=old01%=12;     // sum old pens
    cout<<old1<<"."<<old2<<"."<<old3<<endl;
    return 0;
}