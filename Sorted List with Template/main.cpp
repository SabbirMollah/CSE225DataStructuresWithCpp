#include <iostream>
#include "SortedList.cpp"
#include<string>

using namespace std;

int main()
{
	SortedList<string> s(3);
	s.InsertItem("Hello");
	s.InsertItem("Nope");

	string a;
	s.GetNextItem(a);
	cout<<a;
	s.GetNextItem(a);
	cout<<a;
}


// #include<iostream>
// #include<string>

// using namespace std;

// int main(){
// 	string a = "H";
// 	string b = "Hallo";
// 	if(a>b){
// 		cout<<"1";
// 	}
// 	else if(a<b){
// 		cout<<"-1";
// 	}
// 	else cout<<"0";
// }