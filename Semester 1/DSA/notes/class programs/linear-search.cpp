#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[5]={75,67,85,12,24};
	int num;
	int found=0;
	int position=-1;
	for(int i=0; i<5; i++){
	    cout<<" "<<a[i];
	}
	cout<<endl;
	cin>>num;
	for(int i=0; i<5; i++){
	    if(a[i]==num){
	        found=1;
	        position=i;
	        break;
	    }
	}
	cout<<endl;
	if(found==1){
	    cout<<" "<<"number= "<<num<<" position= "<<position<<endl;
	}
	else{
	    cout<<num<<" not in array";
	}
	return 0;
}
