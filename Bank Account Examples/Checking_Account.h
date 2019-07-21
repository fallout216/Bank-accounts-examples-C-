#ifndef _CHECKING_ACCOUNT_H_
#define _CHECKING_ACCOUNT_H_

#include <iostream>
#include <string>

#include "Account.h"

class Checking_Account: public Account{
    
private:
    static constexpr const char* def_name = "Unnamed Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_fee = 1.5;
    
protected:
    double fee;
    
public:
    Checking_Account(std::string given_name = def_name, double given_balance = def_balance, double given_fee = def_fee);
    virtual bool deposit(double ) override;
    virtual bool withdraw(double ) override;
    virtual ~Checking_Account() = default;
    virtual void print(std::ostream &os) const override;
};

#endif