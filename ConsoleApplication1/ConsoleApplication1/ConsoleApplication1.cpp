#include <iostream>
#include <string>
#include "ToDoList.h"

using namespace std;
int main()
{
    ToDoList l1;  // identify instance from class
    string task;
    int num = 10;
    
    cout << "----ToDo List----\n";
    while (num != 0) {
        cout << "1 - Add Task\n" << "2 - Remove Task\n" << "3 - Display the list\n" << "4 - Make done\n" << "5 - Check if done\n" << "0 - Exit" << endl;
        cout << "----Choose from the list----\n";
        cout << "Enter the number: ";
    start:
        while (true) {
            cin >> num;
            if (cin.fail()) {
                cin.clear();
                cin.ignore(123, '\n');
                cout << "Enter valid number between 0 : 5" << endl;
            }
            else break;
        }


        cout << endl;
        switch (num)
        {
        case 1:
            cout << "enter your task\n\n";
            cin.ignore();
            getline(cin, task);
            cout << endl;
            l1.AddTask(task);
            break;

        case 2:
            cout << "enter the task you want to remove\n" << endl;
            cin.ignore();
            getline(cin, task);
            cout << endl;
            l1.RemoveTask(task);
            break;

        case 3:
            l1.DisplayList();

            break;
        case 4:
            cout << "enter the name of task you achieved";
            cin.ignore();
            getline(cin, task);
            cout << endl;
            l1.MakeDone(task);
            break;
        case 5:
            cout << "enter the name of task that youn want to check   ";
            cin.ignore();
            getline(cin, task);
            cout << endl;
            l1.CheckTask(task);
            break;
        case 0:break;
        default:cout << "enter number between 1 to 5\n\n";
            goto start;

        }
        
    }
    cout<<"The number or tasks  " << l1.count()<<endl;
    system("pause");

}