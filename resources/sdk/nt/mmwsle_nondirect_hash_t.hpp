#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmwsle_nondirect_hash_t.start.hpp"
namespace nt
{
    // [struct _MMWSLE_NONDIRECT_HASH]
    // => Windows 10 v1607
    //
    struct mmwsle_nondirect_hash_t
    {                             
        // Windows 10 v1607      
        //                  
        _m00 void*    key;          //{ +0x0000    } | .Key
        _m01 uint64_t index;        //{ +0x0008    } | .Index
                                  
        SDK_MAGIC_PROPERTIES( "_MMWSLE_NONDIRECT_HASH.$", 0x0, false, 0x946369cd1830f7a8 );      
        SDK_FIXED_SIZE( mmwsle_nondirect_hash_t, 0x10 );      
    };                            
};
#include "magic/mmwsle_nondirect_hash_t.end.hpp"
SDK_VERIFY( struct nt::mmwsle_nondirect_hash_t, 0x10 );
