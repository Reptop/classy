#ifndef MUSIC_H //header gaurd 
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
 public:
  Music(); //contructor 
    virtual int getType(); //virtual function for assiging music child a type. Used for dynamic casting in main.cpp 
    char* getArtist();
    char* getPublisher();
    int* getDuration();
 private:
    //private variables for user to store information regarding music 
    char artist[40];
    char publisher[40];
    int duration;
};
#endif
