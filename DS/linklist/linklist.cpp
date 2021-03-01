
#include "linklist.hpp"
int t = 0;

node::node(int x) : data(x) , next(nullptr) , prev(nullptr) {}


node* head = new node(5);



node* newnode(int x=0)
{
    return new node(x);
}


node* insertnode(int x,node* intnode)
{
    if(intnode == nullptr)
    {
        t+=1;
        return newnode(x);
        
    }  
  
    
    
        
        intnode->next = insertnode(x,intnode->next);
    
      
        
        
        return intnode;
 
    
}