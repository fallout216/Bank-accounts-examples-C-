// Simple Account 
#ifndef _ACCOUNT_H_
#define _ACCOUNT_H_

#include "I_Printable.h"
#include <iostream>
#include <string>

class Account: public I_Printable {

private:   
    static constexpr const char *def_name = "Unnamed Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string name;
    double balance;
public:
    Account(std::string, double);
    virtual bool deposit(double ) = 0;
    virtual bool withdraw(double ) = 0;
    virtual void print(std::ostream &os) const override =0;
    virtual ~Account() = default;
};
#endif