#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sid_and_attributes_hash_t.start.hpp"
namespace nt
{
    struct sid_and_attributes_t;

    // [struct _SID_AND_ATTRIBUTES_HASH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct sid_and_attributes_hash_t                    
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                              
        _m00 uint32_t                         sid_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SidCount
        _m01 struct nt::sid_and_attributes_t* sid_attr;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SidAttr
        _m02 sdk::array<uint64_t, 32>         hash;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Hash
                                                        
        SDK_NONVOL_PROPERTIES( "_SID_AND_ATTRIBUTES_HASH.$", 0x110, true, 0x600c96dfc62b0903 );          
        SDK_FIXED_SIZE( sid_and_attributes_hash_t, 0x110 );          
    };                                                  
};
#include "magic/sid_and_attributes_hash_t.end.hpp"
SDK_VERIFY( struct nt::sid_and_attributes_hash_t, 0x110 );
