#include<iostream>
using namespace std;
class BankAccount
{
    int accountNumber;
    int balance;
    int transBal1;
    int transBal2;

    public:
        int getinfo1()
        {
            cin>>this->accountNumber;
            return accountNumber;
        }
        int getinfo2()
        {
            cin>>this->balance;
            return balance;
        }
        void setter(int accountNumber,int balance)
        {
            this->balance=balance;
            this->accountNumber=accountNumber;
        }
        void giveinfo()
        {
            cout<<this->accountNumber;
            cout<<this->balance;
        }
        int depo()
        {
            cin>>this->transBal1;
            return transBal1;
        }
        int withd()
        {
            cin>>this->transBal2;
            return transBal2;
        }
        void transdepo(int accountNumber,int balance,int depobal);
        void transwithd(int accno,int balance,int withdbal);
};

void BankAccount::transdepo(int accno,int balance,int depobal)
{
    balance+=depobal;
    cout<<"Account "<<accno<<" has a balance of: "<<balance;
}

void BankAccount::transwithd(int accno,int balance,int withdbal)
{
    if(withdbal>balance)
    {
        balance=balance;
    }
    else
    {
        balance-=withdbal;
    }
    cout<<"Account "<<balance<<" has a balance of: "<<balance;
}

int main()
{
    int bal1,bal2;
    int accno1,accno2;
    BankAccount acc1,acc2;
    accno1=acc1.getinfo1();
    bal1=acc1.getinfo2();
    accno2=acc2.getinfo1();
    bal2=acc2.getinfo2();
    int depobal=acc1.depo();
    int withdbal=acc2.withd();
    if(withdbal>bal2)
    {
        cout<<"Insufficient balance in account "<<accno2;
    }
    acc1.transdepo(accno1,bal1,depobal);
    acc2.transwithd(accno2,bal2,withdbal);
}