#include<stdio.h>
#include<stdlib.h>

struct tree
{
    struct tree *left, *right;
    int data;
};

struct tree *root = NULL;

// Traversals
void preorder(struct tree *root)
{
    if(root == NULL) return;

    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void inorder(struct tree *root)
{
    if(root == NULL) return;

    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void postorder(struct tree *root)
{
    if(root == NULL) return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}

int main()
{
    struct tree *nn = 0, *c = 0;
    int i, n;

    printf("\nEnter the number of nodes : ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        nn = (struct tree *)malloc(sizeof(struct tree));
        printf("\nEnter the data : ");
        scanf("%d", &nn->data);

        nn->left = NULL;
        nn->right = NULL;

        if(root == NULL)
        {
            root = nn;
        }
        else
        {
            c = root;
            while(1)
            {
                if(nn->data > c->data)
                {
                    if(c->right == NULL)
                    {
                        c->right = nn;
                        break;
                    }
                    else
                        c = c->right;
                }
                else if(nn->data < c->data)
                {
                    if(c->left == NULL)
                    {
                        c->left = nn;
                        break;
                    }
                    else
                        c = c->left;
                }
                else
                {
                    printf("\nDuplicates not allowed.......!!!");
                    free(nn);
                    break;
                }
            }
        }
    }

    printf("\nPreorder: ");
    preorder(root);

    printf("\nInorder: ");
    inorder(root);

    printf("\nPostorder: ");
    postorder(root);

    return 0;
}
