#include "Book.h"

Book::Book(string title, string authorName)
{
    this->title = title;
    this->authorName = authorName;
}

string Book::getTitle()
{
    return this->title;
}

void Book::setTitle(string title)
{
    this->title = title;
}

string Book::getAuthorName()
{
    return this->authorName;
}

void Book::setAuthorName(string authorName)
{
    this->authorName = authorName;
}

void Book::printDescription()
{
    cout << "Desc: Book title : " << this->title << "\nWritten By : " << this->authorName << endl;
    cout << "--------------------------------------------------" << endl;
}