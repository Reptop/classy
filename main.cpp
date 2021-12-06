//Author: Raed K
//Date: 12/5/21 
//This code is for keeping a database of different media: video games, music and movies. 
//The program uses a vector pointer, pointing to a parent class with various children 
//

#include <bits/stdc++.h>
#include "media.h" 
#include "videogames.h" 
#include "movies.h" 
#include "music.h" 

using namespace std; 

//function protos 
void add(vector<Media*> *list); 
void searchTitle(vector<Media*> *list, char title[20]); 
void searchYear(vector<Media*>* list, int year);
void deleteYear(vector<Media*>* list, int year); 
void deleteTitle(vector<Media*> *list, char title[20]); 


int main() {
  //variables for inputting if you want to delete or search by year
    bool run = true;
    char cmd[10];
    char searchChoice[10]; 
    char titleYear[20]; 
    char deleteChoice[10]; 
    int dyeet;
    char dtitle[20];

    int yeet; 

    vector<Media*> *doge = new vector<Media*>(); 

    while (run == true) {
        cout << "\nWould you like to ADD, DELETE, SEARCH, or QUIT" << endl;
        cin >> cmd;  
        cin.clear(); 
        cin.ignore(10000, '\n'); 
        //add media 
        if (strcmp(cmd,"ADD") == 0) {
          cin.clear(); 
           add(doge); 
           cin.clear();

        }
        if (strcmp(cmd, "SEARCH") == 0) {
          cout << "Would you like to search by title or year?" << endl;
          cin.get(searchChoice, 6); 
          cin.clear(); 
          cin.ignore(10000, '\n'); 
          if (strcmp(searchChoice, "title") == 0) {
              cout << "What is the title of the media?" << endl; 
              cin.getline(titleYear, 20);
              cin.clear(); 
              searchTitle(doge, titleYear);   
              cout << "Media Searched!" << endl;
          }
          else {
            cout << "What is the year of the media?" << endl;
              cin >> yeet;  
              cin.clear(); 
              searchYear(doge, yeet);
              cout << "Media Searched!" << endl; 

          }
          
        }
        else if (strcmp(cmd,"DELETE") == 0) {
         cout << "Would you like to delete by title or year?" << endl;
          cin >> deleteChoice; 
          cin.clear(); 
          cin.ignore(10000, '\n'); 
          if (strcmp(deleteChoice, "title") == 0) {
              cout << "What is the title of the media?" << endl; 
              cin.getline(dtitle, 20); 
              cin.clear(); 
              cin.ignore(10000, '\n'); 
              deleteTitle(doge, titleYear);   
              cout << "Media Deleted!" << endl; 
          }
          else {
            cout << "What is the year of the media?" << endl;
              cin >> dyeet;
              cin.clear(); 
              cin.ignore(10000, '\n'); 
              deleteYear(doge, dyeet);
              cout << "Media Deleted!" << endl; 

          }

        }
        else if (strcmp(cmd, "QUIT") == 0) {
             cout << "See you next time..."; 
             break;
        }
        else if (strcmp(cmd,"ADD") != 0 || strcmp(cmd,"SEARCH") != 0|| strcmp(cmd,"DELETE") != 0|| strcmp(cmd,"QUIT") != 0) {
          //cout << "Invalid Input, dummy"; 
        }
    }

}

