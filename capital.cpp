#include<iostream>
#include<map>

using namespace std;

void Change_capital(map<string, string>& a, string tmp){
	string country, new_capital;
	cin >> country >> new_capital;
	for (auto i : a){
		if (*i.first == country && new_capital == *i.second){
			cout << "Country" << country << "hasn't changed its capital" << endl;
			break;
		}
		if( *i.first == country && new_capital != *i.second){
			string old_capital = i.second;
			*i.second = new_capital;
			cout << "Country" << country << "has changed its capital from" << old_capital << "to" << new_capital << endl;
			break;
		}
	}
	cout << "Introduce new country" << country << "with capital" << new_capital << endl; 
	a.insert(country, new_capital;)
}
void Rename (map<string, string>& a){
	string old_country, new_country;
	cin >> old_country >> new_country;
	for (auto i : a){
		if (*i.first == new_country){
			if (old_country == new_coutry){
				cout << Incorrect rename, skip << endl;
			}
			else{
				*i.first = new_country;
				cout << "Country" << old_country << "with capital" << capital << "has been renamed to" << new_country << endl;
			}
		}
	}
}
void About (map<string, string>& a){
	cin >> country;
	for (auto i : a){
		if (*i.first == country){
			cout << "Country" << country << "has capital" << map[i].second << endl;
		}
	}
}

void Dump (map<string, string>& a){
	if (a.size() == 0){
		cout << "There are no countries in the world" << endl;
	}
	else{
		for (auto i : m){
			cout << *i.first <<  "/" << *i.second << endl;
		}
	}
}

int main(){
	map<string, string> a;
	string tmp;
	cin >> tmp;
	if ( tmp == CHANGE_CAPITAL){
		Change_capital (tmp);
	}
	if ( tmp == RENAME){
		Rename (tmp);
	}
	if ( tmp == ABOUT){
		About (tmp);
	}
	if ( tmp == DUMP){
		Dump (tmp);
	}
}
