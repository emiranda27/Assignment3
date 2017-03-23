#ifndef ACCOUNT_H
#define ACCOUNT_H
#include<iostream>
#include<QString>

class Account
{
private:
    double total;
    QString accountName;
    int accountNumber;

public:
    Account();
    Account(double newTotal, QString newAccountName, int newAccountNumber);
    ~Account();
    void setTotal(double newTotal);
    int getTotal();
    void setAccountName(QString newName);
    QString getAccountName();
    void setAccountNumber(int newAccountNumber);
    int getAccountNumber();
};

#endif // ACCOUNT_H
