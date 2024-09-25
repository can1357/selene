#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sid_and_attributes_t.start.hpp"
namespace nt
{
    // [struct _SID_AND_ATTRIBUTES]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sid_and_attributes_t  
    {                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 void*    sid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Sid
        _m01 uint32_t attributes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
                                 
        SDK_NONVOL_PROPERTIES( "_SID_AND_ATTRIBUTES.$", 0x10, true, 0x4f130c174725dd06 );           
        SDK_FIXED_SIZE( sid_and_attributes_t, 0x10 );           
    };                           
};
#include "magic/sid_and_attributes_t.end.hpp"
SDK_VERIFY( struct nt::sid_and_attributes_t, 0x10 );
