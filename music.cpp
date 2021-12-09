#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music::Music()
{
  //contructer function, I could use this space, but I prefer not to 
}

//getters for duration, artist, and publisher, and type 
char* Music::getArtist(){
  return artist;
}

char* Music::getPublisher(){
  return publisher;
}

int* Music::getDuration(){
  return &duration;
}

int Music::getType(){
  return 1;
}
