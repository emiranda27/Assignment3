#ifndef SAVINGSACCOUNT_H
#define SAVINGSACCOUNT_H
#include "account.h"


class SavingsAccount : public Account
{
private:
    double interestRate;
public:
    SavingsAccount();
    SavingsAccount(double newTotal, QString newAccountName, int newAccountNumber, double newInterestRate);
    ~SavingsAccount();
    void setInterestRate(double newInterestRate);
    double getInterestRate();
    void interestRateAccount();
};

#endif // SAVINGSACCOUNT_H
