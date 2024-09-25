#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksresolution_t.start.hpp"
namespace ndis
{
    // [struct KSRESOLUTION]
    // => Windows 10 v1607
    //
    struct ksresolution_t        
    {                            
        // Windows 10 v1607            
        //                       
        _m00 int64_t granularity;  //{ +0x0000    } | .Granularity
        _m01 int64_t error;        //{ +0x0008    } | .Error
                                 
        SDK_MAGIC_PROPERTIES( "KSRESOLUTION.$", 0x0, false, 0xdca4586db1335f60 );            
        SDK_FIXED_SIZE( ksresolution_t, 0x10 );            
    };                           
};
#include "magic/ksresolution_t.end.hpp"
SDK_VERIFY( struct ndis::ksresolution_t, 0x10 );
