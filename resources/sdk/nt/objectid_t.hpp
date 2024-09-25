#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/objectid_t.start.hpp"
namespace nt
{
    // [struct _OBJECTID]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct objectid_t                     
    {                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                
        _m00 struct nt::guid_t lineage;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Lineage
        _m01 uint32_t          uniquifier;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Uniquifier
                                          
        SDK_NONVOL_PROPERTIES( "_OBJECTID.$", 0x14, true, 0xc3b2df3b363c32f );           
        SDK_FIXED_SIZE( objectid_t, 0x14 );           
    };                                    
};
#include "magic/objectid_t.end.hpp"
SDK_VERIFY( struct nt::objectid_t, 0x14 );
