#pragma once
#include <sdkgen/support_library.hpp>

namespace fs { struct filter_callbacks_t; }
namespace io { struct client_extension_t; }

#include "magic/driver_extension_t.start.hpp"
namespace nt
{
    struct device_object_t;
    struct driver_object_t;

    // [struct _DRIVER_EXTENSION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct driver_extension_t                                       
    {                                                               
        using pdriver_add_device_t = sdk::function<int32_t(struct nt::driver_object_t*, struct nt::device_object_t*)>*;                        
                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                          
        _m00 struct nt::driver_object_t*    driver_object;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DriverObject
        _m01 pdriver_add_device_t           add_device;               //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .AddDevice
        _m02 uint32_t                       count;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .Count
        _m03 nt::unicode_view               service_key_name;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ServiceKeyName
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                          
        _m04 struct io::client_extension_t* client_driver_extension;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientDriverExtension
        _m05 struct fs::filter_callbacks_t* fs_filter_callbacks;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FsFilterCallbacks
        _m06 void*                          kse_callbacks;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .KseCallbacks
        _m07 void*                          dv_callbacks;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DvCallbacks
        _m08 void*                          verifier_context;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .VerifierContext
                                                                    
        SDK_NONVOL_PROPERTIES( "_DRIVER_EXTENSION.$", 0x50, true, 0xc9f8357164854776 );                        
        SDK_DYNAMIC_SIZE( driver_extension_t );                        
    };                                                              
};
#include "magic/driver_extension_t.end.hpp"
