#ifndef TOKENTYPE_H
#define TOKENTYPE_H
enum TokenType
{
    /* Single Character Tokens*/
    LEFT_PA, RIGHT_PA, LEFT_BRACE, RIGHT_BRACE,
    COMMA, DOT, MINU, PLUS, SEMICOLON, SLASH, STAR,

    /* one or more character tokens*/
    NOT, NOT_EQUAL, EQUAL, EQUAL_EQUAL, LESS,
    LESS_EQUAL, GREATER, GREATER_EQUAL,

    /*Literals Tokens*/
    IDENTIFIER, STRING, NUMBERS,

    /*Keywords*/
    AND, CLASS, DISPLAY, ELSE, FALSE, FUN, FOR,
    IF, NIL, OR, RETURN, SUPER, THIS, TRUE,
    VAR, WHILE,

    EOFS

    /*more token will be added later on*/
};
#endif