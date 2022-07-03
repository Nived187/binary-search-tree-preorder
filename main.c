#include<stdio.h>

struct create{

    int data;
    struct create *left;
    struct create *right;
}*root,*node,*temp,*a[10];

int top=0;

void main()

{
    void nodecreate();
    void maintree(struct create*);

   	nodecreate();
	
	temp=root;
	maintree(temp);
	
	while(top>=0)
	{
		maintree(a[top]);
		top--;
	}

    
}

void maintree(struct create *temp)
{
	while(temp!=NULL)
	{
		printf("\t %d",temp->data);
		
		if(temp->right!=NULL)
		{
			a[top]=temp->right;
			top++;
		}
		
		temp=temp->left;
	}
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

