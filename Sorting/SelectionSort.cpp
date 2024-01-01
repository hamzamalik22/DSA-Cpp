#include <iostream>
using namespace std;

void swap(int mylist[],int i,int j){
	int temp = mylist[i];
	mylist[i] = mylist[j];
	mylist[j] = temp;
}


int main(){
	int mylist[] = {2,3,44,22,84,68,1,32,37,567,34,2,1,123,11,34,14,23,56,56,78,90,765};
	//				{2,3,44,54,545,68,45,32}
//	char mylist[] = {'b','d','e','B','g'};
	int count = 0;
	
	int size = sizeof(mylist) / sizeof(mylist[0]);
	
	for(int i=0;i<size-1;i++){
		for(int j = i+1;j<size;j++){
			if(mylist[j]<mylist[i]){
				swap(mylist,i,j);
			}
		}
	}
	for(int i = 0;i<size;i++){
	cout<<mylist[i]<<" ";
}
	
	
	
		
}
