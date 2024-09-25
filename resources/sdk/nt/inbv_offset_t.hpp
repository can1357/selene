#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/inbv_offset_t.start.hpp"
namespace nt
{
    // [struct _INBV_OFFSET]
    // => Windows 11
    //
    struct inbv_offset_t
    {                   
        // Windows 11   
        //              
        _m00 uint32_t x;  //{ +0x0000    } | .X
        _m01 uint32_t y;  //{ +0x0004    } | .Y
                        
        SDK_MAGIC_PROPERTIES( "_INBV_OFFSET.$", 0x0, false, 0x2a7d6d89faf53ca4 );  
        SDK_FIXED_SIZE( inbv_offset_t, 0x8 );  
    };                  
};
#include "magic/inbv_offset_t.end.hpp"
SDK_VERIFY( struct nt::inbv_offset_t, 0x8 );
