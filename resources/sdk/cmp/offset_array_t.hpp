#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offset_array_t.start.hpp"
namespace cmp
{
    // [struct CMP_OFFSET_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offset_array_t         
    {                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t file_offset;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileOffset
        _m01 void*    data_buffer;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataBuffer
        _m02 uint32_t data_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataLength
                                  
        SDK_MAGIC_PROPERTIES( "CMP_OFFSET_ARRAY.$", 0x18, true, 0x1c64e16fd4948e24 );            
        SDK_FIXED_SIZE( offset_array_t, 0x18 );            
    };                            
};
#include "magic/offset_array_t.end.hpp"
SDK_VERIFY( struct cmp::offset_array_t, 0x18 );
