#include<bits/stdc++.h>
using namespace std;
void subsequence (string input){
	int n = input.length();

	for (int i = 0; i < n; i++){
		//cout << input[i] << " ";
		for (int j = 0; j < n- i; j++){
			for (int k = 0; k <= i+j-1; k++){
				cout << input[k];
			}
			cout <<endl;
		}
	}
}
int main (){
	string input = "abc";
	subsequence(input);
}


/**
string print(string s , int i){ 
	int j = 0;
	string sub;
	
	//finding where the bit is set
	while(i>0){
		if(i & 1){
			sub.push_back(s[j]); //pushing only when bit is set 
		}
		j++; //always incrementing the index pointer
		i = i >> 1;
	}
	
	return sub;
}

vector<string> createsubsets(string& s){
	
	vector <string> res;
	for(int i = 1 ; i <= ((1 << s.size()) - 1) ; i++){
		//each time we create a subsequence for corresponding binary representation
		res.push_back(print(s,i));
	}
	return res;
}

int main(){
	string s = "abc"; 
	//vector of strings to store all sub-sequences
	vector <string> print = createsubsets(s);
	
	//print function
	for(int i = 0 ; i < print.size() ; i++){
		for (int j = 0; j < print[i].size(); j++){
			cout << print[i][j]<<" ";
		}
		cout << endl;
	}
	return 0;
}
*/
