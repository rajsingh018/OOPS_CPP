/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

class MyClass{
    public:
        string brand;
        string model;
        int year;
        void fun(){
            cout<<"This is my car"<<endl;
        }
};

class Car: public MyClass{
    public:
        string no = "1234";
};

int main()
{
    // MyClass MyObj1;
    // MyObj1.brand="Honda";
    // MyObj1.model= "City";
    // MyObj1.year=2019;
    
    // MyClass MyObj2;
    // MyObj2.brand="Suzuki";
    // MyObj2.model= "Dzire";
    // MyObj2.year=2020;
    
    // cout<<MyObj1.brand<<" "<<MyObj1.model<<" "<<MyObj1.year<<endl;
    // cout<<MyObj2.brand<<" "<<MyObj2.model<<" "<<MyObj2.year<<endl;
    
    Car myCar;
    myCar.brand = "Honda";
    myCar.model = "City";
    myCar.fun();
    cout<<myCar.brand<<" "<<myCar.model<<" "<<myCar.no<<endl;

    return 0;
}
