#include<iostream>
using namespace std;

//Write the function printO() here

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

void printO(int N, int M){
    if(N>0&&M>0){
    for(int i=0; i<N; i++){
        for(int z=0; z<M; z++){
            cout << "O";
        }
        cout << "\n";
    }
    }
    else{
    cout << "Invalid input";
    }
}