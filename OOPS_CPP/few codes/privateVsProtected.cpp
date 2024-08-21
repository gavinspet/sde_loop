#include <iostream>

using namespace std;

class parent{
    int wife;


    protected:
    int money = 10000;
    void spendMoney(int x){
        money -= x;
    }
    int CheckBalance(){
        return money;
    }
    void sleepWithWife(int x){
        wife -= x;
    }
    
    void giveGifttoWife(){
        wife += 4;
    }

    public:
    void addMoney(int x){
        money += x;
    }
};

class child : public parent{
    public:
    void useParentMoney(int x){
        spendMoney(x);
        cout << CheckBalance() << "\n";
    }
};

int main(){
    // parent pd;
    // pd.addMoney(1000);

    child cd;
    cd.useParentMoney(10);

    // cd.spendMoney(10);

    // cout << cd.CheckBalance() << "\n";
}