#include <iostream>
using namespace std ;

class student {

    public:
    string name ;
    int age;
    int grade;
     
    void study(){
        cout <<name<<"正在学习..."<<endl;
        grade += 1.0;
    }
    void showInfo(){
        cout <<",姓名"<<name<<",年龄"<<age<<",成绩"<<grade<<endl;
    }
};


int main() {
    student alice;
    alice.name="Alice";
    alice.age = 18;
    alice.grade = 85.0;

    student Junie;
    Junie.name = "Junie";
    Junie.age  = 18;
    Junie.grade= 100;
    
    alice.study();
    Junie.study();
    
    alice.showInfo();
    Junie.showInfo();

}
