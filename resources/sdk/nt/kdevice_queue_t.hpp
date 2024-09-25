#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kdevice_queue_t.start.hpp"
namespace nt
{
    // [struct _KDEVICE_QUEUE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kdevice_queue_t                     
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 int16_t          type;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t          size;              //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m02 nt::list_entry_t device_list_head;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceListHead
        _m03 uint64_t         lock;              //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Lock
        _m04 uint8_t          busy;              //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Busy
        _m05 int56_t          hint;              //{ +0x0020@8  +0x0020@8  +0x0020@8  +0x0020@8  +0x0020@8  } | .Hint
                                               
        SDK_NONVOL_PROPERTIES( "_KDEVICE_QUEUE.$", 0x28, true, 0xad2ac2e7848aa5b7 );                 
        SDK_FIXED_SIZE( kdevice_queue_t, 0x28 );                 
    };                                         
};
#include "magic/kdevice_queue_t.end.hpp"
SDK_VERIFY( struct nt::kdevice_queue_t, 0x28 );
