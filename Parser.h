#ifndef PARSER_H_
#define PARSER_H_

#include "DatalogProgram.h"
#include "Lex.h"
#include <iostream>

class Parser
{
  public:

    Parser();

    Parser(vector<Token*>* inputTokens, int* inputCount);

    ~Parser();

    DatalogProgram* parseDatalogProgram();

    Token* getFailToken();

    bool hazFailed();

  private:

    TokenType getTokenType();

    SchemesList* parseSchemesList(int* newCount);

    Scheme* parseScheme(int* newCount);

    IdentifierList* parseIdentifierList(int* newCount);

    FactsList* parseFactsList(int* newCount, Domain* dman);

    Fact* parseFact(int* newCount, Domain* dman);

    ConstantList* parseConstantList(int* newCount, Domain* dman);

    //etc
    
//+++++++++++++++++++Data Members+++++++++++++++++++
    bool failure;
    
    Token* fail;

    vector<Token*>* tokens;

    int* count;

};

#endif
