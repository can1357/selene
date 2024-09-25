#pragma once
#include <sdkgen/support_library.hpp>
#include "info_class_t.hpp"

#include "magic/service_remove_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_REMOVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_remove_t                       
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                        
        _m00 enum ahc::info_class_t info_class;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InfoClass
        _m01 nt::unicode_view       package_alias;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PackageAlias
        _m02 void*                  file_handle;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileHandle
        _m03 nt::unicode_view       exe_signature;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExeSignature
                                                  
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_REMOVE.$", 0x30, true, 0x52430ad385187040 );              
        SDK_FIXED_SIZE( service_remove_t, 0x30 );              
    };                                            
};
#include "magic/service_remove_t.end.hpp"
SDK_VERIFY( struct ahc::service_remove_t, 0x30 );
