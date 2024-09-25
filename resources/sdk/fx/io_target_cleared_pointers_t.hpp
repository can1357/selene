#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }
namespace nt { struct file_object_t;   }

#include "magic/io_target_cleared_pointers_t.start.hpp"
namespace fx
{
    // [struct FxIoTargetClearedPointers]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct io_target_cleared_pointers_t                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                  
        _m00 struct nt::device_object_t* target_pdo;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TargetPdo
        _m01 struct nt::file_object_t*   target_file_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TargetFileObject
        _m02 void*                       target_handle;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TargetHandle
                                                            
        SDK_MAGIC_PROPERTIES( "FxIoTargetClearedPointers.$", 0x18, true, 0xcc6ebf80dee3f292 );                   
        SDK_FIXED_SIZE( io_target_cleared_pointers_t, 0x18 );                   
    };                                                      
};
#include "magic/io_target_cleared_pointers_t.end.hpp"
SDK_VERIFY( struct fx::io_target_cleared_pointers_t, 0x18 );
