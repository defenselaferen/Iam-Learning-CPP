#include <iostream>
#include <string>
#include <fstream>

using namespace std;

class Student {
	public:
		string name;

};

int main(int argc, const char* argv[])
{
   Student myData;
   myData.name = "Tania";

   fstream myFile;

   myFile.open("data.bin", ios::trunc | ios::in | ios::out | ios::binary);

   myFile.write((char*)&myData, sizeof(myData));

   myFile.seekg(0);

   Student myStudent;
   myFile.read((char*)&myStudent, sizeof(myStudent));

   cout << myStudent.name << endl;

   myFile.close();

   cin.get();
   return 0;
}