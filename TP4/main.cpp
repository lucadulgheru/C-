#include <iostream>
using namespace std;
#define NMAX 10 // pre-processing directive
#include "mystack.h"



int main()
{
	Stack<int> myStack;
	myStack.peek();
	myStack.push(5);
	myStack.push(2);
	myStack.push(3);
	myStack.push(4);
	cout<<myStack.peek()<<"\n";
	cout<<myStack.pop()<<"\n";
	myStack.affichage();

	return 0;
}
