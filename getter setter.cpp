#include <bits/stdc++.h>
using namespace std;

//class name
private:
        class Character{
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
        
    };

int main() {
    
	Character player1;
	player1.setHP(90);
	cout<< player1.getHP();
	

}
