#ifndef __SAVEDATA_BOX_ACCESSOR_H
#define __SAVEDATA_BOX_ACCESSOR_H

#include "swantypes.h"

STRUCT_DECLARE(BoxSaveAccessor)

#include "save/save_control.h"

struct BoxSaveAccessor
{
    SaveControl* m_SaveControl;
};

#endif //__SAVEDATA_BOX_ACCESSOR_H
//2022-11-02 23:13 / Tchaikovsky code generator
