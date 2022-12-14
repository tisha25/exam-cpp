#include<iostream>
using namespace std;
class RBI{
int getRateOfInterest(){return 0;}
 };

class SBI extendsBank{
int getRateOfInterest(){return 9;}
}

class BOB extends Bank{
int getRateOfInterest(){return 10;}
}
class ICICI extends Bank{
int getRateOfInterest(){return 11;}
}

class MethodOverriding{
public static void main(String args[]){
SBI s=new SBI();
ICICI i=new ICICI();
BOB a=new BOB();
System.out.println("SBI Rate of Interest: "+s.getRateOfInterest());
System.out.println("ICICI Rate of Interest: "+i.getRateOfInterest());
System.out.println("BOB Rate of Interest: "+a.getRateOfInterest());
}
}
