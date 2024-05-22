#include <iostream>
using namespace std;

void selectionSort(int arr[],int n){
	for(int i=0;i<n-1;i++){
		int least = arr[i];
		int loc = i;
		
		for (int j=i+1;j<n;j++){
			if(arr[j]<least){
				least = arr[j];
				loc=j;
			}
		}
		arr[loc]=arr[i];
		arr[i]=least;
	}
}

int main(){
	int num;
	cout<<"Enter the number of elements"<<endl;
	cin>>num;
	
	int *arr = new int(num);
	
	cout<<"Enter "<<num<<" elements: "<<endl;
	for (int i=0;i<num;i++){
		cin>>arr[i];
	}

	
	selectionSort(arr,num);	
	for (int i=0;i<num;i++){
		cout<<arr[i]<<" ";
	}
	return 0;
}
