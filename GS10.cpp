#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int, vector<int>, greater<int>> pq;
    int n;
    cin >> n; 
    int a;
    for(int i = 0; i < n; i++)
    {
        cin >> a;  
        pq.push(a);
        if(pq.size() > 10)
            pq.pop();
    }
    while(pq.size())
    {
        cout << pq.top() << " ";
        pq.pop();
    }
} 
