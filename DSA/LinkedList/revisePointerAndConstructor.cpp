#include<iostream>
#include<string>
using namespace std;
class student {
    public:
    int roll;
    int marks;
    string name;
    student(int roll, int marks, string name) {
        this->roll = roll;
        this->marks = marks;
        this->name = name;
    }
};
int main (){
    // use of pointers fpor run time initialization of object
    student *s = new student(1, 100, "Rahul");
    cout << s->roll << " " << s->marks << " " << s->name << endl;  //****arrow operator is used to access the members of the object {dereferencing}****
                                                                  // i can also chage the value of objects by the concept of dereferencing 
      s->roll=2;                                       //it is similar to (*s).roll=2;   
      s->marks=99;
      s->name="Rahul";

}