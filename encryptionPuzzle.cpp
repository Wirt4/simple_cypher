//============================================================================
// Name        : encryptionPuzzle.cpp
// Author      : Wirt Salthouse
// Version     :
// Copyright   : Copyright Wirt Salthouse
// Description : a simple encription function per a hackerrank puzzle
//============================================================================

#include <iostream>
#include<cmath>
using namespace std;
int getLowerSquare(int num){
	return int(ceil(sqrt(num)));
}
string encryption(string s) {
	int length = s.length();
	int row = getLowerSquare(length);
	char delim = ' ';
	string code_rod[row];
	//if there's a bottleneck, it's at this O(n) operation here
	for (int i = 0; i< length; i++){
		code_rod[i%row].push_back(s[i]);
	}
	string nu_string;
	for (int j=0; j<row; j++){
		nu_string.append(code_rod[j]);
		if(j!= row-1)
			nu_string.push_back(delim);
	}
	return nu_string;
}

int main() {
	string msg ="haveaniceday";
	cout << encryption(msg) << endl; // prints the output from the test "msg"
}
