//WAP to print series 50-1
#include <bits/stdc++.h>
using namespace std;

int main() {
	int x=50;
	do {
	    cout<<" "<<x;
	    x--;
	}
	while(x>=1);
}

//WAP to print sum of positive integers using do while loop
#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,sum=0;
	do {
	    cin>>num;
	    if (num>0) {
	        sum+=num;
	    }
	}
	while (num!=0); //adding 0 at last is compulsory to terminate 
	cout<<"sum of positive integers: "<<sum;
	return 0;
}

//print table of number entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, i = 1;
    cin >> n; // Input number

    do {
        cout << n << " x " << i << " = " << n * i << endl;
        i++;
    } while (i <= 10); // Prints table up to 10

    return 0;
}

//find factorial of any no. entered by user
#include <bits/stdc++.h>
using namespace std;

int main() {
    int i; long long fact=1;
    cin>>i;
    do{
        fact*=i;
        i--;
    } while(i>=1);
    cout<<fact;
    return 0;
}
//print fibonacci 1 1 2 5 8 13 21
#include <bits/stdc++.h>
using namespace std;

int main() {
    int a = 1, b = 1, c;
    cout << a << " " << b << " "; // print first two terms

    do {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    } while (c < 21); // stop when the last term reaches 21

    return 0;
}