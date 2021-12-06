#include <iostream> 
#include <cstring>
#include "media.h"
using namespace std; 


media::media() { 
	//constructor
} 

int* media::getYear(){ 
	return &year;  
}

char* media::getTitle() {
	return title; 
}

int* media::getType() {
  return 0;
}
