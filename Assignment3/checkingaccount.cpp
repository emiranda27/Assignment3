#include "checkingaccount.h"

CheckingAccount::CheckingAccount() : Account()
{
    Account::setTotal(0.0);
    Account::setAccountName(" ");
    Account::setAccountNumber(0);
}

CheckingAccount::CheckingAccount(double newTotal, QString newAccountName, int newAccountNumber) : Account()
{
    Account::setTotal(newTotal);
    Account::setAccountName(newAccountName);
    Account::setAccountNumber(newAccountNumber);
}

CheckingAccount::~CheckingAccount()
{

}

double CheckingAccount::getOverdraftFee()
{
    return overdraftFee;
}

void CheckingAccount::overdraftAccount()
{
    if (Account::getTotal() < 0)
    {
         Account::setTotal(Account::getTotal() - overdraftFee);
    }

}
