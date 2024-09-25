#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_record_wrapper_flags_t.start.hpp"
namespace wheap
{
    // [union _WHEAP_ERROR_RECORD_WRAPPER_FLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union error_record_wrapper_flags_t          
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint1_t  preallocated;               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Preallocated
        _m01 uint1_t  from_persistent_store;      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .FromPersistentStore
        _m02 uint1_t  platform_pfa_control;       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .PlatformPfaControl
        _m03 uint1_t  platform_directed_offline;  //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .PlatformDirectedOffline
        _m04 uint32_t as_ulong;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsULONG
                                                
        SDK_MAGIC_PROPERTIES( "_WHEAP_ERROR_RECORD_WRAPPER_FLAGS.$", 0x4, true, 0x3687e246e4209663 );                          
        SDK_FIXED_SIZE( error_record_wrapper_flags_t, 0x4 );                          
    };                                          
};
#include "magic/error_record_wrapper_flags_t.end.hpp"
SDK_VERIFY( union wheap::error_record_wrapper_flags_t, 0x4 );
