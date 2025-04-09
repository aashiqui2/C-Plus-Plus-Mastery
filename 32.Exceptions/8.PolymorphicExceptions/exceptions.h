#ifndef OUR_EXCEPTIONS_H
#define OUR_EXCEPTIONS_H

#include <string>
using namespace std;
class SomethingIsWrong
{
public:
    SomethingIsWrong(const string &s) : m_message(s) {}
    virtual ~SomethingIsWrong() {}
    virtual string what() const { return m_message; }

protected:
    string m_message;
};

class Warning : public SomethingIsWrong
{
public:
    Warning(const string &s) : SomethingIsWrong(s) {}
    virtual string what() const override { return m_message + " Yellow"; }
};

class SmallError : public Warning
{
public:
    SmallError(const string &s) : Warning(s) {}
    virtual string what() const override { return m_message + " Orange"; }
};

class CriticalError : public SmallError
{
public:
    CriticalError(const string &s) : SmallError(s) {}
    virtual string what() const override { return m_message + " Red"; }
};

#endif // OUR_EXCEPTIONS_H
