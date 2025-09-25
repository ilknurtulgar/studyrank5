#ifndef SET_HPP
#define SET_HPP

#include "searchable_bag.hpp"

class set {
    private:
    searchable_bag &bag;

    public:
    set() = delete;
    set(searchable_bag &bag);
    set(const set& other) = delete;
    set &operator=(const set& other) = delete;
    ~set();
    
    void insert(int);
    void insert(int *,int);
    void print()const;
    void clear();
    bool has(int)const;

    const searchable_bag &get_bag()const;

};

#endif