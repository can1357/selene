#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/security_context_t.start.hpp"
namespace image
{
    // [struct _IMAGE_SECURITY_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct security_context_t                
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 void*    page_hashes;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageHashes
        _m01 uint64_t value;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
        _m02 uint2_t  security_being_created;  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SecurityBeingCreated
        _m03 uint1_t  security_mandatory;      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SecurityMandatory
        _m04 uint61_t page_hash_pointer;       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PageHashPointer
                                             
        SDK_MAGIC_PROPERTIES( "_IMAGE_SECURITY_CONTEXT.$", 0x8, true, 0xb9fdde81e4a52596 );                       
        SDK_FIXED_SIZE( security_context_t, 0x8 );                       
    };                                       
};
#include "magic/security_context_t.end.hpp"
SDK_VERIFY( struct image::security_context_t, 0x8 );
