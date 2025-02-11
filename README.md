# INET3101 Lab 1

## Code for INET3101 Lab 1

**Who wrote the program (ensure all members are listed in the doc):**

Venice Fan (5895808)

**Program description paragraph:**

The program acts as a basic database system where users can interact through a menu within the terminal. Users can interact with the menu by adding a record and/or printing the number of changes made. The program cannot delete records, print all of the record, number of records or the database size because actual data has not been implemented yet. The program can also be finished when the user decides they want to exit the program.

**Menu definition and usage:**

The menu function is used to display to the users, within the terminal, the following text:
1. Print all records
2. Add a record
3. Delete the last record
4. Print the number of records
5. Print database size
6. Print number of changes
7. Exit

The users can then select one of the following numbers to run certain tasks. Once the 7 is pressed, the menu exits

**Each function defined with:**

1. printAllRecords()
- Input type(s) (if any):
None
- Output type:
Prints the message: “You have entered the Print all records function”
- Algorithm description:
There is no actual algorithm. The message is a placeholder since the actual data has not been implemented yet.

2. addRecord()
- Input type(s) (if any):
User inputs (integers, string and float values)
- Output type:
Prints out the information is the user inputs.
- Algorithm description:
Tells the user to input the part number, part name, part size, part size metric and part cost.
Scanner is used to read the user's inputs.
Displays in terminal the user's entered values.

3. deleteRecord()
- Input type(s) (if any):
None
- Output type:
Prints the message: “You have entered the delete last record function”
- Algorithm description: 
There is no actual algorithm. The message is a placeholder since there is no functionality to do anything.

4. numRecords()
- Input type(s) (if any):
None
- Output type: 
Prints the message: “You have entered the Print number of records function”
- Algorithm description: There is no actual algorithm. The message is a placeholder since there is no functionality to do anything.

5. dataBaseSize()
- Input type(s) (if any):
None
- Output type: “You have entered the Print database size function”
Prints the message:
- Algorithm description: There is no actual algorithm. The message is a placeholder since there is no functionality to do anything.

6. numChanges(int *modifications)
- Input type(s) (if any):
User inputs (integer)
- Output type:
Prints the number of changes made to the database.
- Algorithm description:
Asks the user to make a choice or 1 or 2.
If 1 is picked, the function prints the number of modifications.
If 2 is picked, modification count is incremented and the new count is printed.

7. menu()
- Input type(s) (if any):
User selection (integer)
- Output type:
Depending on the integer the user types, a certain function will be called.
- Algorithm description:
Displays a menu in the terminal in a loop.
Reads user input and calls the corresponding function using a case/switch statement.
Exits when the user inputs 7.

8. main()
- Input type(s) (if any):
None
- Output type:
Calls the menu function.
- Algorithm description:
Calls menu and starts the program.

**Listing of files required and what type they are (.h header, .c c code, etc..):**

lab1.c
