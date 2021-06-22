#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,element,head,bound,term;
	cout<<"Enter the no.of elements : ";
	cin>>n;
	vector<int>v;
	cout<<"Enter the elements \n";
	for(int i=0;i<n;i++)
	{
		cin>>element;
		v.push_back(element);
	}
	cout<<"Enter the head point : ";
	cin>>head;
	cout<<"Enter maximum no.of cylinders (199) : ";
	cin>>bound;
	int res=abs(head-v[0]);
	for(int i=n-1;i>0;i--)res+=abs(v[i]-v[i-1]);
	cout<<"FCFS   : "<<res<<"\n";
	sort(v.begin(),v.end());
	cout<<"SSTF   : "<<abs(head-v[0])+abs(v[n-1]-v[0])<<"\n";
	cout<<"SCAN   : "<<(bound-head)+(bound-v[0])<<"\n";
	for(int i=n-1;i>=0;i--)
		if(head>v[i])
		{
			term=i;
			break;
		}
	cout<<"CSCAN  : "<<(bound-head)+bound+v[term]<<"\n";
	cout<<"LOOK   : "<<(v[n-1]-head)+(v[n-1]-v[0])<<"\n";
	cout<<"CLOOK  : "<<(v[n-1]-head)+(v[n-1]-v[0])+(v[term]-v[0]);
}
