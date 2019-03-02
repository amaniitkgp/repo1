#include<bits/stdc++.h>
#include <stdio.h>

#define s(x) scanf("%lld",&x)
#define s2(x,y) s(x)+s(y)
using namespace std;
#include <string>
int newfun(int n, int m, int c){
	int sum =0;
	int wr_un = 0;
	int wr =0;
	sum+= (n/c);
	wr = sum;
	int temp;
	while(wr >= m){
		
		temp = (wr/m);
		sum += temp;
		wr = (wr%m) + temp;

	}
	return sum;

}

void maximumCupcakes(vector <string> trips){
	int len = trips.size();
	int i = 0;
	while(i<len){
		string ns,ms,cs;
		int j = 0;
		string temp="";
		while((trips[i])[j] != ' '){
			temp += (trips[i])[j];
			j++;
		}
		j++;
		ns = temp;
		temp ="";
		while((trips[i])[j] != ' '){
			temp += (trips[i])[j];
			j++;
		}
		j++;
		cs = temp;
		temp ="";
		while(j<(trips[i]).length()){
			temp += (trips[i])[j];
			j++;

		}
		ms = temp;
		 int n,c,m;
		n= stoi(ns);
		m= stoi(ms);
		c = stoi(cs);

		cout<<newfun(n,m,c)<<endl;

		i++;
	}
}

int main(){
	int n =6;
	int m=2;
	int c =2;
	vector <string> a;
	a.push_back("6 2 2");
	a.push_back("10 2 5");
	a.push_back("12 4 4");
	maximumCupcakes(a);
	cout<<"here"<<endl;
	 
}