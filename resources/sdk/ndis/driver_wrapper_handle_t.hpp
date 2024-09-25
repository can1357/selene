#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/driver_wrapper_handle_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_DRIVER_WRAPPER_HANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_wrapper_handle_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                    
        _m00 struct ndis::object_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 void*                        ndis_wrapper_handle;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NdisWrapperHandle
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_DRIVER_WRAPPER_HANDLE.$", 0x10, true, 0xfb6c273ef686eabd );                    
        SDK_FIXED_SIZE( driver_wrapper_handle_t, 0x10 );                    
    };                                                        
};
#include "magic/driver_wrapper_handle_t.end.hpp"
SDK_VERIFY( struct ndis::driver_wrapper_handle_t, 0x10 );
