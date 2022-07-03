#include<stdio.h>

struct create{

    int data;
    struct create *left;
    struct create *right;
}*root,*node,*temp;

void main()

{
    void nodecreate();

    nodecreate();

    
}

void nodecreate()
{
    int s=0;

    root=(struct create *)malloc(sizeof(struct create));
    printf("Enter the number to set as root : ");
    scanf("%d",&root->data);
    temp=root;

    while(1)
    {
        node=(struct create *)malloc(sizeof(struct create));
        printf("Enter number : ");
        scanf("%d",&node->data);
        
        if(node->data==-1)
        break;
        
        s=0;
        while(s!=1)
        {
            if(node->data<temp->data)
            {
                if(temp->left!=NULL)
                {
                    temp=temp->left;
                }

                else
                {
                    temp->left=node;
                    s=1;
                }
            }
            else
            {
                if(temp->right!=NULL)
                {
                    temp=temp->right;
                }

                else
                {
                    temp->right=node;
                    s=1;
                }
            }

        }
        
    }

}