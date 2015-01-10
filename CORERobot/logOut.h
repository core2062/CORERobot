#ifndef LOGOUT_H
#define LOGOUT_H

#include <iostream>
#include <fstream>
#include <vector>
#include <stdio.h>

class logOut {
	private:
    	std::string fileName;
    	std::ofstream outFile;
	public:
    	logOut(){
    		createFile();
    	}
    	void createFile();
    	void throwLog(std::string s);
		~logOut(){
			outFile.close();
		}


};

#endif
