#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/luid_t.hpp"

#include "magic/fast_copy_luid_access_t.start.hpp"
namespace tag
{
    // [union tagFastCopyLUIDAccess]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union fast_copy_luid_access_t          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::luid_t luid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Luid
        _m01 int64_t           fast_access;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FastAccess
                                           
        SDK_MAGIC_PROPERTIES( "tagFastCopyLUIDAccess.$", 0x8, true, 0x11bc37586d97caa8 );            
        SDK_FIXED_SIZE( fast_copy_luid_access_t, 0x8 );            
    };                                     
};
#include "magic/fast_copy_luid_access_t.end.hpp"
SDK_VERIFY( union tag::fast_copy_luid_access_t, 0x8 );
