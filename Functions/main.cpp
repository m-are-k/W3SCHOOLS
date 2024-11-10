#include <iostream>

using namespace std;

void firstFunction()
{
    for (int i = 0;i<5;i++)
    {
        cout << i+1 << " - " << "guest is coming" << endl;
    }
}

void presentYourSelf(string yourname)
{
    cout << "Everybody his name is: " << yourname << endl;
}

void calculator(int a, int b , int c)
{
    cout << "if you want to add numbers type '1' if you want to multiply numbers type '2': ";
    cin >> c;
    cout << "input first number: ";
    cin >> a;
    cout << "input second number: ";
    cin >> b;
    if (c==1)
    {
        cout << "The result is: " << a+b;
    } else if(c==2)
    {
        cout << "The result is: " << a*b;
    } else
    {
        cout << "wrong input: ";
    }
}
int main()
{
    calculator(int a,int b,int c);
    string name;
    cout << "type your name: ";
    cin >> name;
    presentYourSelf(name);
    firstFunction();
    return 0;
}
