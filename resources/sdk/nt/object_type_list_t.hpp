#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_type_list_t.start.hpp"
namespace nt
{
    struct guid_t;

    // [struct _OBJECT_TYPE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_type_list_t               
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                  
        _m00 uint16_t           level;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Level
        _m01 uint16_t           sbz;          //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Sbz
        _m02 struct nt::guid_t* object_type;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectType
                                            
        SDK_NONVOL_PROPERTIES( "_OBJECT_TYPE_LIST.$", 0x10, true, 0xc763aca99337236a );            
        SDK_FIXED_SIZE( object_type_list_t, 0x10 );            
    };                                      
};
#include "magic/object_type_list_t.end.hpp"
SDK_VERIFY( struct nt::object_type_list_t, 0x10 );
