//Sort a stack using recursion
#include<bits/stdc++.h>
using namespace std;

void print(stack<int> s){
	while(!s.empty()){
		cout<<s.top()<<" ";
		s.pop();
	}
}

void insert(stack<int> &mystack,int topEle){
	if(mystack.empty() || mystack.top()<=topEle){
		mystack.push(topEle);
		return;
	}
	int topNew=mystack.top();
	mystack.pop();
	insert(mystack,topEle);
	mystack.push(topNew);
}

void sort(stack<int> &mystack){
	if(mystack.size()<=1){
		return;
	}
	
	int topEle=mystack.top();
	mystack.pop();
	sort(mystack);
	insert(mystack,topEle);
}

int main(){
	stack<int> mystack;
	mystack.push(4);
	mystack.push(2);
	mystack.push(1);
	mystack.push(0);
	mystack.push(5);
	mystack.push(-2);
	print(mystack);
	sort(mystack);
	cout<<endl;
	print(mystack);
}

