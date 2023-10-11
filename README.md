# Assignment-2 CS303

**Initialization**
- The code begins by including the "func.h" header file, which presumably contains the List class definition. It also defines the main function.
**List Instance**
- It creates an instance of the List class named 'l'. This instance will be used to perform various operations on a linked list.
**Menu Loop**
- The program enters an infinite loop using while(1). This loop will keep running until the user chooses to exit. The purpose of this loop is to display a menu and perform actions based on the user's selection.
- 
**Menu Display**
- Inside the loop, the program displays a menu with the following options for the user to choose from:
  
"1: Create" (to create a new element in the list)

"2: Insert" (to insert an element into the list)

"3: Delete" (to delete an element from the list)

"4: Find" (to search for an element in the list)

"5: Display" (to show the elements in the list)

"6: Exit" (to exit the program)

A switch statement is used to execute the corresponding functionality based on the user's choice. The user's choice is compared to the cases in the switch statement.

**Case 1 (Create):**
- If the user selects "1: Create," the program calls the 'create' function, which is expected to create a new element in the linked list.
  
**Case 2 (Insert):**
- If the user selects "2: Insert," the program calls the 'insert' function, which is expected to insert an element into the linked list.
  
**Case 3 (Delete):**
- If the user selects "3: Delete," the program calls the 'delet' function, which is expected to delete an element from the linked list.
  
**Case 4 (Find):**
- If the user selects "4: Find," the program calls the 'search' function, which is expected to search for an element in the linked list.
  
**Case 5 (Display):**
- If the user selects "5: Display," the program calls the 'display' function, which is expected to display the elements in the linked list.
  
**Case 6 (Exit):**
- If the user selects "6: Exit," the program immediately exits by returning 0, ending the program.


This code effectively provides a user-friendly menu for interacting with a linked list, allowing the user to create, insert, delete, search, and display elements in the list until they choose to exit.


