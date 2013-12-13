#include <iostream>
using namespace std;

class stevesClass{
    public:
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
    stevesClass so;
    so.setName("Steve Hicks");
    cout << so.getName();
    return 0;

}
