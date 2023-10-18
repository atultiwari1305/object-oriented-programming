#include<iostream> 
using namespace std; 
    
class A 
{ 
    public: 
        void show()
        {
            cout<<"In A \n";
        }
}; 
    
class B: public A 
{ 
    public: 
        void show()
        {
            cout<<"In B \n";
        } 
}; 
    
int main() 
{ 
    A *bp = new B; 
    bp->show();   
    return 0; 
} 