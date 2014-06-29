#include<iostream>
#include<vector>

using namespace std;

int main(){
    
    vector<int> intList;
    
    intList.push_back(1);
    intList.push_back(2);
    intList.push_back(3);
    intList.push_back(4);
    
    cout<<"List Elements: ";
    for(int i = 0; i<4; i++)
        cout<<intList[i]<<" ";
    cout<<endl;
    
    vector<int>::iterator listIt;
    
    cout<<"List Elements: ";
    for(listIt = intList.begin();listIt != intList.end(); ++listIt)
        cout<< *listIt <<" ";
    cout<<endl;
    
    listIt = intList.begin();
    ++listIt;
    ++listIt;
    intList.insert(listIt, 10);
    
    cout<<"List Elements: ";
    for(listIt = intList.begin();listIt != intList.end(); ++listIt)
    cout<< *listIt <<" ";
    cout<<endl;
    
    return 0;
    
}