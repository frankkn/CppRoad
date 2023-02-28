#include <iostream>
using namespace std;

template<typename T>
class Tree
{
    using value_type = T; // member alias
    enum Policy { rb, splay, treeps }; // member enum
    class Node 
    { // member class
        Node* right;
        Node* left;
        value_type value;
      public:
        void f(Tree*);
    };
    Node* top;
  public:
    void g(const T&);
};

template<typename T>
void Tree<T>::Node::f(Tree* p)
{
  //top = right; // error : no object of type Tree specified
  p->top = right; // OK
  value_type v = left->value; // OK: value_type is not associated with an object
}

int main()
{
  return 0;
}