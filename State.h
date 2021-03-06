#ifndef STATE_H
#define STATE_H

#include <string>

/**
 * The states of the finite state machine defined in an enumerated type.
 */
enum State {Comma, Period, Multiply, Add, Q_Mark, Whitespace, LeftParen, RightParen, 
SawColon, Colon_Dash, BeginningOfComment, MultilineComment, Comment, PossibleEndOfComment, 
Identifier, Schemes, Facts, Rules, Queries, SawAQuote, ProcessingString,
            PossibleEndOfString, Start, End, Undefined
           };

    /**
     * Converts a state to a string.
     * 
     * Parameters: state -- the state to be converted to a string.
     * PreCondition: none
     * Postcondition: result = the string representation of the state which
     *                         looks exactly like its State name.
     */
    std::string StateToString(State state);
#endif
