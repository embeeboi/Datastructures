#include "linklist.cpp"

using namespace std;
int main()
{

node* head = nullptr;
head = insertnode(3,head);
head = insertnode(4,head);
head = insertnode(5,head);

for(int i=0;i<100;i++)
{
    head = insertnode(i,head);
}
cout << t << endl;

node* temp = head;
for(int i=0;i<t;i++)
{
    cout << "{" << temp->data <<  "} ";
    temp = temp->next;
}

}