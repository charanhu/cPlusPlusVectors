#include<iostream>
#include<string>
#include<map>
using namespace std;


int main(){
    map<string, int> marksMap;
    marksMap["Harry"]=98;
    marksMap["Charan"]=100;
    marksMap["Jack"]=2;
    
    marksMap.insert({{"Amma",100},{"Appaji",100},{"Aa",1}});
    map<string, int> :: iterator iter;
    for (iter=marksMap.begin(); iter!=marksMap.end(); iter++){
        cout<<(*iter).first<<" "<<(*iter).second<<endl;
    }
    cout<<"sizer "<<marksMap.size()<<endl;

    cout<<"Max size"<<marksMap.max_size()<<endl;

    cout<<"Is empty "<<marksMap.empty()<<endl;

    return 0;
}