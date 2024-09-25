#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ham_external_resource_mask_t.start.hpp"
namespace win
{
    // [struct _HAM_EXTERNAL_RESOURCE_MASK]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ham_external_resource_mask_t   
    {                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;  //{ +0x0000    +0x0000    +0x0000    } | .Data
                                          
        SDK_MAGIC_PROPERTIES( "_HAM_EXTERNAL_RESOURCE_MASK.$", 0x8, true, 0x70294c9e5d5a6bf2 );     
        SDK_FIXED_SIZE( ham_external_resource_mask_t, 0x8 );     
    };                                    
};
#include "magic/ham_external_resource_mask_t.end.hpp"
SDK_VERIFY( struct win::ham_external_resource_mask_t, 0x8 );
