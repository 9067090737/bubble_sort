#include <iostream>
using namespace std;
int array[100];

void bubble_sort(int size){ ///@function bubble_sort to sort array by "bubble" method
int temp=0;
int i,j;
for (i=0; i<size-1; i++){
		for (j=i+1; j<size; j++){ ///@brief external and internal cycles have different parameters
			if (array[i]>array[j]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
        }
}

};
void input(int size){ ///@function input to enter elements of the array 
int i;
	cout<<"Input array:"<<'\n';
	for (i=0; i<size; i++)
		cin>>array[i];
};
void output(int size){ ///@function output to show elements of the array on the screen 
	int i;
	for (i=0; i<size; i++)
		cout<<array[i]<<'\t';
		cout<<endl;
};
int main(){
	int size; ///@param size to indicate size of the array
	cout<<"Input size of array n=";
	cin>>size;
	cout<<'\n';
	input(size);
	output(size);
	bubble_sort(size);
	cout<<"Sorted array:"<<'\n';
	output(size);
	return 0;
}
