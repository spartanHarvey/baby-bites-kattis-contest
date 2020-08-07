#include<iostream>
#include <string>


using namespace std;


int main() {

    int num, counter=0, c=0;
    string str;
    cin >> num;

   
    for (int i = 0; i < num; i++) {

        cin >> str;

        if (str == "mumble") {

            counter++;

        }
        else {
            c= stoi(str);
            if (counter + 1 == c) {
                counter = c;
            }
            else
                break;
        }
        
       
    }
    if (counter == num) {
        cout << "makes sense";
    }
    else
        cout << "something is fishy";
 

    system("pause");
    return 0;
}