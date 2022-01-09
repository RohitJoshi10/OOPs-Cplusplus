#include<iostream>
using namespace std;

class Mammals
{
    public:
    void DisplayMammals()
    {
        cout<<"I am Mammals."<<endl;
    }
};

class MarineAnimals
{
    public:
     void DisplayMarineAnimals()
    {
        cout<<"I am MarineAnimals."<<endl;
    }
    
};

class BlueWhale:public Mammals,public MarineAnimals
{
    public:
     void DisplayBlueWhale()
    {
        cout<<"I belong to both Marine and Mammlas."<<endl;
    }
};

int main()
{
   BlueWhale obj;
   obj.DisplayMammals();
   obj.DisplayMarineAnimals();
   obj.DisplayBlueWhale();
   return 0;
}
