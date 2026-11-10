#include "Cache_Database.h"

using namespace std;

static vector<string> Cache_Database_KEY;
static vector<string> Cache_Database_CONTENT;

char Cache_DataBase(string command, string key, string content) 
{
	if (command == "add") {

		if ("" == key || "" == content) {
			return 0;
		}
		else {
			Cache_Database_KEY.push_back(key);
			Cache_Database_CONTENT.push_back(content);
			return 1;
		}
		
	}
	else if (command == "delete") {

		auto F_KEY = find(Cache_Database_KEY.begin(), Cache_Database_KEY.end(), key);
		int F_KEY_i = F_KEY - Cache_Database_KEY.begin();
		int Cache_Database_KEY_Quantity = Cache_Database_KEY.size();
		int Cache_Database_CONTENT_Quantity = Cache_Database_CONTENT.size();

	//	cout << F_KEY_i << " " << Cache_Database_KEY_Quantity << " " << Cache_Database_CONTENT_Quantity << " " << endl;
		
		if (F_KEY_i >= Cache_Database_KEY_Quantity) {
			return 0;
		}	


		auto F_CONTENT = find(Cache_Database_CONTENT.begin(), Cache_Database_CONTENT.end(), Cache_Database_CONTENT[F_KEY_i]);

		if (Cache_Database_KEY[F_KEY_i] == key) {
			Cache_Database_KEY.erase(F_KEY);
			Cache_Database_CONTENT.erase(F_CONTENT);

		//	for (int i = 0;i < Cache_Database_KEY.size();i++) {
		//		cout << Cache_Database_KEY[i] << " ";}
		//	cout << endl;
		//	for (int i = 0;i < Cache_Database_CONTENT.size();i++) {
		//		cout << Cache_Database_CONTENT[i] << " ";}

			return 1;
		}
		else {
			return 0;
		}

	}
	else if (command == "view") {

		auto F_KEY = find(Cache_Database_KEY.begin(), Cache_Database_KEY.end(), key);
		int F_KEY_i = F_KEY - Cache_Database_KEY.begin();
		int Cache_Database_KEY_Quantity = Cache_Database_KEY.size();

		if (F_KEY_i >= Cache_Database_KEY_Quantity) {
			return 0;
		}

		cout << key << ">>" << Cache_Database_CONTENT[F_KEY_i] << endl;
		return 1;

	}
	else if (command == "index") {

		cout << "K>>";
		for (int i = 0;i < Cache_Database_KEY.size();i++) {
			cout << Cache_Database_KEY[i] << " ";}
		cout << endl;

		cout << "C>>";
		for (int i = 0;i < Cache_Database_CONTENT.size();i++) {
			cout << Cache_Database_CONTENT[i] << " ";}
		cout << endl;


		return 1;
	}
	else if (command == "clear") {

		Cache_Database_KEY.clear();
		Cache_Database_CONTENT.clear();
		return 1;
	}

	else return 0;



}