#include "Cache_Database.h"

using namespace std;

static vector<string> Cache_Database_KEY{"你","第一","op"};
static vector<string> Cache_Database_CONTENT{"我","第二","po"};





char Cache_DataBase(std::string command, std::string key, std::string content) {
	if (command == "add") {
		Cache_Database_KEY.push_back(key);
		Cache_Database_CONTENT.push_back(content);
		return 1;
	}
	else if (command == "delete") {

		auto F_KEY = find(Cache_Database_KEY.begin(), Cache_Database_KEY.end(), key);
		auto F_CONTENT = find(Cache_Database_CONTENT.begin(), Cache_Database_CONTENT.end(), content);
		int F_KEY_i = F_KEY - Cache_Database_KEY.begin();
		int F_CONTENT_i = F_CONTENT - Cache_Database_CONTENT.begin();
		cout << F_KEY_i << endl;
		cout << F_CONTENT_i << endl;

		if(F_KEY_i == 0){
			if (Cache_Database_KEY[F_KEY_i] == key || Cache_Database_CONTENT[F_CONTENT_i] == command)
			{
				cout << F_KEY_i << endl;

				cout << "///" << endl;

				Cache_Database_KEY.erase(F_KEY, Cache_Database_KEY.end());
				Cache_Database_CONTENT.erase(F_CONTENT, Cache_Database_CONTENT.end());
			}
			else cout << "not find 1" << endl;
		}
		else{
			if (Cache_Database_KEY[F_KEY_i] == key || Cache_Database_CONTENT[F_CONTENT_i] == command)
			{
				cout << F_KEY_i << endl;
				Cache_Database_KEY.erase(F_KEY, Cache_Database_KEY.end());
				Cache_Database_CONTENT.erase(F_CONTENT, Cache_Database_CONTENT.end());
			}
			else {
				cout << "not find 2" << endl;

				cout << F_KEY - Cache_Database_KEY.begin() << endl;
				cout << F_CONTENT - Cache_Database_CONTENT.begin() << endl;

			}
		}

		return 1;
	}
	else {
		return 0;
	}


	










}