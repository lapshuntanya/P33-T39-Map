#include <iostream>
#include <string>
#include <map>
using namespace std;

int main()
{
     /*Дані рядки, що містять слова.
     Створити map<string, int>, 
     ключем у якого є слово,
     а значенням - кількість повторень.  */

    map<string, int> words; //root = nullptr
    //key (const, sort) = string => word 
    //value = int  => amount

    string user;
    while (user != "stop") {
        cout << "Input a word: ";
        cin >> user;
        if (user == "stop") break;

        if (words.find(user) == words.end()) {
            //Не знайшли вузол з заданим ключем
           // words.insert(pair<string, int>(user, 1));
            words[user] = 1;
        }
        else {
            words[user]++;
        }
    }
    cout << "--------------------------\n";
    for (auto& item: words)
    {
        cout << item.first << " " << item.second << endl;
    }

}

