class IntList
{
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int d);
    };
    Node *head;
    Node *tail;
    int len;

public:
    IntList();
    void insert(int num);
    void print() const;
    int size() const;
};