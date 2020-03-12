//
//  trees balance.cpp

//

#include "trees balance.hpp"
Node *Balance(Node *x)
{
OverHeight(x);
if (BF(x)==2)
{
if (BF(x->right)<0) x->right=RightRotation(x->right);
return LeftRotation(x);
}
if (BF(x)==-2)
{
if (BF(x->left)>0) x->left=LeftRotation(x->left);
return RightRotation(x);
}
return x;
}
