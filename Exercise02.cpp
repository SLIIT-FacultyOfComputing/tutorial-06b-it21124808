#include "Box.h"
#include <iostream>
using namespace std;

//function main begins with program execution
int main()
{

      Box box1; //creating an object
      
         int ht;
         int wd;
         int ln;

         cout << "Input the Length: "; //prompt
         cin >> ln; //read

         cout << "Input the Width: "; //prompt
         cin >> wd; //read

         cout << "Input the Height: "; //prompt
         cin >> ht; //read
    

           //function calling
          box1.setWidth(wd);
          box1.setHeight(ht);
          box1.setLength(ln);


          cout << "Box Height: " << box1.getHeight() << endl; //display
          cout << "Box Width: "  << box1.getWidth() << endl; //display
          cout << "Box Length: " << box1.getLength() << endl; //display

          cout << "Volume of Box is " << box1.calcVolume() << endl; //display

            return 0;

} //end of the main function