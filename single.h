#ifndef SINGLE_H
#define SINGLE_H

#include <iostream>

class Singleton 
{
public:
    Singleton (const Singleton&) = delete;
    Singleton& operator = (const Singleton&) = delete;
    Singleton (Singleton&&) = delete;
    Singleton&& operator = (Singleton&&) = delete;
public:
    static Singleton* getinstance ();
private:
    static Singleton* single; 
private:
    Singleton () = default;
};

#endif // SINGLE_H