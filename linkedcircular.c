#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int ele)
    {
        this->data=ele;
        this->next=NULL;
    }
};
void insert(node* &tail,int n,int ele)
{
if(tail==NULL)
{
node* temp=new node(ele);
tail=temp;
temp->next=temp; 
}
else{
    node* temp=tail;
    while(temp->data!=n)
    {
        temp=temp->next;
    }
   node* newnode=new node(ele);
   newnode->next = temp->next;
   temp->next=newnode;
}
}
void display(node* tail)
{
     node* temp=tail;
    do{
        cout<<temp->data<<" ";
        temp=temp->next;
    }while(temp!=tail);
}
int main()
{
    node* tail=NULL;
    int n,ele;
    // cout<<"enter size of node"<<endl;
    // cin>>n;
    cout<<"enter element after which you want to insert"<<endl;
    cin>>n;
    cout<<"enter ele"<<endl;
    cin>>ele;
    insert(tail,n,ele);
    display(tail);
     cout<<"enter element after which you want to insert"<<endl;
    cin>>n;
    cout<<"enter ele"<<endl;
    cin>>ele;
    insert(tail,n,ele);
    display(tail);
    cout<<"enter element after which you want to insert"<<endl;
    cin>>n;
    cout<<"enter ele"<<endl;
    cin>>ele;
    insert(tail,n,ele);
    display(tail);
     cout<<"enter element after which you want to insert"<<endl;
    cin>>n;
    cout<<"enter ele"<<endl;
    cin>>ele;
    insert(tail,n,ele);
    display(tail); 

}