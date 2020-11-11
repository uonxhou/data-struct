//
// Created by test on 2020/11/9.
//

#ifndef BINTREE_BINTREE_H
#define BINTREE_BINTREE_H

#include "stdio.h"
#include "mm_malloc.h"
#include "assert.h"
#include "string.h"

#define ElemType char

typedef struct BinTreeNode {
    ElemType data;
    BinTreeNode *leftChild;
    BinTreeNode *rightChild;
}BinTreeNode;

typedef struct BinTree{
    BinTreeNode *root;
    ElemType refvalue; //stop flag
} BinTree;

void InitBinTree(BinTree *bt, ElemType ref);

void CreatBinTree_1(BinTree *bt);
void CreatBinTree_1(BinTree *bt, BinTreeNode **t);

void CreatBinTree_2(BinTree *bt);
void CreatBinTree_2(BinTree *bt, BinTreeNode *&t);

void CreatBinTree_3(BinTree *bt);
BinTreeNode* CreatBinTree_3_(BinTree *bt);

//void CreatBinTree_4(BinTree *bt, char *str){
//    CreatBinTree_4(bt, bt->root, str);
//}
//void CreatBinTree_4(BinTree *bt, BinTreeNode *&t, char *str){
//    if (*str == bt->refvalue)
//        t = NULL;
//    else{
//        t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
//        assert(t != NULL);
//        t->data = *str;
//        CreatBinTree_4(bt, t->leftChild, ++str);
//        CreatBinTree_4(bt, t->rightChild, ++str);
//    }
//}

#endif //BINTREE_BINTREE_H
