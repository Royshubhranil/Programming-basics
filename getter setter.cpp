#include <bits/stdc++.h>
using namespace std;

//class name
class Character{
private:
            int HP;
    
public:
        //getter function to get the value from private
        int getHP(){
            return HP;
        }
        //setter to set a new value from private
        void setHP(int newHP){
            HP =  newHP;
        }
//constructor without parameter
	Hero (){
		cout << "constructor without parameter" << endl;
	}
//constructor with parameter


        
    };

int main() {
    
	Character player1;
	player1.setHP(90);
	cout<< player1.getHP();
	

}
