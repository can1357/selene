#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offsetinstancedataandlength_t.start.hpp"
namespace win
{
    // [struct OFFSETINSTANCEDATAANDLENGTH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offsetinstancedataandlength_t   
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint32_t offset_instance_data;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetInstanceData
        _m01 uint32_t length_instance_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .LengthInstanceData
                                           
        SDK_MAGIC_PROPERTIES( "OFFSETINSTANCEDATAANDLENGTH.$", 0x8, true, 0xec06ce2b619a92bf );                     
        SDK_FIXED_SIZE( offsetinstancedataandlength_t, 0x8 );                     
    };                                     
};
#include "magic/offsetinstancedataandlength_t.end.hpp"
SDK_VERIFY( struct win::offsetinstancedataandlength_t, 0x8 );
