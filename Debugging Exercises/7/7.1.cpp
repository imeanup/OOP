#include <iostream>

using namespace std;

class Space{
    int mCount;
    public:
        Space(){
            mCount = 0;
        }
        // Overload the pre-increment operator
        Space operator++(){
            mCount++;
            return *this;
        }
};

int main(){
    Space objSpace;
    ++objSpace; // Use the pre-increment operator
    return 0;
}