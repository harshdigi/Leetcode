class Node{
    public:
    int val;
    Node* next;
    Node(int v){
        this->val=v;
        this->next=NULL;
    }
};
class MyLinkedList {
    Node* head;
    int size;
public:
    MyLinkedList() {
        this->head=NULL;
        size=0;
    }
    
    int get(int index) {
        if(index>=size)
            return -1;
        Node* temp=head;
        if(index==0)
            return temp->val;
        
        for(int i=0;i<index;i++){
            temp=temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
        size++;
    }
    
    void addAtTail(int val) {
        if(head==NULL){
            addAtHead(val);
            return;
        }
        Node* temp=head;
        Node* newNode=new Node(val);
        while(temp->next){
            temp=temp->next;
        }
        temp->next=newNode;
        size++;
    }
    
    void addAtIndex(int index, int val) {
        if(index>size)
            return;
        if(index==0){
            addAtHead(val);   
            return;
        }
        Node* cur=head,*prv=NULL;
         Node* newNode=new Node(val);
        for(int i=0;i<index;i++){
            prv=cur;
            cur=cur->next;
        }
        if(prv)
            prv->next=newNode;
        newNode->next=cur;
            size++;
        
    }
    
    void deleteAtIndex(int index) {
        if(index>=size)
            return;
        if(index==0){
            Node *t=head;
            head=head->next;
            delete t;
            size--;
            return;

        }
        Node* cur=head,*prv=NULL;
        for(int i=0;i<index;i++){
            prv=cur;
            cur=cur->next;
        }
        if(prv&&cur){
            Node* t=cur;
            prv->next=cur->next;
            delete t;
            size--;
        }
        
    }
};