#include<iostream>
#include<vector>
#include<string>
using namespace std;

template<typename Type1>
typename Type1::value_type sum(Type1 &ctr)
{
    typename Type1::value_type values ={};
    for(typename Type1::value_type &str:ctr)
       values+=str;
    return values;
}
// (typename Type1:: value_type ) is to find the datatype of the values that are inside the Container
int main()
{
   vector<int> num = {2,3,4,5};
   vector<string> str = {"Anu","bhav","Tya","gi"};
   cout<<sum(num)<<endl;
   cout<<sum(str);
}