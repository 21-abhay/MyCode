#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"Enter the size of the array :  ";
	cin>>n;
	int s[n];
	cout<<"Enter elements for the array : ";
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	
	cout<<"\n\nThe given set is :   ";
	for(int i=0;i<n;i++){
		cout<<" "<<s[i];
	}
	cout<<"\nInsertion sorting : \n\n";
	int count=0;
	int a=n-1;
	for(int i=1;i<n;i++){
		cout<<"\nSTEP - "<<i<<"\n";
		for(int j=0;j<a;j++){
			int x=s[j];
			int y=s[j+1];
			if(x>y){
				s[j+1]=x;
				s[j]=y;
			}
			count++;
			for(int l=0;l<n;l++){
				cout<<s[l]<<" ";
			}
			cout<<"\n";
		}
		cout<<"\n";
		a--;
	}

	
	cout<<"\n\n\n\nNew Sorted Array :  ";
	for(int i=0;i<n;i++){
		cout<<s[i]<<" ";
	}
	cout<<"\nNumber of comparision : "<<count;
	return 0;
}
