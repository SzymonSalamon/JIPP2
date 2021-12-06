//
// Created by Szymon on 29.11.2021.
//
#ifndef INC_2_FIGURY_H
#define INC_2_FIGURY_H
#include <iostream>
#include<string>
using namespace std;
class TextNote{
private:
    string Content;
public:
    string getContent();
    void setContent(string Content);
    TextNote(string Content);
    TextNote();
};
class ListNote{
private:
    string Content[100];
public:
    string getContent();
    void setContent(string Content);
    ListNote(string Content);
    ListNote();

    void setContent(string &Content);
};
class Note: public TextNote{
private:
    string title;
public:
    string getTitle();
    string getContent();
    void setTitle(string title);
    void setContent(string content);
    Note(string title,string content);
    Note();
};
class Notes: public ListNote{
private:
    string title;
public:
    string getTitle();
    string getContent();
    void setTitle(string title);
    void setContent(string content);

};

#endif //INC_2_FIGURY_H
