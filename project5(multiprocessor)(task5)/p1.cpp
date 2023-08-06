#include <iostream>
#include <string.h>
using namespace std;

class Message {
private:
    string intMsg;

public:
    
    Message(const string& msg = "Message 1 : ") : intMsg(msg) {}

    void print() {
        cout<<intMsg<<endl;
    }

    void print(const string& addMsg) {
        cout<<intMsg<<" "<<addMsg<<endl;
    }
};

int main() {
    Message msg1;  
    Message msg2("Message 2 : ");

    msg1.print();                  
    msg1.print("Additional text"); 

    msg2.print();                 
    msg2.print("More text");       

    return 0;
}
