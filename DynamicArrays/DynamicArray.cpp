#include<iostream>
using namespace std;

int main(){
   
    int insert=12;
    int insertIdx=4;
    int deleteIdx=2;
    int sizE=5;
    int* a = new int[sizE];
    cout<<"Input Array: ";
    for(int i=0;i<sizE;i++){
        cin>>a[i];
    }
    cout<<"Origional Array : ";
    for(int i=0;i<sizE;i++){
       cout<<a[i]<<" ";
    }
    // add elem
    a[insertIdx]=12;

    for(int i=0;i<sizE;i++){
        if(i>=deleteIdx){
            a[i]=a[i+1];
        }
    }
    a[sizE-1];

    cout<<"Changed Array : ";
    for(int i=0;i<sizE;i++){
       cout<<a[i]<<" ";
    }


    cout<<endl;
    delete[] a;

}
