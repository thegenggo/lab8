#include<iostream>
using namespace std;

//Write the function printO() here
void printO(int N,int M)
{
	if(N <= 0 || M <= 0) cout << "Invalid input";
	else for(int i = 0;i < N;i++)
	{
		for (int k = 0; k < M; k++)
		{
			cout << "O";
		}
		cout << endl;
	}
}

int main(){
	
	printO(2,2);
	cout << "\n";
	
	printO(3,5);
	cout << "\n";	
	
	printO(5,3);
	cout << "\n";	
	
	printO(0,3);
	cout << "\n";	
	
	printO(7,-1);
	cout << "\n";	
	
	return 0;
}
