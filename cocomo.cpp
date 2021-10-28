#include<bits/stdc++.h>
using namespace std;
void fun(float table[][4], int n, int size)
{
	float effort,time,staff;
	int model = 0;
	effort = table[model][0]*pow(size,table[model][1]);
	time = table[model][2]*pow(effort,table[model][3]);
	staff = effort/time;
	cout<<effort<<":"<<time<<":"<<floor(staff+0.5)<<endl;
}


int main()
{
	float table[3][4]={2.4,1.05,2.5,0.38,3.0,1.12,2.5,0.35,3.6,1.20,2.5,0.32};
	int size = 100;
	fun(table,3,size);
	return 0;
}
