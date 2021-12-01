#include <bits/stdc++.h>
#include "media.h" 
#include "games.h" 
#include "movies.h" 
#include "music.h" 

using namespace std; 

void add(vector<media*> *list); 

int main() {
    bool run = true;

    char cmd[10];

    vector<media*> *doge = new vector<media*>();

    while (run == true) {
        cout << "\nWould you like to ADD, DELETE, SEARCH, or QUIT" << endl;
        cin >> cmd;

        //add student
        if (strcmp(cmd,"ADD") == 0) {
		cout << "What kind of media? (Video Game, Music or Movie)" << endl; 
		cout << "Example Input: Music";
		add(doge); 
        }
        //print everyone
        else if (strcmp(cmd,"PRINT") == 0) {
          }
        else if (strcmp(cmd,"DELETE") == 0) { 
        }
        else if (strcmp(cmd, "QUIT") == 0) {
             cout << "See you next time..."; 
             break;
        }
        else 
           cout << "Invalid Input, dummy"; 
    }

}

void add(vector<media*> *list) {
	media *hi = new media();	
}
