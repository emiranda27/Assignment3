#ifndef CHECKINGACCOUNT_H
#define CHECKINGACCOUNT_H
#include "account.h"


class CheckingAccount : public Account
{
private:
    const double overdraftFee = 25.0;
public:
    CheckingAccount();
    CheckingAccount(double newTotal, QString newAccountName, int newAccountNumber);
    ~CheckingAccount();
    double getOverdraftFee();
    void overdraftAccount();
};

#endif // CHECKINGACCOUNT_H
