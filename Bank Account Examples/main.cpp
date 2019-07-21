// Section 16 
// Challenge 
#include <iostream>
#include <vector>
#include "Account.h"


#include "Savings_Account.h"
#include "Checking_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std; 

int main() {
    cout.precision(2);
    cout << fixed;
    
    
    // Savings 

    vector<Account*> accounts;
    Account* account1_ptr = new Savings_Account {"Porthos", 20000, 4.0};
    Account* account2_ptr = new Checking_Account {"Superman",13,2.1};
    Account* account3_ptr = new Trust_Account {"Batman", 2000};
    Account* account4_ptr = new Savings_Account {"Wonderwoman", 5000, 5.0};
    accounts.push_back(account1_ptr);
    accounts.push_back(account2_ptr);
    accounts.push_back(account3_ptr);
    accounts.push_back(account4_ptr);
    display(accounts);
    
    
    deposit(accounts,10);
    display(accounts);
    deposit(accounts,-10);
    display(accounts);
    
    withdraw(accounts,5);
    withdraw(accounts,5);
    withdraw(accounts,5);
    withdraw(accounts,5);
    withdraw(accounts,200);
    display(accounts);
    /*
    sav_accounts.push_back(Savings_Account {} );
    sav_accounts.push_back(Savings_Account {"Superman"} );
    sav_accounts.push_back(Savings_Account {"Batman", 2000} );
    sav_accounts.push_back(Savings_Account {"Wonderwoman", 5000, 5.0} );
    
    cout<<sav_accounts.at(3);
     */ 
    
    /*
    display(sav_accounts);
    deposit(sav_accounts, 1000);
    withdraw(sav_accounts,2000);
   
   // Checking
   
    vector<Checking_Account> check_accounts;
    check_accounts.push_back(Checking_Account {} );
    check_accounts.push_back(Checking_Account {"Kirk"} );
    check_accounts.push_back(Checking_Account {"Spock", 2000} );
    check_accounts.push_back(Checking_Account {"Bones", 5000} );

    display(check_accounts);
    deposit(check_accounts, 1000);
    withdraw(check_accounts, 2000);

    // Trust
  
    vector<Trust_Account> trust_accounts;
    trust_accounts.push_back(Trust_Account {} );
    trust_accounts.push_back(Trust_Account {"Athos", 10000, 5.0} );
    trust_accounts.push_back(Trust_Account {"Porthos", 20000, 4.0} );
    trust_accounts.push_back(Trust_Account {"Aramis", 30000} );

    display(trust_accounts);
    deposit(trust_accounts, 1000);
    withdraw(trust_accounts, 3000);
    
    // Withdraw 5 times from each trust account
    // All withdrawals should fail if there are too many withdrawals or if the withdrawl is > 20% of the balance
    for (int i=1; i<=5; i++)
        withdraw(trust_accounts, 1000);
    
    */
    
    return 0;
}