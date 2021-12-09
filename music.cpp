#include <iostream>
#include <cstring>
#include "media.h"
#include "music.h"

using namespace std;

Music::Music()
{

}

//getters for duration, artist, and publisher 
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
