#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksmapping_t.start.hpp"
namespace ndis
{
    // [struct _KSMAPPING]
    // => Windows 10 v1607
    //
    struct ksmapping_t                 
    {                                  
        // Windows 10 v1607                 
        //                             
        _m00 int64_t  physical_address;  //{ +0x0000    } | .PhysicalAddress
        _m01 uint32_t byte_count;        //{ +0x0008    } | .ByteCount
        _m02 uint32_t alignment;         //{ +0x000c    } | .Alignment
                                       
        SDK_MAGIC_PROPERTIES( "_KSMAPPING.$", 0x0, false, 0xd3fe876132f58f90 );                 
        SDK_FIXED_SIZE( ksmapping_t, 0x10 );                 
    };                                 
};
#include "magic/ksmapping_t.end.hpp"
SDK_VERIFY( struct ndis::ksmapping_t, 0x10 );
