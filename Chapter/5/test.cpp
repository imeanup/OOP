#include<iostream>
using namespace std;

class addition{
    public:
    int p, q, r, s;
    void input(void){
        cout << "Enter three #s \n";
        cin >> p >> q >> r;
    }
    void display(void){
        cout << "The addition of three numbers: " << add() << endl;
    }
    int add(void){
        s = p+q+r;
        return (s);
    }

};

int main(){
    addition x;
    x.input();
    x.display();
    return 0;
}