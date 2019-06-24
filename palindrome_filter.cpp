#include<iostream>
#include<vector>
#include<string>
using namespace std;

vector<string> Palindrom_Filter(const vector<string> a, int minLength)
{
	vector<string> b;
	for (int i = 0; i < a.size(); i++)
	{
		if (IsPalindrom(a[i]) == true && a[i].size() > minLength)
		{
			b.push_back(a[i]);
		}
	}
	return b;
}

bool IsPalindrom(const string a)
{
	auto b = a.size();
	cout << b << endl;
	for (auto i = 0; i != a.size(); ++i )
	{
		if (a[i] != a[b - 1 - i])
		{
			cout << i << endl;
			return false;
		}
	}
	return true;
}

int main(){
	vector<string> words = {"abcddcba", "aret", "qwertyytrewq", "asdfghjklkjhgfdsa"};
	int minLength;
	cin >> minLength;
	for (auto s: Palindrom_Filter(words, minLength))
	{
		cout << s << endl;
	}
}