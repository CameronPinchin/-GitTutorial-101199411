#ifndef FILE_H
#define DATE_H

#include <iostream>
#include <string>
#include "Date.h"

using namespace std;
using namespace Date;

class File {

    public:

        //Constructors
        File(string name, string content, Date& date);
        
        //getters
        string getName();
        string getContents();


        //print functions
        void print();
        void printContents();

        //Other functions
        bool lessThan();

    private:

        string name;
        string content;
        Date lastModified;

};

#endif