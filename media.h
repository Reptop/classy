#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class Media{
 public:
    Media(); //contructor 
    char* getTitle();
    int* getYear();
    virtual int getType();
 private:
    //title and year variables that will be passed down to children 
    char title[30];
    int year;
};
#endif