void add(vector<Media*> *list) {
  char choice[20];
  cout << "What kind of media? (Video Game, Music or Movie)" << endl;
  cin.get(choice, 20); 
  cin.clear(); 
  cin.ignore(10000, '\n'); 
  //add music 
   if (strcmp(choice, "music") == 0) {
      Music *music = new Music();
      cout << "Input title: " << endl;
      cin.get(music->getTitle(), 30);
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Input artist: " << endl;
      cin.get(music->getArtist(), 30);
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Input duration (seconds): " << endl;
      cin >> *music->getDuration();
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Input publisher: " << endl;
      cin.get(music->getPublisher(), 30);
      cin.clear();
      cin.ignore(10000, '\n');
      cout << "Input Year: " << endl;
      cin >> *music->getYear();
      cin.clear();
      cin.ignore(10000, '\n');
      list->push_back(music);
      cin.clear(); 
      cout << "Media Added!" << endl; 
  }
  
   if (strcmp(choice, "movie") == 0) {
     //add movie 
    Movie* movie = new Movie();
    cout << "Input title: " << endl;
    cin.get(movie->getTitle(), 30);
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input year: " << endl;
    cin >> *movie->getYear();
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input director: " << endl;
    cin.get(movie->getDirector(), 30);
    cin.clear();
    cin.ignore(1000, '\n');
    cout << "Input duration (minutes): " << endl;
    cin >> *movie->getDuration();
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input rating (out of 5 stars): " << endl;
    cin >> *movie->getRating();
    cin.clear();
    cin.ignore(10000, '\n');
    list->push_back(movie);
    cin.clear(); 
         cout << "Media Added!" << endl; 
   }
   else if (strcmp(choice, "video game") == 0) {
     //add video game 
    Videogame* videogame = new Videogame();
    cout << "Input title: " << endl;
    cin.get(videogame->getTitle(), 30);
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input year: " << endl;
    cin >> *videogame->getYear();
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input publisher: " << endl;
    cin.get(videogame->getPublisher(), 30);
    cin.clear();
    cin.ignore(10000, '\n');
    cout << "Input rating (out of 5 stars): " << endl;
    cin >> *videogame->getRating();
    cin.clear();
    cin.ignore(10000, '\n');
    cin.clear(); 
    list->push_back(videogame);

         cout << "Media Added!" << endl; 
   }
   else {
   }
}

