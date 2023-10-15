#include "libraries.h"
#include "BookShop.h"

int main()
{

    BookShop *myBookShop = new BookShop();
    while (true)
    {
        string answer;
        cout << "\n\n##############################################################\n~ welcome to bookshop management system ~\nTo add book, press 'a' : \nTo view all books, press 'v' : " << endl;
        getline(cin, answer);
        if (answer == "a" || answer == "A")
        {   
            string bookType;
            cout << "\nPlease Enter the Book type >>> \nType character 'b' to add a Regular Book\nType character 'a' too add an AudioBook :"<< endl;
            getline(cin, bookType);
            if (bookType == "b" || bookType == "B")
            {   
                string bookTitle, bookAuthor;
                cout << "\nEnter book title : ";
                getline(cin, bookTitle);
                cout << "Enter author name : ";
                getline(cin, bookAuthor);

                myBookShop->addBook(bookTitle,bookAuthor);

                cout << "\nSuccessful!\n" << endl;
            }
            else if (bookType == "a" || bookType == "A")
            {
                string bookTitle, bookAuthor, voiceActor;
                cout << "\nEnter book title : ";
                getline(cin, bookTitle);
                cout << "Enter author name : ";
                getline(cin, bookAuthor);
                cout << "Enter voice actor name : ";
                getline(cin, voiceActor);

                myBookShop->addBook(bookTitle,bookAuthor,voiceActor);

                cout << "\nSuccessfully Added!\n" << endl;
            }
            else
            {   
                cout << "Invalid response! Back to main menu...\n\n" << endl;
                continue;
            }
        }
        else if (answer == "v" || answer == "V")
        {   
            cout << "\n\n####################### - ALL BOOKS - #########################" << endl;
            int bookCount = myBookShop->noOfBooksAdded;
            for (int i = 0; i < bookCount; i++)
            {
                myBookShop->bookCollection[i].printDescription();
            }
            cout << "#########################################################\n\n" << endl;
        }
        else
        {
            // if answer == anything else
            cout << "Thank you.  See you soon!\n\n" << endl;
            break;
        }
    }

    delete myBookShop;
    return 0;
}