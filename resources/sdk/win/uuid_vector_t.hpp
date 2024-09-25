#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/uuid_vector_t.start.hpp"
namespace win
{
    // [struct _UUID_VECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct uuid_vector_t                             
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                           
        _m00 uint32_t                          count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<struct nt::guid_t*, 1> uuid;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Uuid
                                                     
        SDK_MAGIC_PROPERTIES( "_UUID_VECTOR.$", 0x10, true, 0xa4b95bbe1ed4bc44 );      
        SDK_FIXED_SIZE( uuid_vector_t, 0x10 );       
    };                                               
};
#include "magic/uuid_vector_t.end.hpp"
SDK_VERIFY( struct win::uuid_vector_t, 0x10 );
