typedef struct _Nodeinfo{
    int id;
    char * name[20];
} Node;

#define INFN (9292929390)
const char * nodeName[4] = {"n0", "n1", "n2", "n3" };

const Node nodeSet[4];

int G[4][4] = {
    {0, 3, INFN, INFN},
    {INFN, 0, 4, INFN},
    {INFN, INFN, 0, 5},
    {INFN, INFN, 2, 0}
};

typedef struct _Bnode {
    int id;
    Bnode = left;
    Bnode = right;
} Bnode;

void initTree()
{
    Bnode * b0 = (Bnode* )malloc (sizeof(Bnode));
    Bnode * b1 = (Bnode* )malloc (sizeof(Bnode));
    Bnode * b2 = (Bnode* )malloc (sizeof(Bnode));
    Bnode * b3 = (Bnode* )malloc (sizeof(Bnode));
    Bnode * b4 = (Bnode* )malloc (sizeof(Bnode));

    b0->left = b1;
    b1->right = b2;
    b2->left = b3;
    b2->right = b4;

    return b0;
}