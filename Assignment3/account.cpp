#include "account.h"
#include <QWidget>

Account::Account()
{
    total = 0.0;
    accountName = " ";
    accountNumber = 0;
}

Account::Account(double newTotal, QString newAccountName, int newAccountNumber)
{
    total = newTotal;
    accountName = newAccountName;
    accountNumber = newAccountNumber;
}

Account::~Account()
{

}

void Account::setTotal(double newTotal)
{
    total = newTotal;
}

int Account::getTotal()
{
    return total;
}

void Account::setAccountName(QString newName)
{
    accountName = newName;
}

QString Account::getAccountName()
{
    return accountName;
}

void Account::setAccountNumber(int newAccountNumber)
{
    accountNumber = newAccountNumber;
}

int Account::getAccountNumber()
{
    return accountNumber;
}
