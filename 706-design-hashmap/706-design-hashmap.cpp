struct Node{
public:
    int key;
    int val;
    Node* next;
    Node(int k, int v, Node* n){
        key = k;
        val = v;
        next = n;
    }
};

class MyHashMap {
public: 
    const static int size = 19997;
    const static int mult = 12582917;
    Node* data[size]; 
    
    int hash(int key){
        return (int)((long)key * mult % size);
    }
    
    void put(int key, int val) {
        remove(key);
        int index = hash(key);
        Node* node = new Node(key, val, data[index]);
        data[index] = node;
    }
    
    int get(int key) {
        int index = hash(key);
        Node* node = data[index];
        for(; node != NULL; node = node->next){
            if(node->key == key) return node->val;
        }
        return -1;
        
    }
    
    void remove(int key) {
        int index = hash(key);
        Node* node = data[index];
        if(node == NULL) return;
        if(node->key == key) data[index] = node->next;
        else{
            for(; node->next != NULL; node = node->next){
                if(node->next->key == key){
                    node->next = node->next->next;
                    return;
                }
            }
        }
    }
};