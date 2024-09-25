#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/wrapper_handle_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WRAPPER_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wrapper_handle_t                               
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                
        _m00 struct nt::driver_object_t* driver_object;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverObject
        _m01 nt::unicode_view            service_reg_path;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ServiceRegPath
                                                          
        SDK_MAGIC_PROPERTIES( "_NDIS_WRAPPER_HANDLE.$", 0x18, true, 0xfcfe00dd99244b17 );                 
        SDK_FIXED_SIZE( wrapper_handle_t, 0x18 );                 
    };                                                    
};
#include "magic/wrapper_handle_t.end.hpp"
SDK_VERIFY( struct ndis::wrapper_handle_t, 0x18 );
