#include <iostream>
using namespace std;
int main(){
	int mylist[10];
	int item;
	int loc;
	
	int elements;
	
	// [2,3,4,5,6,7,8]
//	cout<<"Enter length of Your List : ";
//	cin>>n;
//	cout<<"Enter no. of elements want to insert in array : ";
	//cin>>m;
	
	for(int i=0;i<6;i++){
		cout<<"Enter value no. "<<i<<" : ";
		cin>>mylist[i];
	}
	for(int i=0;i<6;i++){
		cout<<mylist[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the location : ";
	cin>>loc;
	
	cout<<"Enter the value to insert : ";
	cin>>item;
	
	elements = 6;
	
	while(elements>=loc){
		mylist[elements+1] = mylist[elements];
		elements--;
	}
	mylist[loc] = item;
	
	for(int i=0;i<7;i++){
		cout<<mylist[i]<<" ";
	}
	
	
	
	
	
	
	
	
	
	
	
	
	
}
