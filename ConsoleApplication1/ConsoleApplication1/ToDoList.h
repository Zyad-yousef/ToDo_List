#pragma once
#include<iostream>
#include<string>
using namespace std;
class ToDoList
{	    struct node    //to make node in linked list
    {
        string data;
        node* next;
        bool check = false;
    };
    node* head = NULL;
    int len = 0;
public:
    ToDoList();   //constructor
    void AddTask(string value);   //to add task
    void DisplayList();    //to display list
    void RemoveTask(string value);    //to remove task
    void CheckTask(string value);     //to ckeck if it done or not
    void MakeDone(string value);      //to make task done
    int count();      //practical question
};