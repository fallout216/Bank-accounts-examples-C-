#ifndef _TRUST_ACCOUNT_H_
#define _TRUST_ACCOUNT_H_

#include "Savings_Account.h"

class Trust_Account: public Savings_Account{
    
private:
    static constexpr const char *def_name = "Unnamed Trust Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_int_rate = 0.0;
    static constexpr double def_bonus_t = 5000.0;
    static constexpr double def_bonus = 50.0;
    static constexpr double def_withd_t = 20.0;
    static constexpr int def_withd_limit = 3;
    
protected:
    int withd_limit;
    
public:
    Trust_Account(std::string given_name = def_name, double given_balance = def_balance, double given_int_rate = def_int_rate, int given_withd_limit = def_withd_limit);
    virtual bool deposit(double ) override;
    virtual bool withdraw(double ) override;
    virtual ~Trust_Account() = default;
    virtual void print(std::ostream &os) const override;
};

#endif