#include<iostream>
#include<string>

using namespace std;
 class player {
    public:
    int health;
    int score;
    string name;
    void show(){
        cout<<"i am a member function of player CLASS"<<endl;
    };
};
int main(){
    player shelu;
  
   
    shelu.show();  // this is how we call member function of a class...
   



}

 