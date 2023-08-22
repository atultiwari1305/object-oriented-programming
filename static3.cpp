//static data member in class

#include<iostream>
using namespace std;
class student
{
    private:
        static int count;
    public:
        void get()
        {
            ++count;
        }
        void show()
        {
            cout<<"\nCounting is: "<<count;
        }
};

//if there is static data member it is mandatory to declare it outside the class

int student::count;                 //Mandatory declaration
int main()
{
    student stud1,stud2;
    stud1.show();
    stud2.show();
    stud1.get();
    stud2.get();
    stud1.show();
    stud2.show();
    return 0;
}