# Friend-Function-in-cpp
Like friend class, a friend function can be given special grant to access private and protected members. A friend function can be: a) A method of another class b) A global function Eg: class Node { private: int key; Node *next; /* Other members of Node Class */ friend int LinkedList::search(); // Only search() of linkedList // can access internal members };
