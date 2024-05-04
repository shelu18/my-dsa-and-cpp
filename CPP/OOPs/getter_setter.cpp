#include<iostream>
#include<string>
using namespace std;
 class player {
    public:      // according to the standards it is preferable to keep the data members private and member function public and accesing data member like shelu.health=100 is not a good practice so we use setter function for setting the valuse and getter function for getting the value of the private member of the class...
    int age;
    int health;
    void setter(int a,int h){      //setter is used to set the value of the private member of the class
        age = a;
        health = h;
    }
    void getter(){
        cout<<"Age is "<<age<<endl;       //getter is used to get the value of the private member of the class
        cout<<"Health is "<<health<<endl;
    }
};

int main() {
    player shelu;
    shelu.setter(20,100);
    shelu.getter();
    return 0;
}