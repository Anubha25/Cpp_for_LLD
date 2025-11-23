// Online C++ compiler to run C++ program online
#include <iostream>
#include<string>
#include<vector>
using namespace std;

template<class Type1,class Type2>
class Tanker
{
    public:
    Type1 Cost;
    Type2 Power;
    Tanker(Type1 Cost,Type2 Power)
    {
        this->Cost=Cost;
        this->Power=Power;
    }
    Type1 getCost()
    {
        return this->Cost;
    }
    Type2 getPower()
    {
        return this->Power;
    }
    ~Tanker()
    {
        std::cout<<" \n DELETEING TANKER INSTANCE \n";
    }
};
int main() {
 Tanker<string,long> T1("Five Crore rupees",15000);
 Tanker<long,string> T2(50000000,"Fifteen Thousand CC");
 cout<<T1.getCost()<<endl;
 cout<<T1.getPower()<<endl;
 cout<<T2.getCost()<<endl;
 cout<<T2.getPower();
 
}