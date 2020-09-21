#include<iostream>
using namespace std;


int main(){
	int a = 10;
	int* address = &a;
	int pointer = *address;
	cout << "a: " << a << ", address: " << address << ", pointer: " << pointer <<"\n";
}
