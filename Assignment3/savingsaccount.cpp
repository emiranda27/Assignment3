#include "savingsaccount.h"

SavingsAccount::SavingsAccount() : Account()
{
    Account::setTotal(0.0);
    Account::setAccountName(" ");
    Account::setAccountNumber(0);
    interestRate = 0.0;
}

SavingsAccount::SavingsAccount(double newTotal, QString newAccountName, int newAccountNumber, double newInterestRate) : Account()
{
    Account::setTotal(newTotal);
    Account::setAccountName(newAccountName);
    Account::setAccountNumber(newAccountNumber);
    setInterestRate(newInterestRate);
}

SavingsAccount::~SavingsAccount()
{

}

void SavingsAccount::setInterestRate(double newInterestRate)
{
    interestRate = newInterestRate / 100;
}

double SavingsAccount::getInterestRate()
{
    return interestRate;
}

void SavingsAccount::interestRateAccount()
{
    Account::setTotal(Account::getTotal() + getInterestRate());
}
