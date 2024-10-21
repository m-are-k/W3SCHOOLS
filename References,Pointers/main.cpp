#include <iostream>

using namespace std;

int main()
{
    string food = "Burger";
    string &meat = food;
    cout << "This is your current order: " << meat;
    cout << endl << "This is memory address of your order: " << &food; // References and pointers are useful because you can manipulate data with it
    string* pointer = &food; // Type of pointer has to match type of variable
    cout << endl << "this is your first pointer: " << pointer;
    cout << endl << "this is what pointer is showing: " << *pointer; // u can also show what is value of variable by reversing pointer
    *pointer = "Cheese";
    cout << endl << "This is the new value of food: " << *pointer;
    return 0;
}
