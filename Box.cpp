#include "Box.h"
#include <iostream>
using namespace std;

//function implementation
void Box::setLength(int l)
{

     length = l;

} //end of the function
void Box::setWidth(int w)
{

     width = w;

} //end of the function
void Box::setHeight(int h)
{

     height = h;

} //end of the function
int Box::getLength()
{
 
     return length;
   
} //end of the function
int Box::getWidth()
{

     return width;

} //end of the function
int Box::getHeight()
{

     return height;
      
} //end of the function
int Box::calcVolume()
{

     return length * width * height;

} //end of the function