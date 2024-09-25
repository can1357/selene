#pragma once
#include <sdkgen/support_library.hpp>
#include "device_object_list_entry_t.hpp"
#include "../pnp/device_delete_type_t.hpp"

#include "magic/device_object_list_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_OBJECT_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_object_list_t                            
    {                                                      
        using devices_t = sdk::array<struct nt::device_object_list_entry_t, 1>;               
                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 uint32_t                       count;           //{ +0x0000    +0x0000    +0x0000    } | .Count
        _m01 uint32_t                       max_count;       //{ +0x0004    +0x0004    +0x0004    } | .MaxCount
        _m02 uint32_t                       tag_count;       //{ +0x0008    +0x0008    +0x0008    } | .TagCount
        _m03 enum pnp::device_delete_type_t operation_code;  //{ +0x000c    +0x000c    +0x000c    } | .OperationCode
        _m04 devices_t                      devices;         //{ +0x0010    +0x0010    +0x0010    } | .Devices
                                                           
        SDK_MAGIC_PROPERTIES( "_DEVICE_OBJECT_LIST.$", 0x28, true, 0x5d8ffc87aa2f881 );               
        SDK_DYNAMIC_SIZE( device_object_list_t );               
    };                                                     
};
#include "magic/device_object_list_t.end.hpp"
