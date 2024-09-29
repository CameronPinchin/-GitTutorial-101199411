#include "File.h"

using namespace std;

File::File(string name, string contents, Date& date){
    this->name = name;
    this->contents = contents;
    this->date = date;
}

string File::getName(){
    return name;
}

string File::getContents(){
    return contents;
}

bool File::lessThan( Date& d ){
    
    if((date.lessThan(d))){
        cout << " File Less Than" << endl;
        return true;
    } else {
        return false;
    }

}

void File::print(){
    cout << "File Name: " << getName() << endl;
    date.print();
}

void File::printContents(){
    cout << "Contents: " << getContents() << endl;

}