#include <iostream>
#include <vector>

using namespace std;

// header

class Transaction {
    private:
        int value;
        string _type;
        bool valid;
    public:
        Transaction(int amount, string transactionType, bool valid);
        ~Transaction();
        int amount();
        string type();
        bool isDeposit();
        bool isValid();
};

class Account {
    private:
        vector <Transaction *> transactions;
    
    public:
        Account();
        ~Account();
        int balance();
        void deposit(int amount);
        void withdraw(int amount);
        vector<string> report();
        void printLog ();
};

