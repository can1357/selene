#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct driver_object_t; }

#include "magic/client_info_t.start.hpp"
namespace wdf
{
    // [struct _CLIENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct client_info_t                               
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 uint32_t                    size;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 nt::unicode_view*           registry_path;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RegistryPath
                                                       
        // Windows 11                                  
        //                                             
        _m02 struct nt::driver_object_t* driver_object;  //{ +0x0010    } | .DriverObject
                                                       
        SDK_MAGIC_PROPERTIES( "_CLIENT_INFO.$", 0x10, true, 0x510f085766613af8 );              
        SDK_DYNAMIC_SIZE( client_info_t );              
    };                                                 
};
#include "magic/client_info_t.end.hpp"
