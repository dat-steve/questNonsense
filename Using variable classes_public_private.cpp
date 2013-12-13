#include <iostream>
#include <string>
using namespace std;

class stevesClass{
    public:
        stevesClass(string z){ // so confused on contructors!? //
            setName(z);
        }
        void setName(string  x){
            name = x;
        }
        string getName(){
            return name;
        }
    private:
        string name;

};


int main()
{
    stevesClass so("steveohickso");
    cout << so.getName();

    return 0;
}
