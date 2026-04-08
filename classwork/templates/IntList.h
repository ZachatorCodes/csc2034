template <typename T> class IntList
{
    struct Node
    {
        T data;
        Node* next;
        Node* prev;
        Node(T d);
        ~Node();
    };
    Node* head;
    Node* tail;
    int len;

  public:
    IntList();
    ~IntList();
    IntList(const IntList& other); // Copy Constructor
    // IntList(const IntList &other) = delete; DISABLE COPY CONSTRUCTOR
    IntList& operator=(const IntList& other); // Assignment Operator
    // IntList &operator=(const IntList &other) = delete; DISABLE ASSIGNMENT OPERATOR
    void insert(int T);
    void print() const;
    int size() const;
    void clear();
};