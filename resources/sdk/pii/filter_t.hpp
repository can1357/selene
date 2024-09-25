#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/filter_t.start.hpp"
namespace pii
{
    // [class PiiFilter]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class filter_t                      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint64_t pii_filter_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PiiFilterHandle
        _m01 int32_t  initialized;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Initialized
                                        
        SDK_MAGIC_PROPERTIES( "PiiFilter.$", 0x10, true, 0x5d02039e51d58962 );                  
        SDK_FIXED_SIZE( filter_t, 0x10 );                  
    };                                  
};
#include "magic/filter_t.end.hpp"
SDK_VERIFY( class pii::filter_t, 0x10 );
