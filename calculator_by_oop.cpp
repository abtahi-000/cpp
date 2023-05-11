#include<iostream>
using namespace std;

class calculator
{
    public:

    void choice1(int x1)
    {
        switch (x1)
        {
        case 1:
             add();
            break;
        case 2:
             //sub();
            break;
        case 3:
             //mul();
            break;
        case 4:
            // div();
            break;
        default:
            break;
        }
    }

    void add()
    {
        int x2,y2;

        cout<<"Enter number:";
        cin>>x2>>y2;
        cout<<"Here is your addition is:"<<x2+y2;

    }



};

int main()
{
    calculator obj;
    int choice;
    
    cout<<"Here is your menu"<<endl;
    cout<<"Click 1 to Add two numbers"<<endl;
    cout<<"Click 2 to Sub two numbers"<<endl;
    cout<<"Click 3 to Mul two numbers"<<endl;
    cout<<"Click 4 to Div two numbers"<<endl;
    cout<<"Enter your choise number:";
    cin>>choice;

    obj.choice1(choice);



   





    return 0;
}