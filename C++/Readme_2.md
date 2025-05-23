## Function in memory

Their are 2 types of memory

1. Stack (Generally used for static allocation) <br>
   We also call this as <b>Call Stack</b><br>
   Follows <b>LIFO</b> (Last in First Out)<br>
   Real life ex : Stack of books one above other
2. Heep (Generally used for dynamic allocation)

main() function is automatically called by compiler.<br>
So, when it's called, the 1st layer created is known as
<b>Stack frame</b><br>
Whole function and variables related to it will be stored
in this stack frame.

When this main fn will call other function, it will take
space above the stack frame & all variables related to
that fn will be stored in it.

When the return is done from top, its goes to main fn and
removing itself from the stack.
So, only the main fn will be left at last
