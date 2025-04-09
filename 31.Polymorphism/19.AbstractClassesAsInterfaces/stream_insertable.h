#ifndef STREAM_INSERTABLE_H
#define STREAM_INSERTABLE_H
#include <iostream>
using namespace std;

class StreamInsertable
{
    friend ostream &operator<<(ostream &out, const StreamInsertable &operand);

public:
    virtual void stream_insert(ostream &out) const = 0;
};

#endif // STREAM_INSERTABLE_H