#include<iostream>
#include<map>

using namespace std;

void Change_capital(map<string, string>& a, string tmp){
	string country, new_capital;
	cin >> country >> new_capital;
	map<string, string> :: iterator i;
	for (i = a.begin(); i != a.end(); i++){
		if ((*i).first == country && new_capital == (*i).second){
			cout << "Country" << country << "hasn't changed its capital" << endl;
			break;
		}
		if( (*i).first == country && new_capital != (*i).second){
			string old_capital = (*i).second;
			(*i).second = new_capital;
			cout << "Country" << country << "has changed its capital from" << old_capital << "to" << new_capital << endl;
			break;
		}
	}
	cout << "Introduce new country" << country << "with capital" << new_capital << endl; 
	a.insert(country, new_capital);
}
void Rename (map<string, string>& a){
	string old_country, new_country;
	cin >> old_country >> new_country;
	map<string, string> :: iterator i;
	for (i = a.begin(); i != a.end(); i++){
		if ((*i).first == new_country){
			if (old_country == new_country){
				cout << "Incorrect rename, skip" << endl;
			}
			else{
				(*i).first = new_country;
				cout << "Country" << old_country << "with capital" << (*i).second << "has been renamed to" << new_country << endl;
			}
		}
	}
}
void About (map<string, string>& a){
	string country;
	cin >> country;
	map<string, string> :: iterator i;
	for (i = a.begin(); i != a.end(); i++){
		if ((*i).first == country){
			cout << "Country" << country << "has capital" << (*i).second << endl;
		}
	}
}

void Dump (map<string, string>& a){
	map<string, string> :: iterator i;
	if (a.size() == 0){
		cout << "There are no countries in the world" << endl;
	}
	else{
		for (i = a.begin(); i != a.end(); i++){
			cout << (*i).first <<  "/" << (*i).second << endl;
		}
	}
}

int main(){
	map<string, string> a;
	string tmp;
	cin >> tmp;
	if ( tmp == "CHANGE_CAPITAL"){
		Change_capital (a, tmp);
	}
	if ( tmp == "RENAME"){
		Rename (a);
	}
	if ( tmp == "ABOUT"){
		About (a);
	}
	if ( tmp == "DUMP"){
		Dump (a);
	}
}
