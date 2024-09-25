#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_object_extension_t.start.hpp"
namespace nt
{
    struct file_object_t;
    struct device_object_t;

    // [struct _FILE_OBJECT_EXTENSION]
    // => WDK 10 (NV)
    //
    struct file_object_extension_t                         
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 struct nt::file_object_t*   file_object;        //{ +0x0000    } | .FileObject
        _m01 struct nt::device_object_t* device_object;      //{ +0x0008    } | .DeviceObject
        _m02 uint32_t                    lock_count;         //{ +0x0010    } | .LockCount
        _m03 uint32_t                    mcn_disable_count;  //{ +0x0014    } | .McnDisableCount
                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_OBJECT_EXTENSION.$", 0x0, false, 0xf6984f1dfe0f9d6f );                  
        SDK_FIXED_SIZE( file_object_extension_t, 0x18 );                  
    };                                                     
};
#include "magic/file_object_extension_t.end.hpp"
SDK_VERIFY( struct nt::file_object_extension_t, 0x18 );
