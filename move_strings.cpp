#include<iostream>
#include<vector>
#include<string>
using namespace std;
void Movestrings(string& a, string& b);
void Movestrings(vector<string>& a, vector<string>& b)
{
	for (int i = 0; i != a.size(); i++)
	{
		cout<< "here" << endl;
		b.push_back(a.front());
		a.erase(a.begin());
	}
	cout<< "end of function" << endl;
}

int main(){
	vector<string> source = {"llo", " ", "world"};
	vector<string> destination = {"wor", "ld"};
	Movestrings(source, destination);
}