//
// Created by Szymon on 29.11.2021.
//

#include <note.h>
using namespace std;
TextNote::TextNote(string Content) {};
Note::Note(string title, string Content) {};
ListNote::ListNote(string Content) {};
string TextNote::getContent() {
    return Content;
}

void TextNote::setContent(string Content) {
    this->Content = Content;
}

string ListNote::getContent() {
    string zawartosc;
    zawartosc = "Lista\n:";
    for(int i=1;i<100;i++) {
        zawartosc += "*";
    zawartosc +=  this->Content[i];
    zawartosc += '/n';
}
}

void ListNote::setContent(string Content) {
}

string Note::getTitle() {
    return title;
}

void Note::setTitle(string title) {
    this->title = title;
}
