// Beni Yaratan Elbet Yolumu Gösterir .Şuara78
//Bu program girilen iki sayının hangisinin daha büyük olduğunu bulmak için yazılmıştır.
//This program written for find enried two numbers which one is bigger than other number.


#include <iostream>
using namespace std;


int main()
{
    int number1;
    int number2;

    cout << "Please enter the first number:";
    cout << endl;
    cin >> number1;

    cout << endl;

    cout << "Please enter the second number :";
    cout << endl;
    cin >> number2;

    cout << endl;
    
    if (number1 == number2)
    {
        cout << " !!!Notification!!! Numbers cant be equal ";
        cout << endl;

        while (number1==number2)
        {
            cout << "Please enter the first number :";
            cin >> number1;
            cout << endl;
            cout << "Please enter the second number : ";
            cin >> number2;
            cout << endl;

           
        }
    }

        if (number1 > number2)
        {
            cout << "First number bigger than second number.";
            cout << endl;

        }

        else if (number2 > number1)
        {
            cout << "Second number bigger than first number.";
            cout << endl;
        }
    
    
    system("PAUSE");
    return 0;
}

