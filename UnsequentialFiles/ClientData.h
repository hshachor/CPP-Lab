#include <iostream>
#include <cstring>
#include <string>
using namespace std;

class ClientData
{
private:
    int accountNumber;
    char name[20];
    double balance;
public:
    ClientData(int accountNum = 0, string name = "", double balance = 0.0);
    void setAccountNumber(int accountNum);
    int getAccountNumber() const;
    void setName(string tName);
    string getName() const;
    void setBalance(double balanceValue);
    double getBalance() const;
    friend ofstream& operator<< (ofstream&, ClientData&);
}; // end class CientData

//--------------------------------------------

ClientData::ClientData(int accountNum, string Name, double Balance)
{
    setAccountNumber(accountNum);
    setName(Name);
    setBalance(Balance);
}

void ClientData::setAccountNumber(int accountNum)
{
    accountNumber = accountNum;
}

int ClientData::getAccountNumber() const
{
    return accountNumber;
}

void ClientData::setName(string Name)
{
    strcpy(name, Name.c_str());
}

string ClientData::getName() const
{
    return name;
}

void ClientData::setBalance(double balanceValue)
{
    balance = balanceValue;
}

double ClientData::getBalance() const
{
    return balance;
}

ofstream& operator<<(ofstream& os, ClientData& client)
{
    os << client.accountNumber << '\t' << client.name << '\t' << client.balance << '\n';
    return os;
}



