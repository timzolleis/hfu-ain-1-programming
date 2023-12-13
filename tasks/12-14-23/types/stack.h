//
// Created by TimZolleis on 13.12.2023.
//

#ifndef _STACK_H
#define _STACK_H

struct Stack {
    void init();

    int lastIndex;

    char elements[];

    void push(char element);

    char pop();

    char top();

    unsigned int size() const;

    bool empty() const;

    void clear();

};


#endif //_STACK_H
