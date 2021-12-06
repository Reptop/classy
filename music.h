#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

class Music : public Media {
 public:
  Music();
    virtual int getType();
    char* getArtist();
    char* getPublisher();
    int* getDuration();
 private:
    char artist[40];
    char publisher[40];
    int duration;
};
#endif
