#include "action_get.h"

#include <stdio.h>

TINYREFL_CLASS_DEF(ActionGet)

int ActionGet::Handle()
{
    printf("ActionGet::Handle()\n");
    return 0;
}
