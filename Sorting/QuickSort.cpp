#include <iostream>
using namespace std;

void swap(int mylist[],int i,int j){
	int temp = mylist[i];
	mylist[i] = mylist[j];
	mylist[j] = temp;
}

int part(int mylist[],int l,int r){
	int pivot = mylist[r];
	int i = l-1;
	
	for(int j=l;j<r;j++){
		if(mylist[j] < pivot){
			i++;
			swap(mylist,i,j);
		}
	}
	swap(mylist,i+1,r);
	return i+1;
}

void quicksort(int mylist[],int l,int r){
	if(l<r){
		int p = part(mylist,l,r);
		quicksort(mylist,l,p-1);
		
		quicksort(mylist,p+1,r);
		
	}
}



int main(){
	int mylist[] = {6,3,9,5,2,8,7};
	int size = sizeof(mylist) / sizeof(mylist[0]);
	    cout<<"original : ";
    for (int i = 0; i < size; i++){

        cout<<mylist[i]<<" ";
    }
    
	quicksort(mylist,0,size-1);
	cout<<endl;
	cout<<"Sorted : ";
    for (int i = 0; i < size; i++){

        cout<<mylist[i]<<" ";
    }
	
	
	return 0;
}
