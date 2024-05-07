#include<iostream>
#include<string>
using namespace std; 
class student{
    int r_no;
    int marks;
    string name;   // constructor is a special member function that is called when an object is created. It is used to initialize the object of the class. It is named as the same name as the class name. It does not have any return type. It is called automatically when the object is created
    
    public:
      student (){
        cout<<"enter the roll number of student ";
        cin>>r_no;
        cout<<"enter the marks";
        cin>>marks;
        
        }
        void display(){
            cout<<r_no<<" "<< marks<<endl;
    }
    
};
int main (){
    student s;
    s.display();
    return 0;
}

