//print series 10 to 1
#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int a=10; a>=1; a--)
	    cout<<" "<<a;
	return 0;
}

//WAP to print series 75 70 65 60 55 50
#include <bits/stdc++.h>
using namespace std;

int main() {
	for (int i=75; i>=50; i-=5)
	    cout<<" "<<i;
	return 0;
}

//print series 1.5 3 4.5 ... 10.5
#include <bits/stdc++.h>
using namespace std;

int main() {
	for(float a=1.5; a<=10.5; a+=1.5)
	    cout<<" "<<a;
	return 0;
}

//print table of no. entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x;
	cin>>x;
	cout<<"your number: "<<x;
	cout<<endl<<"table of "<<x<<" is:";
	for(int a=1; a<=10; a++)
	    cout<<" "<<a*x;
	return 0;
}

//find factorial of any no. entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; long long fac=1;
    cin>>n;
    for (n; n>=1; n--){
        fac*=n;
    }
    cout<<fac;
}

//WAP to print A to Z and a to z, and reverse 
#include <bits/stdc++.h>
using namespace std;

int main() {
	char x,t;
	cout<<"alphabets:";
	for(x=65; x<=90; x++)
	    cout<<" "<<x;
	for(t=97; t<=122; t++)
	    cout<<" "<<t;
	cout<<endl<<"reverse:";
	for(x=90; x>=65; x--)
	    cout<<" "<<x;
	for(t=122; t>=97; t--)
	    cout<<" "<<t;
	return 0;
}

//WAP to print fibonacci series 1 1 2 3 5 8 13 21
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n1=1,n2=1,next;
	cout<<n1<<" "<<n2;
	for(int noel=1; noel<=6; noel++)
	{   next=n1+n2;
	    n1=n2;
	    n2=next;
	    cout<<" "<<next;
	}
	return 0;
}

//to print * series in triangle
#include <bits/stdc++.h>
using namespace std;

int main() {
	for(int i=1; i<=5; i++) {
	    cout<<endl;
	    for(int j=1; j<=i; j++) {
	        cout<<" "<<"*";
	    }
	}
	return 0;
}

//to print * series in middle
#include <bits/stdc++.h>
using namespace std;
int main() {
    for (int i = 1; i <= 5; i++) {
        cout << endl;
        for (int j = 1; j <= (5 - i); j++) {
            cout << " ";
        }
        for (int k = 1; k <= i - 1; k++) {
            cout << "*";
        }
        for (int l = 1; l <= i; l++) {
            cout << "*";
        }
    }
    return 0;
}

//OR

#include <bits/stdc++.h>
using namespace std;
int main() {
	for(int i=1; i<=5; i++) {
	    for(int j=4; j>=i; j--) {
	        cout<<" ";
	    }
	    for(int k=1; k<=i; k++) {
	        cout<<"*";
	    }
	    for(int l=1; l<i; l++) {
	        cout<<"*";
	    }
	    cout<<endl;
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
    for(int i=1; i<=5; i++){
        for(int j=4; j>=i; j--){
            cout<<" ";
        }
        for(int k=1; k<=i; k++){
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}
    