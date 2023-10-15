#pragma once
#include "libraries.h"

class Book
{
private:
    string title;
    string authorName;

public:
    Book(string title, string authorName);

    string getTitle();
    void setTitle(string title);
    string getAuthorName();
    void setAuthorName(string authorName);

    void printDescription();
};