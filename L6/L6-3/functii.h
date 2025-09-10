#pragma once
#include <iostream>
#include <string.h>
using namespace std;


class String{

    char *nume;

public:
    String operator+(const String &);
    String();
    String(const char *);
    ~String();
    String(const String &s);
    String &operator=(const String &);
    bool operator==(const String &);
    int cauta(const String &str);
    void afisare();
    int compara(const String &str);
};