#include <iostream>
using namespace std;

class StevesClass{
    public:
        void coolSaying(){
            cout << "Preaching to the choir!" << endl;
        }

};

int main()
{
    StevesClass stevesObject;
    stevesObject.coolSaying();
    return 0;
}


