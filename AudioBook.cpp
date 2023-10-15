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
