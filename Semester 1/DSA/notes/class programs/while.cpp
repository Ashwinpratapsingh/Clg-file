//print series 1 to 10
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=1;
	while (a<=10) {
	    cout<<" "<<a;
	    a++;
	}
	return 0;
}

//print series 32 30 28 26 ... 18
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=30;
	while (a>=18) {
	    cout<<" "<<a;
	    a-=2;
	}
	return 0;
}

//print series 1.5 3 4.5 ... 10.5
#include <bits/stdc++.h>
using namespace std;

int main() {
	float a=1.5;
	while (a<=10.5) {
	    cout<<" "<<a;
	    a+=1.5;
	}
	return 0;
}

//print series 5 10 15 ... 35
#include <bits/stdc++.h>
using namespace std;

int main() {
	float a=5;
	while (a<=35) {
	    cout<<" "<<a;
	    a+=5;
	}
	return 0;
}

//print table of no. entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a=1,x;
	cin>>x;
	cout<<"your number: "<<x;
	cout<<endl<<"table of "<<x<<" is:";
	while (a<=10) {
	cout<<" "<<a*x;
	a++; }
	return 0;
}

//find factorial of any no. entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,x=1;
	cin>>a;
	while(a>=1){
	    x=x*a;
	    a--;
	}
	cout<<x;
}

//WAP to print fibonacci series 1 1 2 3 5 8 13 21
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a=1,b=1,c;
    cout<<a<<" "<<b;
    while (c<21){
        c=a+b;
        a=b;
        b=c;
        cout<<" "<<c;
    }
	return 0;
}
//WAP to print A to Z and a to z, and reverse
#include <bits/stdc++.h>
using namespace std;

int main() {
	char x=65,t=97;
	cout<<"alphabets:";
	while(x<=90){
	    cout<<" "<<x;
	    x++;
	}
	while(t<=122){
	    cout<<" "<<t;
	    t++;
	}
	cout<<endl<<"reverse:";
	x=90;
	t=122;
	while(x>=65){
	    cout<<" "<<x;
	    x--;
	}
	while(t>=97){
	    cout<<" "<<t;
	    t--;
	}
	return 0;
}

//to print * series in triangle
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=1;
    while(i<=5){
        int j=1;
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}

//to print * series in middle
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=1;
    while(i<=5){
        int j=4;
        while(j>=i){
            cout<<" ";
            j--;
        }
        int k=1;
        while(k<=i){
            cout<<"*";
            k++;
        }
        int l=1;
        while(l<i){
            cout<<"*";
            l++;
        }
        cout<<endl;
        i++;
    }
	return 0;
}

//print pattern
'''
    * 
   * * 
  * * * 
 * * * * 
* * * * * 
'''
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i=1;
    while(i<=5){
        int j=4;
        while(j>=i){
            cout<<" ";
            j--;
        }
        int k=1;
        while(k<=i){
            cout<<"* ";
            k++;
        }
        cout<<endl;
        i++;
    }
}

//palindrome or not
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, original, reversed = 0, digit;
    
    cin >> n;

    original = n;

    while(n > 0) {
        digit = n % 10;
        reversed = reversed * 10 + digit;
        n = n / 10;
    }

    if(original == reversed)
        cout << "Palindrome";
    else
        cout << "Not Palindrome";

    return 0;
}
