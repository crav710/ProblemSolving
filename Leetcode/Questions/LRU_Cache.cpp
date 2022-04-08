#include <iostream>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
class LRUCache {
public:
    // Doubly linkedList 
    class Node{
        public:
        int key;
        int value;
        Node* prev;
        Node* next;
        
        Node(int key,int value){
            this->key   = key;
            this->value = value;
        }
        
    }
        // define head and tail 
    Node* head = new Node(-1,-1);
    Node* tail = new Node(-1,-1);
    int size;
    // define the hashMap
    // can't pass an uninstantiated class to stl container 
    unordered_map<int,Node*>  mp;

    LRUCache(int capacity) {
        size = capacity;
        head -> next = tail;
        tail -> prev = head; 
    }
    // function to insert in dll 
    void insert(Node* temp){
        Node*  nNext = head->next;
        head->next   = temp;
        temp->prev   = head;
        temp->next   = nNext;
        nNext->prev  = temp;
    }
    void deleteOp(Node* temp){
        Node* prevNode   = temp->prev;
        //Node* nNextNode  = temp->next;
        prevNode->next   = temp->next;
        temp->next->prev = prevNode;                
    }
    int get(int key) {
        // check if it is present or nt 
        
        if(mp.find(key)!=mp.end()){
           Node* temp = mp[key];
           mp.erase(key);
            int ans = temp->value;
           deleteOp(temp);
            
           insert(temp);
           mp[key] = head ->next; 
           return ans;
        }
        else{
            return -1;
        }
        
    }
    
    void put(int key, int value) {
        // put values in front or delete if empty 
        // check if it there in map or not 
        if(mp.find(key)!=mp.end()){
            // move the node to start 
            Node* temp = mp[key];
            mp.erase(key);
            deleteOp(temp);
        }
        else if (mp.size()==size){
            mp.erase(tail->prev->key);
            deleteOp(tail->prev);
            
        }
        insert(new Node(key,value));
        mp[key]=head->next;
    }
};

int main(int argc, char const *argv[])
{
    int capacity =2 ;
    LRUCache* obj = new LRUCache(capacity);
    int param_1 = obj->get(1);
    obj->put(1,1);

    return 0;
}
/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */