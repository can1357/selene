#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_groupmask_t.start.hpp"
namespace nt
{
    // [struct _PERFINFO_GROUPMASK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_groupmask_t            
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                 
        _m00 sdk::array<uint32_t, 8> masks;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Masks
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_GROUPMASK.$", 0x20, true, 0x4db9dfe8f0b1ae6c );      
        SDK_FIXED_SIZE( perfinfo_groupmask_t, 0x20 );      
    };                                     
};
#include "magic/perfinfo_groupmask_t.end.hpp"
SDK_VERIFY( struct nt::perfinfo_groupmask_t, 0x20 );
