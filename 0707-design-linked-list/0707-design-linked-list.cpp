class MyLinkedList {
public: 
    struct Node{
        int val ; 
        Node* next ;

        Node(int val1){
            val = val1 ;
            next = nullptr ; 
        }
    };
    Node* head ;
    MyLinkedList() {
        head = nullptr ;
    }
    
    int get(int index) {
        Node* temp = head ;
        int ctr = 0 ;

        while(temp != nullptr){
            if(ctr == index){
                return temp->val ;
            }
            ctr++ ;
            temp = temp->next ;
        }
        return -1 ;
    }
    
    void addAtHead(int val) {
        //code for insert ele et head of LL :- 
        Node* newHead = new Node(val) ;
        newHead->next = head ; 
        head = newHead ;

    }
    
    void addAtTail(int val) {
        //add at tail of LL :-
        Node* newNode = new Node(val) ;

        if(head == NULL){
            head = newNode ;
            return ;
        } 

        Node* temp = head ;
        while(temp->next != nullptr){
            temp = temp->next ; 
        } 
        temp->next = newNode ;
    }
    
    void addAtIndex(int index, int val){
        if(index == 0){
            addAtHead(val);
        
        }   

        Node* temp = head ;
        int ctr = 0 ;

        while(temp != nullptr){
            if(ctr == index-1){
                Node* insert = new Node(val) ;
                insert->next = temp->next ;
                temp->next = insert ; 

                return ;
            }
            ctr++ ;
            temp = temp->next ; 
        }
           
    }
    
    void deleteAtIndex(int index) {
        //delete at particular index :- 
        if(index == 0){
            if(head == nullptr){
                return ;
            }
            Node* temp = head ;
            head = head->next ; 

            delete temp ;
            return ;
        }
        Node* temp = head ;
        int ctr = 0 ;

        while(temp != nullptr && temp->next != nullptr ){
            if(ctr == index-1){
                Node* deleteNode = temp->next ;
                temp->next  = temp->next->next ; 

                delete deleteNode ;
                return ;
            }
            ctr++ ;
            temp = temp->next ;
        }
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */