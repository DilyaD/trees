//
//  trees delet.cpp

//

#include "trees delet.hpp"
Node *Delete(Node *x, int k)
{
if (!x) return 0;
if (k<x->key) x->left=Delete(x->left, k);
else if (k>x->key) x->right=Delete(x->right, k);
else
{
Node *y=x->left;
Node *z=x->right;
delete x;
if (!z) return y;
Node* min=SearchMin(z);
min->right=DeleteMin(z);
min->left=y;
return Balance(min);
}
return Balance(x);
}
