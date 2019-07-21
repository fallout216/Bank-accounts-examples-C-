#include "Checking_Account.h"

Checking_Account::Checking_Account(std::string given_name, double given_balance, double given_fee)
    :Account::Account{given_name,given_balance}, fee{given_fee}{
}


bool Checking_Account::deposit(double amount){
    return Account::deposit(amount);
}

bool Checking_Account::withdraw(double amount){
    return Account::withdraw(amount+fee);
}

void Checking_Account::print(std::ostream &os) const{
    os << "[Checkin_Account: " << name << ": " << balance << ", " << fee << "]"<<std::endl;
}