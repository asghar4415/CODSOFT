#include <iostream>

using namespace std;


void calculate(double a, double b)
{
    int choice;
    cout<<"Choose an operation to perform: "<<endl;
    cout<<"1. Addition"<<endl;
    cout<<"2. Subtraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:{
            cout<<"a+b = "<<a+b<<endl;  

        }break;
        case 2:{
            cout<<"a-b = "<<a-b<<endl;


        }break;
        case 3:{
            cout<<"a*b = "<<a*b<<endl;

        }break;
        case 4:{
            cout<<"a/b = "<<a/b<<endl;

        }break;
        default:{
            cout<<"Invalid choice!"<<endl;
        }
    }
}

int main()
{
    double num1, num2;
    cout<<"Enter two numbers: ";
    cin>>num1>>num2;
    
    calculate(num1, num2);


    return 0;
}