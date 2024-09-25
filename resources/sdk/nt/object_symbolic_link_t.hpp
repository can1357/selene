#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_symbolic_link_t.start.hpp"
namespace nt
{
    struct object_symbolic_link_t;

    // [struct _OBJECT_SYMBOLIC_LINK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_symbolic_link_t                    
    {                                                
        using callback_t = sdk::function<int32_t(struct nt::object_symbolic_link_t*, void*, nt::unicode_view*, void**)>*;                       
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                           
        _m00 int64_t          creation_time;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CreationTime
        _m01 nt::unicode_view link_target;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .LinkTarget
        _m02 uint32_t         dos_device_drive_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DosDeviceDriveIndex
        _m03 uint32_t         flags;                   //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Flags
        _m04 uint32_t         access_mask;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .AccessMask
                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                           
        _m05 callback_t       callback;                //{ +0x0008    +0x0008    +0x0008    } | .Callback
        _m06 void*            callback_context;        //{ +0x0010    +0x0010    +0x0010    } | .CallbackContext
                                                     
        // Windows 11                                
        //                                           
        _m07 uint32_t         integrity_level;         //{ +0x0024    } | .IntegrityLevel
                                                     
        SDK_MAGIC_PROPERTIES( "_OBJECT_SYMBOLIC_LINK.$", 0x28, true, 0xda6c64e0e1a977ed );                       
        SDK_FIXED_SIZE( object_symbolic_link_t, 0x28 );                       
    };                                               
};
#include "magic/object_symbolic_link_t.end.hpp"
SDK_VERIFY( struct nt::object_symbolic_link_t, 0x28 );
