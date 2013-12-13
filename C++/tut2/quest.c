#include <iostream>
using namespace std;

class QuestFuncs{
public:
    void questPickup(){
        cout << "You have picked up a quest!"
    }
    void questTurnin(){
        cout << "You have turned in your quest!"
    }
    void questCurrent(){
        cout << "You already are on this quest!"
    }
};
int main()
{
    int quest;
questObject QuestFuncs;

    cout << "Would you like to pick up this quest?\n\n1 - yes\n\n";
    cin >> quest;
    if(quest=1){
        cout << QuestFuncs.questPickup();
    }

    return 0;
}
