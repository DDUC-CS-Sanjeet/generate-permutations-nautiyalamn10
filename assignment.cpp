#include<iostream>

using namespace std;

void Permute(char arr[], int start,int end){
	
	if(start==end){
		cout<<arr<<endl;
	} 
	else{
		for(int i=start;i<=end;i++){
			swap(arr[start],arr[i]);
			Permute(arr,start+1,end);
			swap(arr[start],arr[i]);
		}
	}
}
int main(){
int n;
cout<<"Enter the number of characters : - ";
cin>>n;
char arr[100];
char alpha='a';
for(int i=0;i<n;i++){
	arr[i]=alpha;
	alpha++;
}
arr[n]='\0';
Permute(arr,0,n-1);
return 0;	
}
