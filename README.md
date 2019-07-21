# Bank-accounts-examples-Cpp
Practicing C++ template classes, polymorphism, overriding and inheritance concepts by creating three categories of bank accounts with different functions. Please run main.cpp for a demonstration.

I_printable is a template class that overrides << output opreator.
Account is a template class derived from I_printable that provides basic deposit, withdrawl and display functions.
Savings_Account class is derived from Account. It uses polymorphism to implement a special deposit function such that whenever a Savings_Account object deposits money, a bonus percentage of the money is deposited as well.
Checking_Account class is derived from Account. It uses polymorphism to implement a special withrawl function such that whenever a Checking_Account object withdraws money, a handling fee is charged.
Trust_Account class is derived from Savings_Account. It uses polymorphism to implement a special withrawl function such that there is a limit on the number of the withdrawls made. If the limit is reached, no withdrawls will occur. Also, if a Trust_Account object attempts to withdraw money that is greater some percentage of the current balance, no withdrawls will occur. It also uses polymorphism to implement a special deposit function such that if it deposits money that is greater than some amount, a bonus amount of money will be deposited as well.
