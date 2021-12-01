#ifndef MEDIA_H 
#define MEDIA_H 


class media {
	public:
        	media(); //contructor 	
		virtual int getType(); 
		char* getTitle(); 
		char* getYear(); 
	
	private:	
		char title[20]; 
		int year;  
};

#endif 
