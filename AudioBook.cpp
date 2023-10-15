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
    cout << "Desc: Book title : " << this->title << "\nWritten By : " << this->authorName << "\nVoiced by : " << this->voiceActor<< endl;
    cout << "--------------------------------------------------" << endl;
}