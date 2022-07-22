#include<bits/stdc++.h>
using namespace std;

node* reverse(node* &head){
    ndoe* prevptr = NULL;
    node* currptr=head;
    node* nextptr;
    while (currptr!=NULL)
    {
        nextptr=currptr->next;
        currptr->next=prevptr;
        prevptr=currptr;
        currptr=nextptr;
    }

    return prevptr;
    
}

int main(int argc, char const *argv[])
{
    
    return 0;
}
