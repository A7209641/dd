#include<iostream>
using namespace std;

int LinearSearch(int array[],int size,int number){
	
	for(int i=0;i<=size;i++){
		if(array[i]==number)
		return i;
		
	}
	
	return -1;
}




int main(){

	int array[7]={3,5,7,2,4,8,6};
	int size=7;
	int i;
	
	cin>>i;

	
	cout<< LinearSearch( array, size, i);

	system("pasue");
	return 0;

	
}
