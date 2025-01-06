#include <iostream>
#include <vector>
using namespace std;

class Info{
    public:
        string first_name;
        string last_name;
        int age;
        vector <string> subject;
        void display(){
            cout << first_name  << endl;
            cout << last_name << endl;
            cout << age << endl;
            for(string sub : subject ){
                cout << sub;
            }
        }

        

};



int main(){
    Info information;
    information.first_name = "My First name ";
    information.last_name = "last name";
    information.age = 23;
    information.subject = {"math", "physics", "chem"};
    information.display();

    Info information2;
    information2.first_name = "My Second name";
    information2.last_name = "second last name";
    information2.age = 26;
    information2.subject = {"beng ","eng ", "geo " };
    information2.display();
    return 0;
}
