#include <iostream>
using namespace std;
int MAX=50;
int array_queue[50];
int rear=-1;
int front=-1;
void insert_element()
{
    int item;
    if(rear==MAX-1)
    {
        cout<<"Queue Overflow !"<<endl;
    }
    else
    {
        if(front==-1)
        {
            front=0;
        }
            cout<<"Insert The Element in Queue :"<<endl;
            cin>>item;
            rear++;
            array_queue[rear]=item;
            
        
    }
}
void delete_element()
{
    if(front==-1||front>rear)
    {
        cout<<"Queue Underflow !"<<endl;
        return;
    }
    else
    {
        cout<<"Deleted Element from Queue is :"<<array_queue[front]<<endl;
        front++;
    }
}
void display()
{
    int i;
    if(front==-1)
    {
        cout<<"Queue is Empty !"<<endl;
    }
    else
    {
        cout<<"Queue is : ";
        for(i=front;i<=rear;i++)
        {
           cout<<array_queue[i]<<" "; 
        }
        cout<<endl;
    }
}
int main()
{
    int ch;
    while(1)
    {
    cout<<endl;    
    cout<<"1: Insert Element in Queue"<<endl;
    cout<<"2: Delete Element from Queue"<<endl;
    cout<<"3: Display All Elements of Queue"<<endl;
    cout<<"4: Exit"<<endl;
    cout<<"Enter Choice :";
    cin>>ch;
    switch(ch)
    {
        case 1:
            insert_element();
            break;
        case 2:
            delete_element();
            break;
        case 3:
            display();
            break;
        case 4:
            exit(1);
        default:
            cout<<"Invalid Choice!";
    }
    }
    return 0;
}



