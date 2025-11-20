// Q1. WAP to use switch case statement for finding the counting number of weeks

#include <bits/stdc++.h>
using namespace std;

int main() {
	int ch;
	cin>>ch;
	switch(ch){
	    case 1: cout<<"today is monday";
	    break;
	    case 2: cout<<"tody is tuesday";
	    break;
	    case 3: cout<<"today is wednesday";
	    break;
	    case 4: cout<<"today is thursday";
	    break;
	    case 5: cout<<"today is friday";
	    break;
	    case 6: cout<<"today is saturday";
	    break;
	    case 7: cout<<"today is sunday";
	    break;
	    default: cout<<"wrong choice entered";
	    break;
	}
	return 0;
}

// Q2. WAP to design a calculator using switch case only for arithematic operations

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	char z;
    float x,y;
    cin>>x>>z>>y;
    cout<<"first number is: "<<x;
    cout<<endl<<"second number is: "<<y;
    switch(z){
        case '+' :cout<<endl<<"sum of entered numbers: "<<x+y;
        break;
        case '-' :cout<<endl<<"difference of entered numbers: "<<x-y;
        break;
        case '*' :cout<<endl<<"product of entered numbers: "<<x*y;
        break;
        case '/' :cout<<endl<<"quotient of entered numbers: "<<x/y;
        break;
    }
    return 0;
}


// Q3. WAP to find out the entered character is vowel or not

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
	cin>>ch;
	switch(ch){
	    case 'a': cout<<"vowel";
	    break;
	    case 'e': cout<<"vowel";
	    break;
	    case 'i': cout<<"vowel";
	    break;
	    case 'o': cout<<"vowel";
	    break;
	    case 'u': cout<<"vowel";
	    break;
	    case 'A': cout<<"vowel";
	    break;
	    case 'E': cout<<"vowel";
	    break;
	    case 'I': cout<<"vowel";
	    break;
	    case 'O': cout<<"vowel";
	    break;
	    case 'U': cout<<"vowel";
	    break;
	    default: cout<<"consonant";
	    break;zz
	}
	return 0;
}

//OR

#include <bits/stdc++.h>
using namespace std;

int main() {
    char ch;
	cin>>ch;
	ch=tolower(ch);
	switch(ch){
	    case 'a':
	    case 'e':
	    case 'i':
	    case 'o':
	    case 'u':
	        cout<<"vowel";
	    break;
	    default: cout<<"consonant";
	    break;
	}
	return 0;
}
