
#include<iostream>
using namespace std;
int main(){

	char ch;
	cout<<"Enter a character: ";
	cin>>ch;
	
	if(isalpha(ch)){cout<<"You entered alphabet :";
	}
  
  else if(isdigit(ch)){cout<<"You entered a digit :";
  }
  else{cout<<"You entered special character :";
  }
}
