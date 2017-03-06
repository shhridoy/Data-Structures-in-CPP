#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
   int arr[30], ele, size, i;

   cout<<"Enter the size of the array: ";
   cin>>size;

   cout<<"Enter the values: ";
   for (i=0; i<size; i++) {
      cin>>arr[i];
   }

   //Read the element to be searched
   cout<<"Enter the elements to be searched: ";
   cin>>ele;

   //Search starts from the zeroth location
   i = 0;
   while (i < size && ele != arr[i]) {
      i++;
   }

   //If i < num then Match found
   if (i < size) {
      cout<< "\nNumber found at the location: " << i+1 <<endl;
   }
   else {
      cout<< "\nNumber not found." <<endl;
   }

   return 0;
}

/** OUTPUT:
Enter the size of the array: 5
Enter the values: 3 5 6 7 8
Enter the elements to be searched: 8

Number found at the location: 5
**/
