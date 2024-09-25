#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/gdi_object_t.start.hpp"
namespace win
{
    // [struct _GDI_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gdi_object_t           
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t object_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ObjectType
                                  
        SDK_MAGIC_PROPERTIES( "_GDI_OBJECT.$", 0x10, true, 0x85ebedfdcc5900c9 );            
        SDK_FIXED_SIZE( gdi_object_t, 0x10 );            
    };                            
};
#include "magic/gdi_object_t.end.hpp"
SDK_VERIFY( struct win::gdi_object_t, 0x10 );
