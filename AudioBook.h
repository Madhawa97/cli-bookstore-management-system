#pragma once
#include "libraries.h"
#include "Book.h"

class AudioBook : public Book
{
private:
    string voiceActor;

public:
    string getVoiceActor();
    void setVoiceActor(string voiceActor);
    AudioBook(string title, string authorName, string voiceActor);
};