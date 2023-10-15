#include "BookShop.h"

BookShop::BookShop()
{
    this->bookCollection = static_cast<Book *>(malloc(10 * sizeof(Book)));
    this->noOfBooksAdded = 0;
}

BookShop::~BookShop()
{
    delete this->bookCollection;
}

// for books
void BookShop::addBook(string title, string authorName)
{
    new (&this->bookCollection[this->noOfBooksAdded]) Book(title, authorName);
    this->noOfBooksAdded++;
}

// for audio books
void BookShop::addBook(string title, string authorName, string voiceActor)
{
    new (&this->bookCollection[this->noOfBooksAdded]) AudioBook(title, authorName, voiceActor);
    this->noOfBooksAdded++;
}
