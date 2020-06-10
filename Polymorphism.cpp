#include <deque>
class LRUCache : public Cache{
    private:
    std::deque<int> order;
    public:
    LRUCache(int& capacity){
        cp=capacity;
    }
    
    void set(int key, int value){

        Node *n = new Node(key, value);
        if(mp.count(key)==0){
            if((int)mp.size()==cp){
                mp.erase(order.back());
                order.pop_back();
                order.push_front(key);
                mp[key]=n;
            } else{
                order.push_front(key);
                mp[key]=n;
            }
        }
        else {
            order.push_front(key);
            mp[key]=n;
        }
    }

    int get(int key){
        if(mp.count(key)==0){
            return -1;
        } else{
            return mp[key]->value;
        }
    }
};


