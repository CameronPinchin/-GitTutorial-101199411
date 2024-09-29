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
 	if (date.getYear() < d.getYear()) return true;
	if (date.getYear() > d.getYear()) return false;
	//years are equal
	if (date.getMonth() < d.getMonth()) return true;
	if (date.getMonth() > d.getMonth()) return false;
	//months are equal
	return (date.getDay() < d.getDay());   


}

void File::print(){
    cout << "File Name --: " << getName() << endl;
    date.print();
}

void File::printContents(){
    
    cout << "Name: " << getName() << endl;
    date.print();
    cout << "Contents: " << getContents() << endl;

}