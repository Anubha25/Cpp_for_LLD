#include<iostream>
#include<vector>
#include<string>
using namespace std;


template<typename Container>
typename Container::value_type Largest(Container Ctr)
{
    typename Container::value_type Large={};
    for(typename Container::value_type &val : Ctr)
        if(val>Large)
            Large=val;
    return Large;
}



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
   //to find sum :
   vector<int> num = {2,3,4,5};
   vector<string> str = {"Anu","bhav","Tya","gi"};
   cout<<sum(num)<<endl;
   cout<<sum(str)<<endl;


   //to find the Largest of Value from Any Container
    vector<int> vec={1,2,3,4,5,6};
    vector<string>vec1={"Anu","Bhav","Tyagi"};
    cout<<Largest(vec1)<<endl;
    cout<<Largest(vec);

}