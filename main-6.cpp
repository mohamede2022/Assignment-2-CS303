#include "func.h"

int main()
{
List l;
int ch;
while(1) // Infinite loop for displaying the menu until the user chooses to exit.
{
cout<<"\n**** MENU ****";
cout<<"\n1:Create\n2:Insert\n3:Delete\n4:Find\n5:Display\n6:Exit\n";
cout<<"\nEnter Your Choice:";
cin>>ch;
// using switch statements to execute the corresponding functionality based on the user's choice.
switch(ch)
{
case 1:
l.create();
break;
case 2:
l.insert();
break;
case 3:
l.delet();
break;
case 4:
l.search();
break;
case 5:
l.display();
break;
case 6:
return 0;
}
}

return 0;

}