#include "Account_Util.h"

void display(const std::vector<Account*> &accounts){
    for (auto ptr:accounts)
        std::cout<<*ptr;
        std::cout<<"+++++++++++++++++++++++"<<std::endl;
}

void deposit(std::vector<Account*> &accounts, double amount){
    for (auto ptr:accounts)
        ptr->deposit(amount);
}

void withdraw(std::vector<Account*> &accounts, double amount){
    for (auto ptr:accounts)
        ptr->withdraw(amount);
}