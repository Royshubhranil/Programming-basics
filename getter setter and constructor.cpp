#include <bits/stdc++.h>
using namespace std;
//class definition
class Division{
//access specifiers private and public
    private:
        int Rank =5;
        int length; 
    public:
        //defining non parameterised constructor
        Division(){
            cout<< "constructor called " << endl;
        }
        //parameterised constructor
        Division(int h){
            float height = h;
            cout <<"height of Hero = " << height << endl;
        }
        
        
    
        string name;
        string power;
        int Health;
	//static variable declaration
        static string nickname;
    void Display(){
        cout << endl;
        cout<< name <<endl;
        cout<< power <<endl;
        cout<< Health <<endl;
        cout << nickname << endl; 
        
    }
    int getRank(){
       return Rank; 
    }
    void setRank(int newRank, int remainingHealth){
        if(remainingHealth == 70){
            Rank = newRank; 
        }
        
    }

    
};
//static variable call without object
string Division :: nickname = "heroacademia";

int main() {
    //static variable print
    cout << Division :: nickname << endl;

	//definition of first object
    Division assassin(5.6);
    assassin.name = "Attacker";
    assassin.power = "long-range";
    assassin.Health = 70;
    assassin.setRank(2, 70);
    assassin.Display();
    cout << assassin.getRank();
    
    Division assassin1;
    assassin.name = "Mage";
    assassin.power = "short-range";
    assassin.Health = 45;
    assassin.setRank(2, 45);
    assassin.Display();
    cout << "address of the object -> " << &assassin1;
    cout << assassin.getRank();
    
    
    
    
    
    
    
    
    
    
	
	return 0;

}
