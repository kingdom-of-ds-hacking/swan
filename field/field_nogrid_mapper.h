#ifndef __FIELD_NOGRID_MAPPER_H
#define __FIELD_NOGRID_MAPPER_H

#include "swantypes.h"

STRUCT_DECLARE(FieldNoGridMapper)

#include "field/field_scenearea.h"
#include "field/field_scenearea_loader.h"
#include "field/field_rail_loader.h"
#include "field/field_rail_system.h"
#include "field/field_rail_tile.h"

struct FieldNoGridMapper
{
    FieldRailSystem* m_RailSystem;
    RailLoader* m_RailLoader;
    FieldRailTilemap* m_Tilemap;
    FieldSceneArea* m_SceneArea;
    FieldSceneAreaLoader* m_SceneAreaLoader;
    b32 CameraAreaDisabled;
};

#endif //__FIELD_NOGRID_MAPPER_H
//2022-11-02 23:13 / Tchaikovsky code generator
