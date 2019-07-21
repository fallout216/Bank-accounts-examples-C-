#include "Trust_Account.h"


Trust_Account::Trust_Account(std::string given_name,  double given_balance, double given_int_rate, int given_withd_limit)
    :Savings_Account{given_name,given_balance,given_int_rate}, withd_limit{0}{
        
    }
    
bool Trust_Account::deposit (double amount){
    if (amount >= def_bonus_t)
        amount += def_bonus;
    return Savings_Account::deposit(amount);
}

bool Trust_Account::withdraw(double amount){
    if (withd_limit >= def_withd_limit || (amount > balance * def_withd_t / 100 ))
        return false;
    else {
        ++withd_limit;
        return Savings_Account::withdraw(amount);
    }
}

void Trust_Account::print(std::ostream &os) const{
    os << "[Trust Account: " << name << ": " << balance << ", " << int_rate 
        << "%, withdrawals: " << withd_limit <<  "]"<<std::endl;
}