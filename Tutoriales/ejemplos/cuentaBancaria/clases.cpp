#include <iostream>
#include <string>
#include <vector>
#include <cassert>
#include <cstdlib>
#include "clases.hpp"
using namespace std;


//cpp
Transaction::Transaction(int amount, string transactionType, bool validate){
    value = amount;
    _type = transactionType;
    valid = validate;
}
Transaction::~Transaction(){}
int Transaction::amount(){
    return value;
}
string Transaction::type(){
    return _type;
}
bool Transaction::isDeposit(){
    if (type() == "deposit"){
        return true;
    } 
    return false;
}
bool Transaction::isValid(){
    return valid;
}

Account::Account() {}
Account::~Account() {}
int Account::balance() {
    int total = 0;
    if (transactions.size() == 0){
        return 0;
    }
    for (auto each = transactions.begin(); each != transactions.end(); each++){
        if ("deposit" == (*each)->type()){
            total += (*each)->amount();
        } else if ("withdraw" == (*each)->type() && (*each)->isValid() == true){
            total -= (*each)->amount();
        }
    }
    return total;
}

void Account::deposit(int amount) {
    transactions.emplace_back( new Transaction(amount, "deposit", true));
}

void Account::withdraw(int amount) {
    int total = balance();
    if (amount > total){
        transactions.emplace_back(new Transaction(amount, "withdraw", false));
        return;
    }
    transactions.emplace_back (new Transaction(amount, "withdraw", true));
    return;
}

vector<string> Account::report(){
    vector <string> report;
    for ( auto each = transactions.begin(); each != transactions.end(); each++){
        if ((*each)->isDeposit()){
            report.emplace_back("deposit of " + to_string((*each)->amount()));
        } else {
            if ((*each)->isValid()){
                report.emplace_back("withdraw of " + to_string((*each)->amount()));
            } else {
                report.emplace_back("failed withdrawal of " + to_string((*each)->amount()));
            }
        }
    }
    return report;
}

// void Account::printLog (){
//     int counter = 0;
//     cout << "Transactions report:" << endl;
//     for (auto each = log.begin(); each != log.end(); each++){
//         cout << "log " << counter <<": " << *each << endl;
//         counter++;
//     }
// }