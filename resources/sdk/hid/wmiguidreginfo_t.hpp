#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/wmiguidreginfo_t.start.hpp"
namespace hid
{
    // [struct _WMIGUIDREGINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wmiguidreginfo_t                          
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 const struct nt::guid_t* guid;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Guid
        _m01 uint32_t                 instance_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InstanceCount
        _m02 uint32_t                 flags;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
                                                     
        SDK_MAGIC_PROPERTIES( "_WMIGUIDREGINFO.$", 0x10, true, 0x2bd385e3e47cf4b );               
        SDK_FIXED_SIZE( wmiguidreginfo_t, 0x10 );               
    };                                               
};
#include "magic/wmiguidreginfo_t.end.hpp"
SDK_VERIFY( struct hid::wmiguidreginfo_t, 0x10 );
