#include <iostream>
#include "ModulesMasnyi.h"
using namespace std;

string WriteName()
{
    string str = "...::: © Masnyi Vladislav :::...";
    return str;
}

int CompareAB(char a, char b)
{
    return (int)(a <= b-32);
}
double ThirdFunc(int x, int y, int z)
{
    cout << "X Y Z = " << x << " " << y << " "<< z << endl;
    cout << "HEX X Y Z = " << hex << x << " ";
    cout << hex << y << " ";
    cout << hex << z << " " << endl;
    cout << "S = ";
    return s_calculation(x,y,z);
}

int main()
{

    int x,y,z;
    cout << "Enter x" << endl;
    cin >> x;
    cout << "Enter y" << endl;
    cin >> y;
    cout << "Enter z" << endl;
    cin >> z;
    char a ,b;
    cout << "Enter a" << endl;
    cin >> a;
    cout << "Enter b" << endl;
    cin >> b;
    setlocale(LC_ALL,"");
    cout <<"::::::::::::::::::::::::::::::::" << endl << WriteName() << endl <<"::::::::::::::::::::::::::::::::" << endl << CompareAB(a, b) << endl;
    cout << ThirdFunc(x,y,z) << endl;
   // cout << b;


    return 0;
}
