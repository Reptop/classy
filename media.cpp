#include <iostream>
#include <cstring>
#include "media.h"

using namespace std;

Media::Media() {
  //leaving this contructor function blank
}

//getters
int* Media::getYear(){
  return &year;
}

char* Media::getTitle(){
  return title;
}

int Media::getType(){
  return 0;
}
