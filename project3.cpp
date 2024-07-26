 #include <iostream> // Include standard input-output library #include <cstdlib> // Include standard library..
#include <iostream> // Include standard input-output library

#include <cstdlib> // Include standard library for functions like rand()

#include <cmath> // Include cmath library for mathematical functions

#include <bits/stdc++.h> // Include all standard libraries (for maps, vectors, etc.)

#include<ctime>

using namespace std;

 

 

// PRIORITY

// DUEDATE

 

//DATA FORMATTING

 

 

//TABLE PRINT

// High/Low/Medium   medium , 0 , 1 , 2

// there should be limited cateogry availaale

 

// WORK

// PERSONAL

// REMIND

// BIRTHDAY

 

 

 

class Task{

public:

string description;

string category;

bool completed;

string dueDate; // TAKEN FROM SYSTEM TODAY();

string priority; // LOW MEDIUM

 

Task(string description , string category,string priority,string dueDate){

 

this->description = description;

this->category = category;

this->dueDate = dueDate;

this->priority = priority;

this->completed = false;

}

};

 

vector<Task> NotesAdded;

 

void displayTasks(){

 

if(NotesAdded.empty()){

cout<<"Please add some task first to View";

}

else{

cout<<"\nTasks:\n";

cout<<"   "<<"Task"<<" "<<"Category"<<" "<<"Priority"<<" "<<"DueDate"<<" "<<

"Status"<<"\n";

 

for(int i=0;i<NotesAdded.size();i++){

cout<<i+1<<". "

<<NotesAdded[i].description<<" "

<<NotesAdded[i].category<<" "

<<NotesAdded[i].priority<<" "

<<NotesAdded[i].dueDate<<" "

<<(NotesAdded[i].completed ? "Completed" : "Pending")<<"\n";

}

}

}

void markTaskAsCompleted() {

 

int taskNumber;

cin>>taskNumber;

 

if(taskNumber>=0 && taskNumber<=NotesAdded.size()){

NotesAdded[taskNumber - 1].completed = 1;

}else{

cout<<"Invalid Task Number"<<"\n";

}

};

void deleteTask(){

//index of that task

// if that task is not present show him that put the task first

int taskNumber;

cin>>taskNumber;

 

if(taskNumber>=0 && taskNumber<=NotesAdded.size()){

NotesAdded.erase(NotesAdded.begin()+taskNumber-1);

}else{

cout<<"Invalid Task Number"<<"\n";

}

 

}

void filterTaskByCategory(){

 

 

 

}

 

 

// Map to store the leaderboard (player name and score)

 

 

// Function to play the game

void addtask() {

 

string description;

string category;

string priority;

 

cout<<"Enter the Description\n";

cin.ignore();

getline(cin,description);

cout<<"Enter the Category you want\n";

getline(cin,category);

cout<<"Enter Task Priority\n";

 

getline(cin,priority);

auto now = time(nullptr);

tm* current = localtime(&now);

 

char buffer[80];

strftime(buffer,sizeof(buffer),"%Y-%m-%d",current);

string dueDate(buffer);

 

Task task(description,category,priority,dueDate);

 

NotesAdded.push_back(task);

}

 

// Function to display the menu and handle user choices

void displayMenu() {

int choice; // Variable to store the user's menu choice

do {

cout << "\nMenu:\n"

<< "1. Add Task\n"

<< "2. View Task\n"

<< "3. Mark Task as Completed\n"

<< "4. Delete Task\n"

<< "5. Filter Task By Category\n"

<< "6. Exit\n"

<< "Enter your choice: ";

cin >> choice; // Read the user's choice

 

switch (choice) {

case 1:

addtask();

break;

case 2:

displayTasks();

break;

case 3:

markTaskAsCompleted();

break;

case 4:

deleteTask();

case 5:

filterTaskByCategory();

break;

case 6:

cout<<"Goodbye !Please do the tasks on time";

}

} while (choice != 6); // Loop until the user chooses to exit

}

 

int main() {

displayMenu(); // Display the menu to the user

return 0; // End of the program

}