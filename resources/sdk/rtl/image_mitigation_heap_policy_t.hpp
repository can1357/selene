#pragma once
#include <sdkgen/support_library.hpp>
#include "image_mitigation_policy_t.hpp"

#include "magic/image_mitigation_heap_policy_t.start.hpp"
namespace rtl
{
    // [struct _RTL_IMAGE_MITIGATION_HEAP_POLICY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct image_mitigation_heap_policy_t                                  
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                 
        _m00 union rtl::image_mitigation_policy_t terminate_on_heap_errors;  //{ +0x0000    +0x0000    +0x0000    } | .TerminateOnHeapErrors
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_IMAGE_MITIGATION_HEAP_POLICY.$", 0x8, true, 0x8d2e521c49f4ae0a );                         
        SDK_FIXED_SIZE( image_mitigation_heap_policy_t, 0x8 );                         
    };                                                                     
};
#include "magic/image_mitigation_heap_policy_t.end.hpp"
SDK_VERIFY( struct rtl::image_mitigation_heap_policy_t, 0x8 );
