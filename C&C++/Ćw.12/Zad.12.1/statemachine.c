#include <stdlib.h>
#include "statemachine.h"
#include "reader.c"
#include "state.c"

typedef enum State
{
    ECHO,
    WRITE
} programEvent;

void exec()
{
    programEvent state = ECHO;
    char character;

    while(1)
    {
        printf("Napisz jakakolwiek litere: \n");
        character = readChar();

        if (character == 'q')
            return;

        switch(state)
        {
            case ECHO:

                if (character == 'w')
                {
                    state = WRITE;
                }
                echo(character);

                break;

            case WRITE:

                if (character == 'e')
                {
                    state = ECHO;
                }
                write(character);

                break;
        }
    }
}
