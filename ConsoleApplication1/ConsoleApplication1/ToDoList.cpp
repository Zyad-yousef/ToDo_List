 #include "ToDoList.h"
	
ToDoList::ToDoList() :head(NULL){ }    //implement costructor
void ToDoList::AddTask(string value) {      //implement fun addtask
    node* new_node, * last;
    new_node = new node;
    new_node->data = value;
    if (head == NULL) {
        head = new_node;
        new_node->next = NULL;
    }
    else {
        last = head;
        while (last->next != 0) {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
    len++;
}
void ToDoList::DisplayList() {        //implement fun displaytask
    node* current_node;
    if (head == NULL)
        cout << "The List is Empty " << ", Add task to the list" << endl;
    else
    {
        current_node = head;
        for (int i = 1; i <= len; i++) {
            cout << "the " << i << " # task  " << current_node->data << "\n";
            current_node = current_node->next;
        }
        cout << endl;
    }
    cout << endl;
}

void ToDoList:: RemoveTask(string value) {           //implement fun remaovetask
    node* current, * previous;
    current = head;
    previous = head;
    if (current == NULL) {
        cout << "Not found\n";
        return;
    }
    if (current->data == value) {
        head = current->next;
        free(current);
        return;
    }
    while (current != NULL && current->data != value)
    {
        previous = current;
        current = current->next;
    }
    if (current == NULL) {
        cout << "Not found\n";
        return;
    }
    previous->next = current->next;
    free(current);
    len--;
}
void ToDoList::CheckTask(string value) {    //implement fun checktask
    node* check1 = head;

    while (check1 != NULL && check1->data != value) {
        check1 = check1->next;
    }
    if (check1 == NULL) {
        cout << "Not found\n";
        return;
    }
    if (check1->check == false)
    {
        cout << "Not compelete\n";
    }
    else {
        cout << "Compelete\n";
    }
}
void ToDoList::MakeDone(string value) {   //implement fun makedone
    node* done = head;
    while (done != NULL && done->data != value) {
        done = done->next;
    }
    if (done == NULL) {
        cout << "Not found\n";
        return;
    }
    done->check = true;
}

int ToDoList::count() {
    int count = 0;
    node* co=head;
    while (co != NULL) {
        count++;
        co = co->next;
    }
    
    return count;
}
