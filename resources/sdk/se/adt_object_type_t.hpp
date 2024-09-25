#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/adt_object_type_t.start.hpp"
namespace se
{
    // [struct _SE_ADT_OBJECT_TYPE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adt_object_type_t               
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::guid_t object_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
        _m01 uint16_t          flags;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Flags
        _m02 uint16_t          level;        //{ +0x0012    +0x0012    +0x0012    +0x0012    +0x0012    } | .Level
        _m03 uint32_t          access_mask;  //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .AccessMask
                                           
        SDK_NONVOL_PROPERTIES( "_SE_ADT_OBJECT_TYPE.$", 0x18, true, 0x12f4a4ca258501ef );            
        SDK_FIXED_SIZE( adt_object_type_t, 0x18 );            
    };                                     
};
#include "magic/adt_object_type_t.end.hpp"
SDK_VERIFY( struct se::adt_object_type_t, 0x18 );
