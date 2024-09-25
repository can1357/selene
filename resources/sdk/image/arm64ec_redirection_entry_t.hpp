#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64ec_redirection_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARM64EC_REDIRECTION_ENTRY]
    // => Windows 11
    //
    struct arm64ec_redirection_entry_t
    {                                 
        // Windows 11             
        //                        
        _m00 uint32_t source;           //{ +0x0000    } | .Source
        _m01 uint32_t destination;      //{ +0x0004    } | .Destination
                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARM64EC_REDIRECTION_ENTRY.$", 0x0, false, 0x82dd6a2c7d3ee248 );            
        SDK_FIXED_SIZE( arm64ec_redirection_entry_t, 0x8 );            
    };                                
};
#include "magic/arm64ec_redirection_entry_t.end.hpp"
SDK_VERIFY( struct image::arm64ec_redirection_entry_t, 0x8 );
