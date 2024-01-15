#include <iostream>
using namespace std;
int main(){
	int length;
	int mylist[length];
	int values;
	int item;
	int loc;
	int n;
	
	// MAYAxHAMZAMALIK
	cout<<"Enter length of Your List : ";
	cin>>length;
	cout<<"Enter no. of values you want to Enter in List : ";
	cin>>values;
	
	// input from user in list
	for(int i=0;i<values;i++){
		cout<<"Enter value no. "<<i+1<<" : ";
		cin>>mylist[i];
	}
	// Displaying original list
	cout<<"Original List: ";
	for(int i=0;i<values;i++){
		cout<<mylist[i]<<" ";
	}
	cout<<endl;
	
	cout<<"Enter the location to delete value : ";
	cin>>loc;
	
	n = loc;
	item = mylist[loc];
	while(n < values - 1 ){
		mylist[n] = mylist[n+1];
		n++;
	}
	
	values--;
	
	// Modified list
	cout<<"Modified List: ";
	for(int i=0;i<values;i++){
		cout<<mylist[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"Index of removed element : "<<loc;
	
	
	
	
	
	
	
	
	
	
}
