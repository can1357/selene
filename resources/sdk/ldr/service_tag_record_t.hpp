#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_tag_record_t.start.hpp"
namespace ldr
{
    struct service_tag_record_t;

    // [struct _LDR_SERVICE_TAG_RECORD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct service_tag_record_t                            
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                 
        _m00 struct ldr::service_tag_record_t* next;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t                          service_tag;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ServiceTag
                                                           
        SDK_NONVOL_PROPERTIES( "_LDR_SERVICE_TAG_RECORD.$", 0x10, true, 0x2e6aa5f7650f89d6 );            
        SDK_FIXED_SIZE( service_tag_record_t, 0x10 );            
    };                                                     
};
#include "magic/service_tag_record_t.end.hpp"
SDK_VERIFY( struct ldr::service_tag_record_t, 0x10 );