void searchTitle(vector<Media*>* list, char title[20]) {
  //loop through list to find searched media by checking if inputted title is equal to any of of the titles in the vector
  //use dynamic cast to verify which type of media the searched media is. 
  for (vector<Media*>::iterator iter = list->begin(); iter != list->end(); ++iter) {
      if(strcmp(title, (*iter)->getTitle()) == 0) {
       cout << "TITLE: " << (*iter)->getTitle() << endl;
       cout << "YEAR: " << *(*iter)->getYear() << endl;

       if ((*iter)->getType() == 0) {        
        cout << "DIRECTOR: "  << dynamic_cast<Movie*>(*iter)->getDirector() << endl; 
        cout << "DURATION: " << *dynamic_cast<Movie*>(*iter)->getDuration() << " SECONDS" << endl; 
        cout << "RATING: " << *dynamic_cast<Movie*>(*iter)->getRating() << " STARS OUT OF 5" << endl;
      
      } 
       else if ((*iter)->getType() == 1) {
        cout << "PUBLISHER: " << dynamic_cast<Music*>(*iter)->getPublisher() << endl; 
        cout << "ARTIST: " << dynamic_cast<Music*>(*iter)->getArtist() << endl; 
        cout << "DURATION: " << *dynamic_cast<Music*>(*iter)->getDuration() << " SECONDS" << endl; 
      
      } 
      else if ((*iter)->getType() == 2) {
        cout << "PUBLISHER: " << dynamic_cast<Videogame*>(*iter)->getPublisher() << endl; 
        cout << "RATING: " << *dynamic_cast<Videogame*>(*iter)->getRating() << " STARS OUT OF 5" << endl; 
      } 
    }
  }
}
void searchYear(vector<Media*>* list, int year) {
  // same as searchedTitle() except we use an int year variable to find searched media 
  for (vector<Media*>::iterator iter = list->begin(); iter != list->end(); ++iter) {
      if(year == *(*iter)->getYear()) {
       cout << "TITLE: " << (*iter)->getTitle() << endl;
       cout << "YEAR: " << *(*iter)->getYear() << endl;

       if ((*iter)->getType() == 0) {        
        cout << "DIRECTOR: "  << dynamic_cast<Movie*>(*iter)->getDirector() << endl; 
        cout << "DURATION: " << *dynamic_cast<Movie*>(*iter)->getDuration() << " SECONDS" << endl; 
        cout << "RATING: " << *dynamic_cast<Movie*>(*iter)->getRating() << " STARS OUT OF 5" << endl;
      
      } 
       else if ((*iter)->getType() == 1) {
        cout << "PUBLISHER: " << dynamic_cast<Music*>(*iter)->getPublisher() << endl; 
        cout << "ARTIST: " << dynamic_cast<Music*>(*iter)->getArtist() << endl; 
        cout << "DURATION: " << *dynamic_cast<Music*>(*iter)->getDuration() << " SECONDS" << endl; 
      
      } 
      else if ((*iter)->getType() == 2) {
        cout << "PUBLISHER: " << dynamic_cast<Videogame*>(*iter)->getPublisher() << endl; 
        cout << "RATING: " << *dynamic_cast<Videogame*>(*iter)->getRating() << " STARS OUT OF 5" << endl; 
      } 
    }
  }
}
void deleteTitle(vector<Media*>* list, char title[20]) {
  char input[4]; //yes no input; 
  for (vector<Media*>::iterator iter = list->begin(); iter != list->end(); ++iter) {
      if(strcmp(title, (*iter)->getTitle()) == 0) {
       cout << "TITLE: " << (*iter)->getTitle() << endl;
       cout << "YEAR: " << *(*iter)->getYear() << endl;

       if ((*iter)->getType() == 0) {        
        cout << "DIRECTOR: "  << dynamic_cast<Movie*>(*iter)->getDirector() << endl; 
        cout << "DURATION: " << *dynamic_cast<Movie*>(*iter)->getDuration() << " SECONDS" << endl; 
        cout << "RATING: " << *dynamic_cast<Movie*>(*iter)->getRating() << " STARS OUT OF 5" << endl;
      
      } 
       else if ((*iter)->getType() == 1) {
        cout << "PUBLISHER: " << dynamic_cast<Music*>(*iter)->getPublisher() << endl; 
        cout << "ARTIST: " << dynamic_cast<Music*>(*iter)->getArtist() << endl; 
        cout << "DURATION: " << *dynamic_cast<Music*>(*iter)->getDuration() << " SECONDS" << endl; 
      
      } 
      else if ((*iter)->getType() == 2) {
        cout << "PUBLISHER: " << dynamic_cast<Videogame*>(*iter)->getPublisher() << endl; 
        cout << "RATING: " << *dynamic_cast<Videogame*>(*iter)->getRating() << " STARS OUT OF 5" << endl; 
      }
        cout << "delete this media? (y/n)" << endl;
        cin.get(input, 4);
        cin.clear();
        cin.ignore(10000, '\n');
        if(strcmp(input, "y") == 0) {
          //delete
          delete *iter; //destructor 
          iter = list->erase(iter);
          return;
        }
    }
  }
}
void deleteYear(vector<Media*>* list, int year) {
  char input[4]; //yes no input 
  for (vector<Media*>::iterator iter = list->begin(); iter != list->end(); ++iter) {
      if(year == *(*iter)->getYear()) {
       cout << "TITLE: " << (*iter)->getTitle() << endl;
       cout << "YEAR: " << *(*iter)->getYear() << endl;

       if ((*iter)->getType() == 0) {        
        cout << "DIRECTOR: "  << dynamic_cast<Movie*>(*iter)->getDirector() << endl; 
        cout << "DURATION: " << *dynamic_cast<Movie*>(*iter)->getDuration() << " SECONDS" << endl; 
        cout << "RATING: " << *dynamic_cast<Movie*>(*iter)->getRating() << " STARS OUT OF 5" << endl;
      
      } 
       else if ((*iter)->getType() == 1) {
        cout << "PUBLISHER: " << dynamic_cast<Music*>(*iter)->getPublisher() << endl; 
        cout << "ARTIST: " << dynamic_cast<Music*>(*iter)->getArtist() << endl; 
        cout << "DURATION: " << *dynamic_cast<Music*>(*iter)->getDuration() << " SECONDS" << endl; 
      
      } 
      else if ((*iter)->getType() == 2) {
        cout << "PUBLISHER: " << dynamic_cast<Videogame*>(*iter)->getPublisher() << endl; 
        cout << "RATING: " << *dynamic_cast<Videogame*>(*iter)->getRating() << " STARS OUT OF 5" << endl; 
      }
        
        cout << "delete this media? (y/n)" << endl;
        cin.get(input, 4);
        cin.clear();
        cin.ignore(10000, '\n');
        if(strcmp(input, "y") == 0) {
          //delete
          delete *iter; //destructor
          iter = list->erase(iter);
          return;
        }
      }
    }
}
