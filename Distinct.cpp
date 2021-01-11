#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){

    vector<int> a={2,1,1,2,5,7,6,5,5,9,7,8,3,1};
    vector<int> b={};
    vector<int>::iterator p;
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
        p=find(b.begin(),b.end(),a[i]);
        if(p==b.end()){
            b.push_back(a[i]);
            cout<<"add"<<endl;
        }
    }
    cout<<endl<<"distinct numbers: ";
    for(int j=0;j<b.size();j++){
        cout<<b[j];
    }
cout<<endl<<"amount of distinct numbers: "<<b.size();
return 0;
}
