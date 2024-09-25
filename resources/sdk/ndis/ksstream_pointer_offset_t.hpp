#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksstream_pointer_offset_t.start.hpp"
namespace ndis
{
    struct ksmapping_t;

    // [struct _KSSTREAM_POINTER_OFFSET]
    // => Windows 10 v1607
    //
    struct ksstream_pointer_offset_t             
    {                                            
        // Windows 10 v1607                      
        //                                       
        _m00 uint8_t*                  data;       //{ +0x0000    } | .Data
        _m01 struct ndis::ksmapping_t* mappings;   //{ +0x0000    } | .Mappings
        _m02 uint32_t                  count;      //{ +0x0008    } | .Count
        _m03 uint32_t                  remaining;  //{ +0x000c    } | .Remaining
                                                 
        SDK_MAGIC_PROPERTIES( "_KSSTREAM_POINTER_OFFSET.$", 0x0, false, 0x3b48121d412e7234 );          
        SDK_FIXED_SIZE( ksstream_pointer_offset_t, 0x10 );          
    };                                           
};
#include "magic/ksstream_pointer_offset_t.end.hpp"
SDK_VERIFY( struct ndis::ksstream_pointer_offset_t, 0x10 );
