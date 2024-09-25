#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/custom_opaque_data_t.start.hpp"
namespace tag
{
    // [struct tagCustomOpaqueData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct custom_opaque_data_t            
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                 
        _m00 struct nt::guid_t guid;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .guid
        _m01 uint32_t          data_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dataLength
        _m02 uint8_t*          data;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .data
                                           
        SDK_MAGIC_PROPERTIES( "tagCustomOpaqueData.$", 0x28, true, 0x99d8a90aaa8a8db3 );            
        SDK_FIXED_SIZE( custom_opaque_data_t, 0x28 );            
    };                                     
};
#include "magic/custom_opaque_data_t.end.hpp"
SDK_VERIFY( struct tag::custom_opaque_data_t, 0x28 );
