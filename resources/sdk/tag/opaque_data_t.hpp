#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/opaque_data_t.start.hpp"
namespace tag
{
    // [struct tagOpaqueData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct opaque_data_t                   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::guid_t guid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guid
        _m01 uint32_t          data_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dataLength
        _m02 uint8_t*          data;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .data
                                           
        SDK_MAGIC_PROPERTIES( "tagOpaqueData.$", 0x28, true, 0xeff6754676047180 );            
        SDK_FIXED_SIZE( opaque_data_t, 0x28 );            
    };                                     
};
#include "magic/opaque_data_t.end.hpp"
SDK_VERIFY( struct tag::opaque_data_t, 0x28 );
