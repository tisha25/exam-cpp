#include<iostream>

using namespace std ;

class mother{
    public:
        void display(){
            cout<<"Mother Class "<<endl;
        }

};

class daughter : public mother {
        
		public:
        void display(){
            cout<<"Daughter Class "<<endl;
        }
};
int main(){
    mother obj1;
    daughter obj2;

    obj1.display();
    obj2.display();



}

