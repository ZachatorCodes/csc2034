class IntList
{
    struct Node
    {
        int data;
        Node *next;
        Node *prev;
        Node(int d);
        ~Node();
    };
    Node *head;
    Node *tail;
    int len;

public:
    IntList();
    ~IntList();
    IntList(const IntList &other); // Copy Constructor
    // IntList(const IntList &other) = delete; DISABLE COPY CONSTRUCTOR
    IntList &operator=(const IntList &other); // Assignment Operator
    // IntList &operator=(const IntList &other) = delete; DISABLE ASSIGNMENT OPERATOR
    void insert(int num);
    void print() const;
    int size() const;
    void clear();
};