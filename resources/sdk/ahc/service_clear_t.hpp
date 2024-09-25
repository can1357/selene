#pragma once
#include <sdkgen/support_library.hpp>
#include "info_class_t.hpp"

#include "magic/service_clear_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_CLEAR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_clear_t                     
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 enum ahc::info_class_t info_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InfoClass
                                               
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_CLEAR.$", 0x4, true, 0x6ebab7c931b1cf86 );           
        SDK_FIXED_SIZE( service_clear_t, 0x4 );           
    };                                         
};
#include "magic/service_clear_t.end.hpp"
SDK_VERIFY( struct ahc::service_clear_t, 0x4 );
