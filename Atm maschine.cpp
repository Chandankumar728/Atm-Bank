#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{

    int pin;
    int password=123;
    int count=0;
    int entry;
    double deposit=0.0;
    double balance=0.0;
    double withdraw=0.0;
    bool isTrue=true;
    do{
        cout<<"-------------WELCOME TO BANK OF INDIA ATM-------------------\n";
        cout<<" Enter your ATM pin \n";
        cin>>pin;
        if (pin=password)
        {

        do{
            cout<<"**************WELCOME TO ATM MASCHINE************\n"
            <<"1.Deposit \n"
            <<"2. Withdraw \n"
            <<"3. Balance \n"
            <<"4.Exit \n";
            cout<<"please choose an optin \n ";
            cin>>entry;
            switch(entry)
            {
            case 1:
                cout<<"Deposit Amount \n";
                cin>>deposit;
                balance= balance + deposit;
                break;
            case 2:
                cout<<"withdraw amount \n";
                cin>>withdraw;
                balance=balance - withdraw;
                break;
                case 3:
                    cout<<"current balance : "<<balance <<endl;
                    break;
                case 4:
                    cout<<"HAVE A NICE DAY !!!!..............\n";
                    isTrue = false;
                    break;

            }
        }while(isTrue !=false);
    }
    else{
        count++;
        if ( count == 3)
            isTrue = false;
            else
                cout<<"Wrong pin \n";
            }
    }while (isTrue !=false);
    return 0;
}
