#include <iostream>
#include <string>
using namespace std;

int main(){
    /// declare the balance and interest, then intitialize
    double balance = 1000;
    double interest = 5;
    /// declare the number of months and interest per month
    int months = 3;
    double interest_per_month = 0;
    /// create a for loop that depends on the number of months
    for(int i = 1; i <= months; i++){
        interest_per_month = (interest / 100) * balance;
        balance += interest_per_month;
        cout << "The balance after year " << i << " is $" << balance << '\n';
    }
    return 0;
}
