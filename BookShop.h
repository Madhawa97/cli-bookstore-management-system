#pragma once
#include "libraries.h"
#include "Book.h"
#include "AudioBook.h"

class BookShop
{
public:
    Book *bookCollection;
    int noOfBooksAdded;

    BookShop();
    // BookShop(Book *bookcollection, int noOfBooksAdded);
    ~BookShop(); // delete

    // for books
    void addBook(string title, string authorName);

    // for audio books
    void addBook(string title, string authorName, string voiceActor);
};