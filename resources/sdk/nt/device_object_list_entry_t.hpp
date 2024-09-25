#pragma once
#include <sdkgen/support_library.hpp>
#include "device_relation_level_t.hpp"

#include "magic/device_object_list_entry_t.start.hpp"
namespace nt
{
    struct device_object_t;

    // [struct _DEVICE_OBJECT_LIST_ENTRY]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_object_list_entry_t                        
    {                                                        
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                   
        _m00 struct nt::device_object_t*      device_object;   //{ +0x0000    +0x0000    +0x0000    } | .DeviceObject
        _m01 enum nt::device_relation_level_t relation_level;  //{ +0x0008    +0x0008    +0x0008    } | .RelationLevel
        _m02 uint32_t                         ordinal;         //{ +0x000c    +0x000c    +0x000c    } | .Ordinal
        _m03 uint32_t                         flags;           //{ +0x0010    +0x0010    +0x0010    } | .Flags
                                                             
        SDK_MAGIC_PROPERTIES( "_DEVICE_OBJECT_LIST_ENTRY.$", 0x18, true, 0xeb196091a723be3 );               
        SDK_FIXED_SIZE( device_object_list_entry_t, 0x18 );               
    };                                                       
};
#include "magic/device_object_list_entry_t.end.hpp"
SDK_VERIFY( struct nt::device_object_list_entry_t, 0x18 );
