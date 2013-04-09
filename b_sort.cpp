#include <iostream>
using namespace std;
int array[100];

void bubble_sort(int size){ ///@function bubble_sort ������� ��� ���������� ������� ���������
int temp=0;
int i,j;
for (i=0; i<size-1; i++){
		for (j=i+1; j<size; j++){ ///@brief ������� � ���������� ����� ����� ������ ���������!!!
			if (array[i]>array[j]){
				temp=array[j];
				array[j]=array[i];
				array[i]=temp;
			}
        }
}

};
void input(int size){ ///@function input ������� ��� ����� �������
	int i;
	cout<<"Input array:"<<'\n';
	for (i=0; i<size; i++)
		cin>>array[i];
};
void output(int size){ ///@function output ������� ��� ������ �������
	int i;
	for (i=0; i<size; i++)
		cout<<array[i]<<'\t';
		cout<<endl;
};
int main(){
	int size; ///@param size ������ �������
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
