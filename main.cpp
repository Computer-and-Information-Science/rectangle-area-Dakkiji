#include <iostream>
using namespace std;

int main() {
  const double length = 7.2;
  const double width = 1.3;
 double area = length * width;
 double perimiter = 2 * (length + width);
 cout << "rectangle Properties : " << endl;
 cout << "length = " << length << endl;
 cout <<  "width = " << width << endl;
 cout << "area = " << area << endl; 
cout << " perimiter = " << perimiter << endl;
}