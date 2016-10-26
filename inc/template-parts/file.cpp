#include "iostream"
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{

	int n,m,x=0;
	cout <<"Inserire un numero ----> ";
	cin >> n;
	cout << n;
	if(n%2!=0){
	  	m=(n-1)/2;
	}
	else
	{
		m=n/2;
	}
	for(int i=1;i<=m && x<2;i++){
		if(n%i==0){			
			n/=i;
			x++;
	    }
	    
	}
	if(x==1){
		cout<<"---> \212 un numero primo";
	}
	else{
		cout<<"---> non \212 un numero primo";
	}
	
	return 0;
}