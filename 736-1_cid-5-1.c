#include <stdlib.h>
#include <stdio.h>

typedef struct node {
	int value;
	int key;
	struct node *left;
	struct node *right;
	struct node *parent;
} node;

typedef node *bin_tree; 



_Bool isEmpty(bin_tree root) 
{ 
if (root==NULL) return 1; 
return 0; 
}


bin_tree init()
{
	bin_tree root = malloc(sizeof(node));
	root->value=-1;
	root->key=-1;
	root->left=NULL;
	root->right=NULL;
	root->parent=NULL;
	return root;
}

int add_elem (bin_tree root, int key2, int value2)
{
	for(;;)
	 {
	
		if (root->key==-1)
		{
			root->key=key2;
			root->value=value2;
			break;
		}
		
		if (root->key==key2)
		{
			root->value=value2;
			break;
		}	
	
	
		if (key2>root->key)
		{
			if (root->right==NULL)
			{
				bin_tree tmp  = init();
				root->right = tmp;
				tmp->key=key2;
				tmp->value=value2;
				tmp->parent=root;
				break;
			}
			else
			{
				root=root->right;
				continue;
			}
		}
	
	
		if (key2<root->key)
		{
			if (root->left==NULL)
			{
				bin_tree tmp = init();
				root->left = tmp;
				tmp->key=key2;
				tmp->value=value2;
				tmp->parent=root;
				break;
			}
			else
			{
				root=root->left;
				continue;
			}
		}
	}
return 0;	
}


int search (bin_tree root, int key2)
{
	int i = 0;
	 
	for(;;)
	{	
		if (key2==root->key)
		{
			printf ("%d ", i);
			printf ("%d", root->value);
			break;
		}
		
		if (key2>root->key)
		{
			if (root->right==NULL)
			{
				printf ("-1");
				break;
			}
			else
			{
				root=root->right;
				i++;
				continue;
			}
		}
		
		if (key2<root->key)
		{
			if (root->left==NULL)
			{
				printf ("-1");
				break;
			}
			else
			{
				root=root->left;
				i++;
				continue;
			}
		}	
	}		
	printf ("\n");
	return 0;
}




int  simmetric(bin_tree root)
{

	while(root!=NULL) 
 	{
		simmetric  (root -> left);
    		if (root -> value)
        	printf("%d ", root -> value);
    		simmetric(root -> right);	
				
	}

    
	return 0;
}





int main()
{
        int i, kolvoel,key,value;

        bin_tree root=init();

        scanf("%d",&kolvoel);

        for ( i=0;i<kolvoel;i++)
        {
                scanf ("%d", &key);
                scanf ("%d", &value);
                add_elem(root, key, value);
        }



        simmetric(root);

        return 0;
}





















 

