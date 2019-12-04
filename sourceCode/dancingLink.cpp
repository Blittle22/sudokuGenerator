#include "dancingLink.h"

/* CONSTRUCTOR  
    This function will "create" the sudoku matrix
    Call another function within this one to already have the 
    matrix created - Brandon will be doing this
*/
dancingLink::Link()
{
    // insert build() function here
}

/* DESTRUCTOR
    This function will delete the sudoku matrix
    Call another destructor/deletion function (so we don't have to write
    extra code).
*/
dancingLink::~Link()
{
    // 
}

/* COVER
    This function will "cover" random nodes. We can unlink the header of
    the column from neighboring headers. This way, it cannot be accessed
    from other nodes. This process is similar to removing the node from
    a doubly linked list. 
*/
void dancingLink::cover(struct Node *targetNode)
{
    struct Node column = dataNode.column;
    struct Node row = dataNode.row;

    // Make the pointer skip the target node being input from the right and left
    targetNode->left->right = targetNode->right; 
    targetNode->right->left = targetNode->left;

    for(Node* nn = targetNode->down; nn != targetNode; nn = nn->down)
    {
        for(Node* temp = nn->right; temp != nn; temp = temp->right)
        {
            temp->down->up = temp->up;
            temp->up->down = temp->down;
            temp->head->size--;
        }
    }
}

/* UNCOVER
    This function will "uncover" the random noddes. The removed nodes still
    have pointers to their neighbors, so we can link them back again
    using these pointers. We use the same operation as above in cover, but
    in reverse.
*/
void dancingLink::uncover(struct Node *targetNode)
{
    for(Node* nn = targetNode->up; nn != targetNode; nn = nn->up)
    {
        for(Node* temp = nn->left; temp != nn; temp = temp->left)
        {
            temp->head->size++;
            temp->down->up = temp;
            temp->up->down = temp;
        }
    }

    // Reset the pointer to targetNode from the left and right
    targetNode->left->right = targetNode;
    targetNode->right->left = targetNode;
}