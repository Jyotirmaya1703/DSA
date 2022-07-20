void SpecialStack::push(int x)
{
    if (isEmpty() == true) {
        Stack::push(x);
        min.push(x);
    }
    else {
        Stack::push(x);
        int y = min.pop();
        min.push(y);
  
        /* push only when the incoming element
           of main stack is smaller 
        than or equal to top of auxiliary stack */
        if (x <= y)
            min.push(x);
    }
}
  
/* SpecialStack's member method to 
   remove an element from it. This method
   removes top element from min stack also. */
int SpecialStack::pop()
{
    int x = Stack::pop();
    int y = min.pop();
  
    /* Push the popped element y back 
       only if it is not equal to x */
    if (y != x)
        min.push(y);
  
    return x;
}