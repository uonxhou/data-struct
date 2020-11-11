#include "/Users/test/Desktop/数据结构-严蔚敏/BinTree/Header/BinTree.h"

void InitBinTree(BinTree *bt, ElemType ref){
    bt->root = NULL;
    bt->refvalue = ref;
}

void CreatBinTree_1(BinTree *bt){
    CreatBinTree_1(bt, &(bt->root));
}

void CreatBinTree_1(BinTree *bt, BinTreeNode **t){
    ElemType Item;
    scanf("%c", &Item);
    if(Item == bt->refvalue)
        (*t) = NULL;
    else
    {
        (*t) = (BinTreeNode*)malloc(sizeof(BinTreeNode));
        assert((*t) != NULL);
        (*t)->data = Item;
        CreatBinTree_1(bt, &((*t)->leftChild));
        CreatBinTree_1(bt, &((*t)->rightChild));
    }
}

void CreatBinTree_2(BinTree *bt){
    CreatBinTree_2(bt, bt->root);
}

void CreatBinTree_2(BinTree *bt, BinTreeNode *&t){
    ElemType Item;
    scanf("%c", &Item);
    if (Item == bt->refvalue)
        t = NULL;
    else{
        t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
        assert(t != NULL);
        t->data = Item;
        CreatBinTree_2(bt, t->leftChild);
        CreatBinTree_2(bt, t->rightChild);
    }
}

void CreatBinTree_3(BinTree *bt){
    bt->root = CreatBinTree_3_(bt);
}
BinTreeNode* CreatBinTree_3_(BinTree *bt){
    ElemType Item;
    scanf("%c", &Item);
    if (Item == bt->refvalue)
        return NULL;
    else{
        BinTreeNode *t = (BinTreeNode*)malloc(sizeof(BinTreeNode));
        assert(t != NULL);
        t->data = Item;
        t->leftChild = CreatBinTree_3_(bt);
        t->rightChild = CreatBinTree_3_(bt);
        return t;
    }

}