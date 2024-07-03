#include <iostream>

using namespace std;

char alphabet[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};

void rotateAlphabet(){
	int temp = alphabet[0];
	for(int i = 0; i<26; i++){
		alphabet[i] = alphabet[i+1];
	}
	alphabet[25] = temp;
}

void displayVigenereTable(){
	for (int i=0;i<26;i++){
		for(int j = 0; j<26; j++){
			cout<<alphabet[j]<<" ";
		}
		rotateAlphabet();
		cout<<endl;
	}
}

int main(){
	cout<<"Rojan Ghimire:"<<endl;
	displayVigenereTable();
}

