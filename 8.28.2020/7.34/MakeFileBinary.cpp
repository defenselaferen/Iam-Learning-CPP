#include <iostream>
#include <string>
#include <limits>
#include <fstream>

using namespace std;

#ifndef __fstreams
#define __fstreams

class fstreams {
    private:
        string nameFile;
        fstream myFile;
        string keyWord;
    public:
        fstreams(string nameFile) {
            this->nameFile = nameFile;
            this->myFile.open(this->nameFile, ios::out | ios::in | ios::binary);
            if(this->myFile.is_open()) {
                cout << "The File Is Found" << endl;
                this->myFile.close();
            } else {
                this->myFile.close();
                cout << "File Name In This: " << this->nameFile << " Its Not Found. \n Making New File" << endl;
                this->myFile.open(this->nameFile, ios::trunc | ios::out | ios::in | ios::binary);
                this->myFile.close();
            }
        }
        void WriteData(string keyword) {
                this->myFile.open(this->nameFile,ios::out | ios::app | ios::binary);
                this->myFile.write(reinterpret_cast<char*>(&keyword), sizeof(keyWord));
                this->myFile.close();
        }
        // void ShowData() {
        //     char* buffer = (char*)malloc(sizeof(string));
        //     ifstream infile(this->nameFile, ifstream::binary);
        //     infile.read(buffer, sizeof(string));
        //     string *elem << "\n";
        //     infile.close();
        // }
        void ShowData(string &readDataInDataBase) {
            this->myFile.open(this->nameFile, ios::out | ios::in | ios::binary);
            this->myFile.seekg((1 - 1)*sizeof(string),ios::beg);
            this->myFile.read(reinterpret_cast<char*>(&readDataInDataBase),sizeof(readDataInDataBase));
            this->myFile.close();
        }
};
#endif

int Menu()
{
    // Make Console Clear
    system("cls");

    // Make The Variable For Menu
    int menu;
    
    // Show Menu In Conosole
    cout << endl;
    cout << "+===================================+" << endl;
    cout << "|          Make The Database        |" << endl;
    cout << "+===================================+" << endl;
    cout << "| 1. Make Word In Database          |" << endl;
    cout << "| 2. Read data in Database          |" << endl;
    cout << "+===================================+" << endl;
    cout << "Select From [1=2] :";
    cin >> menu;

    return menu;
}

string WriteData() {
    string anyKeyToConfirm;
    cout << "Enter Any Keyword You Want: ";
    cin >> anyKeyToConfirm;

    return anyKeyToConfirm;
}

int main(int argc, const char* argv[])
{
    fstreams* myData;
    myData = new fstreams("data.bin");

    int optionses = Menu();
    char is_continue;
    string TempShowAll;

    enum option{CREATE = 1, READ, FINISH};
        switch(optionses) {
            case CREATE:
                cout << "Make Word In File Database" << endl;
                myData->WriteData(WriteData());
                break;
            case READ:
                cout << "Reading File In Database" << endl;
                myData->ShowData(TempShowAll);
                cout << TempShowAll << endl;
                break;
            default:
				cout << "Selection Wrong" << endl;
				break;
        }
    
    cout << "End Program" << endl;
    return 0;
}