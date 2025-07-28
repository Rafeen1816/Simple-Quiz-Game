// questions.h
#ifndef QUESTIONS_H
#define QUESTIONS_H

#include <string>
using namespace std;

const int TOTAL_QUESTIONS = 5;

string questions[TOTAL_QUESTIONS] = {
    "What is the capital of France?",
    "Which data type is used to create a variable that should store text?",
    "Which planet is known as the Red Planet?",
    "Who wrote 'Hamlet'?",
    "Which language is primarily used for Android development?"
};

string options[TOTAL_QUESTIONS][4] = {
    {"Berlin", "Madrid", "Paris", "Rome"},
    {"int", "string", "char", "float"},
    {"Earth", "Venus", "Mars", "Jupiter"},
    {"Charles Dickens", "William Shakespeare", "Leo Tolstoy", "Mark Twain"},
    {"Java", "Python", "Swift", "Ruby"}
};

int correctAnswers[TOTAL_QUESTIONS] = {
    2, // Paris
    1, // string
    2, // Mars
    1, // William Shakespeare
    0  // Java
};

#endif