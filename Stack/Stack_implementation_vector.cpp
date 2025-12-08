#include <bits/stdc++.h>
using namespace std;
#include<vector>

class Stack
{
    vector<int> vec;
   public: 
    void push(int val)
    {
        vec.push_back(val);
    }
    
    void pop()
    {
        vec.pop_back();
    }
    
    int top()
    {
        int lastIdx = vec.size()-1;
        return vec[lastIdx];
    }
    
    bool isEmpty()
    {
        return vec.size() ==0;
    }
};


int main() {
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);
	
	while(!s.isEmpty())
	{
	    cout<<s.top()<<" ";
	    s.pop();
	}
    return 0;
}
