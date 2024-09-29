#ifndef FILE_H
#define FILE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
//using namespace Date;

class File {

    public:

        //Constructors
        File(string name, string contents, Date& date);
        
        //getters
        string getName();
        string getContents();


        //print functions
        void print();
        void printContents();

        //Other functions
        bool lessThan( Date& d );

    private:

        string name;
        string contents;
        Date date;

};

#endif