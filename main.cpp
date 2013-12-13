#include <iostream>
using namespace std;

class QuestFuncs{
public:
    void questPickup;
        cout << "You have picked up a quest!" << endl;


    void questTurnin;
        cout << "You have turned in your quest!" << endl;


    void questCurrent;
        cout << "You already are on this quest!" << endl;

}
int main(){
QuestFuncs questObject;
int quest;
    cout << "Would you like to pick up this quest?\n\n1 - yes\n\n";
    cin >> quest;
    if(quest=1){
       questObject.questPickup();
    }
    return 0;}



