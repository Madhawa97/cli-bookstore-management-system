#include "AudioBook.h"

AudioBook::AudioBook(string title, string authorName, string voiceActor)
    : Book(title, authorName), voiceActor(voiceActor) {}

string AudioBook::getVoiceActor()
{
    return this->voiceActor;
}

void AudioBook::setVoiceActor(string voiceActor)
{
    this->voiceActor = voiceActor;
}

void AudioBook::printDescription()
{
    cout << "Desc: Book title : " << this->title << " , Written By : " << this->authorName << ", Voiced by : " << this->voiceActor<< endl;
}