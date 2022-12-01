#include <iostream>
using namespace std;

class RBI
{
public:
    int minimum_interest_rate;
    int minimum_balance_allowed;
    int maximum_withdrawal_limit;
};

class SBI : public RBI
{
public:
    int sbi_interest_rate;
};

class ICICI : public RBI
{
public:
    int icici_interest_rate;
};

class PNB : public RBI
{
public:
    int pnb_interest_rate;
};

class Account : public SBI, public ICICI, public PNB
{
public:
    string account_type;
};

class Customer : public RBI, public SBI, public ICICI, public PNB
{
public:
    string bank;
    int bank_balance;
};

int main()
{

    SBI s1;
    s1.maximum_withdrawal_limit = 40000;
    s1.minimum_balance_allowed = 1000;
    s1.minimum_interest_rate = 4;

    cout << "    !!!SBI Guidelines!!!   " << endl;
    cout << "Maximum withdrawal limit: " << s1.maximum_withdrawal_limit << endl;
    cout << "Minimum Balance Allowed: " << s1.minimum_balance_allowed << endl;
    cout << "Minimum Interest Rate: " << s1.minimum_interest_rate << endl;

    Customer customer;
    customer.bank = "SBI";
    customer.sbi_interest_rate = 6;
    customer.bank_balance = 100000;

    cout << "    !!!Customer Details!!!  " << endl;
    cout << "Customer bank: " << customer.bank << endl;
    cout << "Bank Interest Rate: " << customer.sbi_interest_rate << endl;
    cout << "Bank Balance: " << customer.bank_balance << endl;

    return 0;
}