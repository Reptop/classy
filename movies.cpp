#include <iostream>
#include <cstring>
#include "media.h"
#include "movies.h"

using namespace std;

Movie::Movie()
{
    //contructer function, I could use this space, but I prefer not to 
}

//getters for director, type, duration, and rating 
int Movie::getType() {
  return 0;
}

char* Movie::getDirector(){
  return director;
}

int* Movie::getDuration(){
  return &duration;
}

float* Movie::getRating(){
  return &rating;
}
