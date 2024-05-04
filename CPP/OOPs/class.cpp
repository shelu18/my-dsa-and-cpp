#include<iostream>
#include<string>
using namespace std;

class player {    // class is blue print of object
    public:
    int health;
    int score;
   string name;
}; 

int main (){
    player shelu;
    shelu.health = 100;        
    shelu.score=98;          // this is how we create object of any class
    shelu.name="Shelu";    //.operator is used to access the member of the class no matter what data type it is...
    
    cout<<shelu.health<<endl;    //objects are instence of the class and they are used to access the member of the class
    cout<<shelu.score<<endl;
    cout<<shelu.name<<endl;
};