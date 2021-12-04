/*
 * @程序名: 
 * @功能: 
 * @作者: 软件21-16 杨旭祥 20212501236
 * @Date: 2021-12-02 20:41:38
 * @LastEditTime: 2021-12-02 20:56:41
 * @版本: 1.0
 * @实验思路: 
 */
template <class T>
class LinkedList
{
public:
    LinkedList();
    LinkedList(const LinkedList<T> &L);
    ~LinkedList();
    LinkedList<T>& operator = (const LinkedList<T> &L);
    int getSize() const;
    bool isEmpty() const;
    void reset(int pos = 0);
    void next();
    bool endOfList() const;
    int currentPosition() const;

    void insertFront (const T &item);
    void insertRear(const T &item);
    void insertAt(const T &item);
    void insertAfter(const T &item);

    T deleteFront();
    void deleteCurrent();
    T& data();
    const T& data() const;
    void clear();
private:
    Node<T> *front, *rear;
    Node<T> *prevPtr, *currPtr;
    int size;
    int position;

    Node<T> *newNode(const T &item, Node<T> *PtrNext = null);
    void freeNode(Node<T> *p);
    void copy(const LinkedList<T> &L);
};
