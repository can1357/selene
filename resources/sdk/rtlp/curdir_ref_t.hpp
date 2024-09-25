#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/curdir_ref_t.start.hpp"
namespace rtlp
{
    // [struct _RTLP_CURDIR_REF]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct curdir_ref_t               
    {                                 
        // WDK 10                     
        //                            
        _m00 int32_t reference_count;   //{ +0x0000    } | .ReferenceCount
        _m01 void*   directory_handle;  //{ +0x0008    } | .DirectoryHandle
                                      
        SDK_NONVOL_PROPERTIES( "_RTLP_CURDIR_REF.$", 0x0, true, 0x55e2ea187144f579 );                 
        SDK_DYNAMIC_SIZE( curdir_ref_t );                 
    };                                
};
#include "magic/curdir_ref_t.end.hpp"
