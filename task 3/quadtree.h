struct qnode {
  int level;
  int flag;
  double xy[2];
  struct qnode *child[4];
};

typedef struct qnode Node;

Node *makeNode( double x, double y, int level );
void makeChildren( Node *parent );
void writeTree( Node *head );
void writeNode( FILE *fp, Node *node );
void printOut( FILE *fp, Node *node );
void grow_tree(Node *head);
double nodeValue( Node *node, double time );
double value( double x, double y, double time );
void removeChildren(Node *parent);
void print_numbers(Node *head);
void removeChildren(Node *parent);
