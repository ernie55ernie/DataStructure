typedef struct dnode{
	struct dnode* llink;
	int data;
	struct dnode* rlink;
}dlist_node;

typedef dlist_node* dlist_pointer;