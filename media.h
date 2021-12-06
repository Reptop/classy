#ifndef MEDIA_H 
#define MEDIA_H 

#include <iostream> 
#include <cstring> 
using namespace std; 

class media {
	public:
        	media(); //contructor 	
		char* getTitle(); 
		int* getYear(); 
                virtual int getType(); 
	private:	
		char title[30]; 
		int year;  
};

#endif 
