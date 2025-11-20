//print the array given
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[6]={22,24,17,15,99,70};
	for (int i=0; i<6; i++)
	    cout<<" "<<a[i];
	return 0;
}

//WAP to print a[1] position element 
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[6]={22,24,17,15,99,70};
	for (int i=0; i<6;i++) {
        if (i==1)
        cout<<"a[1]:"<<a[i];
}
return 0;
}

//change a[2] positioned element to 75
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[6]={22,24,17,15,99,70};
	for (int i=0; i<6; i++) {
	    if (i==2) {
	       a[i]=75;
	    }
        cout<<" "<<a[i];
	}
	return 0;
}

//print an array by getting input from user
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[4];
	for (int i=0; i<4; i++) {
	    cin>>a[i];
        cout<<" "<<a[i];
	}
	return 0;
}

//WAP to print the given matrix using 2d array
''' 1 2 3
    4 5 6
    7 8 9'''
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	for (int i=0; i<3; i++) {
	    for (int j=0; j<3; j++) {
	        cout<<" "<<a[i][j];
	    }
        cout<<endl;
	}
	return 0;
}

//print a matrix whose elements are entered by user, using 2d array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[3][3];
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//find sum of all element of the given array
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a[5]={4,1,3,7,2};
    int sum=0;
    for (int i=0; i<5; i++){
        sum+=a[i];
    }
    cout<<sum;
}

//print a 2x4 matrix using 2d array, whose elements are entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[2][4];
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cin>>arr[i][j];
        }
    }
    for (int i=0; i<2; i++){
        for (int j=0; j<4; j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

//WAP to represent the vector array
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> v;
	for (int i=0; i<5; i++){
	    int num;
	    cin>>num;
	    v.push_back(num);
	}
	for (int i=0; i<5; i++){
	    cout<<" "<<v[i];
	}
	cout<<endl;
	return 0;
}

//WAP to erase the element from vector array and insert more elements
#include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> number;
	for (int i=0; i<5; i++){
	    int num;
	    cin>>num;
	    number.push_back(num);
	}
	number.erase(number.begin()+2);
	number.push_back(23);
	for (int num:number){
	    cout<<" "<<num;
	}
	cout<<endl;
	return 0;
}

 //revert the given vector array
#include <bits/stdc++.h>
using namespace std;

int main() {
    vector <int> v={1,2,3,4,5,6};
    sort(v.begin(),v.end(),greater<int>());
    for (int i=0; i<6; i++){
    cout<<v[i]<<" ";
    }
}

 //add numbers 67, 49, 37 to the array

 //use of pop_back
 #include <bits/stdc++.h>
using namespace std;

int main() {
	vector <int> number;
	for (int i=0; i<5; i++){
	    int num;
	    cin>>num;
	    number.push_back(num);
	}
	number.pop_back();
	number.erase(number.begin()+2);
	for (int num:number){
	    cout<<" "<<num;
	}
	cout<<endl;
	return 0;
}
