#include <iostream>
#include <cstring>
#include "media.h"
#include "videogames.h"

using namespace std;

Videogame::Videogame()
{

}
//getters for publisher, rating, and type  
char* Videogame::getPublisher(){
  return publisher;
}

float* Videogame::getRating(){
  return &rating;
}

int Videogame::getType(){
  return 2;
}
