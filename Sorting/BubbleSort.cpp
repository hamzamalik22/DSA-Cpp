#include <iostream>
using namespace std;
int main(){
	int mylist[] = {2,3,44,545,84,68,45,32,37,567,34,2,1,123,11,34,14,23,56,56,78,90,765};
	//				{2,3,44,54,545,68,45,32}
//	char mylist[] = {'b','d','e','B','g'};
	int count = 1;
	
	int n = sizeof(mylist) / sizeof(mylist[0]);
	
	while(count<n){
		for(int i = 0;i<n-count;i++){
			if(mylist[i] > mylist[i+1]){ 
				int temp;
				temp = mylist[i];
				mylist[i] = mylist[i+1];
				mylist[i+1] = temp;
			}
			
		}
		count++;
	}
for(int i = 0;i<n;i++){
	cout<<mylist[i]<<" ";
}
		
}
