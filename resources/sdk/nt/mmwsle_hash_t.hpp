#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmwsle_hash_t.start.hpp"
namespace nt
{
    // [struct _MMWSLE_HASH]
    // => Windows 10 v1607
    //
    struct mmwsle_hash_t    
    {                       
        // Windows 10 v1607      
        //                  
        _m00 uint64_t index;  //{ +0x0000    } | .Index
                            
        SDK_MAGIC_PROPERTIES( "_MMWSLE_HASH.$", 0x0, false, 0xfa65c0bc01803c6c );      
        SDK_FIXED_SIZE( mmwsle_hash_t, 0x8 );      
    };                      
};
#include "magic/mmwsle_hash_t.end.hpp"
SDK_VERIFY( struct nt::mmwsle_hash_t, 0x8 );
