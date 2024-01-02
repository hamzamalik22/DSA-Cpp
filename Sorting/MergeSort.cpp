#include <iostream>
using namespace std;

void merge(int arr[],int left,int mid,int right){
	int sub1 = mid - left + 1; // size of sub array 1
	int sub2 = right - mid ; // size of sub array 2
	
	int left_arr[sub1];
	int right_arr[sub2];
	
	for(int i = 0;i < sub1;i++){
		left_arr[i] = arr[left + i];
	}
	
	for(int i = 0;i < sub2;i++){
		right_arr[i] = arr[mid + 1 + i]; 
	}
	
	int i = 0;
	int j = 0;
	int k = left;
	
	while(i<sub1 && j<sub2){
		if(left_arr[i] <= right_arr[j]){
            arr[k] = left_arr[i];
            i++;
        }
        else{
            arr[k] = right_arr[j];
            j++;
        }
        k++;
    }
    
    while(i < sub1){
        arr[k] = left_arr[i];
        i++;
        k++;
    }

    while (j < sub2){
        arr[k] = right_arr[j];
        j++;
        k++;
    }
    
	}



void mergesort(int arr[],int left,int right){
	if(left<right){
		int mid = (left + right)/2;
		
		mergesort(arr,left,mid);
		mergesort(arr,mid+1,right);
		
		merge(arr,left,mid,right);
	}
}

int main(){
    int arr[] = {12, 11, 13, 5, 6, 7};
    int size = sizeof(arr) / sizeof(arr[0]);
    mergesort(arr,0,size-1);

    for (int i = 0; i < size; i++){

        cout<<arr[i]<< " ";
    }
    
}