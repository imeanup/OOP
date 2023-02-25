#include <iostream>
using namespace std;

class faculty {
private:
    int fid;
    char name[20];
public:
    void getdata() {
        cout << "Enter faculty id: ";
        cin >> fid;
        cout << "Enter Name: ";
        cin >> name;
    }
    int get_fid() {
        return fid;
    }
    const char* get_name() {
        return name;
    }
};

class details : public faculty {
public:
    int age, exp;
    void getdetails() {
        getdata();
        cout << "Enter age: ";
        cin >> age;
        cout << "Enter years of experience: ";
        cin >> exp;
    }
    void display() {
        cout << "\n--Output--\n" << "Faculty id \t" << get_fid() << endl;
        cout << "Name of faculty \t" << get_name() << endl;
        cout << "Faculty age \t" << age << endl;
        cout << "Faculty years of experience \t" << exp << endl;
    }
};

int main() {
    details m;
    m.getdetails();
    m.display();
    return 0;
}
