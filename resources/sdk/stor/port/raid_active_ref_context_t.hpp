#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_active_ref_context_t.start.hpp"
namespace stor::port
{
    // [struct _RAID_ACTIVE_REF_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_active_ref_context_t   
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                             
        _m00 uint1_t unit_reference;     //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .UnitReference
        _m01 uint1_t adapter_reference;  //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .AdapterReference
                                       
        SDK_MAGIC_PROPERTIES( "_RAID_ACTIVE_REF_CONTEXT.$", 0x1, true, 0x9c5bd6f8c2f780f4 );                  
        SDK_FIXED_SIZE( raid_active_ref_context_t, 0x1 );                  
    };                                 
};
#include "magic/raid_active_ref_context_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_active_ref_context_t, 0x1 );
