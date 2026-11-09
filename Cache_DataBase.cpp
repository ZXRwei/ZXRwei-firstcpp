#include "Cache_Database.h"

using namespace std;

static vector<string> Cache_Database_KEY{"你","第一","po"};
static vector<string> Cache_Database_CONTENT{"我","第二","op"};





char Cache_DataBase(string command, string key, string content) 
{
	if (command == "add") {

		if ("" == key && "" == content) {
			cout << "Error:Not find key or content." << endl;
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
		auto F_CONTENT = find(Cache_Database_CONTENT.begin(), Cache_Database_CONTENT.end(), content);
		int F_KEY_i = F_KEY - Cache_Database_KEY.begin();
		int F_CONTENT_i = F_CONTENT - Cache_Database_CONTENT.begin();
		cout << F_KEY_i << endl;
		cout << F_CONTENT_i << endl;

		int Cache_Database_KEY_Quantity = Cache_Database_KEY.size() - 1;
		int Cache_Database_CONTENT_Quantity = Cache_Database_CONTENT.size() - 1;

		if (Cache_Database_KEY_Quantity >= F_KEY_i && Cache_Database_CONTENT_Quantity >= F_CONTENT_i) {
			if (Cache_Database_KEY[F_KEY_i] == key && Cache_Database_CONTENT[F_CONTENT_i] == content) {
				cout << F_KEY_i << endl;

				cout << "///" << endl;

				Cache_Database_KEY.erase(F_KEY, Cache_Database_KEY.end());
				Cache_Database_CONTENT.erase(F_CONTENT, Cache_Database_CONTENT.end());

				return 1;
			}else cout << "Error:Key or content in database all wrong" << endl;

		}
		else {
			cout << "Error" << endl;
			return 0;
		}



	return 1;
	}
	else return 0;


	










}