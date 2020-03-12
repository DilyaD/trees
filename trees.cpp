//
//  реализация дерева.cpp

//

#include "реализация дерева.hpp"
#include <iostream>
using namespace std;

int main()
{
struct tnode {
  int field;           // поле данных
  struct tnode *left;  // левый потомок
  struct tnode *right; // правый потомок
};
При этом обход дерева в префиксной форме будет иметь вид
void treeprint(tnode *tree) {
  if (tree!=NULL) { //Пока не встретится пустой узел
    cout << tree->field; //Отображаем корень дерева
    treeprint(tree->left); //Рекурсивная функция для левого поддерева
    treeprint(tree->right); //Рекурсивная функция для правого поддерева
  }
}
Обход дерева в инфиксной форме будет иметь вид
void treeprint(tnode *tree) {
  if (tree!=NULL) { //Пока не встретится пустой узел
    treeprint(tree->left); //Рекурсивная функция для левого поддерева
    cout << tree->field; //Отображаем корень дерева
    treeprint(tree->right); //Рекурсивная функция для правого поддерева
  }
}
Обход дерева в постфиксной форме будет иметь вид
void treeprint(tnode *tree) {
  if (tree!=NULL) { //Пока не встретится пустой узел
    treeprint(tree->left); //Рекурсивная функция для левого поддерева
    treeprint(tree->right); //Рекурсивная функция для правого поддерева
    cout << tree->field; //Отображаем корень дерева
  }
}
return 0;
    
