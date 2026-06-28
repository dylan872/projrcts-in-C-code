#include<iostream>
using namespace std;
class BankAccount{
    private:
    int AccountNumber;
    float Balance;
    public:
    void SetDetails(int Accon,float Bal){
        AccountNumber=Accon;
        Balance=Bal;
    }
    void deposit(float amount){
        Balance+=amount;
        cout<<"your new Account balance is "<<Balance<<endl;
    }
    void withdraw(float amount){
        if(amount>Balance){
            cout<<"You have insufficient funds to complete this transaction"<<endl;

        }else{
            Balance-=amount;
            cout<<"You're withdrawal was successful you're new Balance is "<<Balance<<endl;
        }
    }
    void display(){
       cout<<"you're account number is "<<AccountNumber<<endl;
       cout<<"Youre balance is "<<Balance<<endl;

    }
};
int main(){
    BankAccount account1;
    account1.SetDetails(123456,20000);
    account1.deposit(3000);
    account1.display();
    account1.withdraw(50000);
    return 0;
}