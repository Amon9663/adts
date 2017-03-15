#include <iostream>
#include "List.h"

using namespace std;

int main()
{

 List L1, L2;

 //Do some stuff with L1, L2, ...
 // ...
L1.insert(8,1);
L1.insert(6,1);
L1.insert(5,2);
L2.insert(54,1);
L2.insert(27,1);
L2.insert(45,2);
L1.display();
L2.display();
}
