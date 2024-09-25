#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/device_notify_t.start.hpp"
namespace po
{
    // [struct _PO_DEVICE_NOTIFY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_notify_t                              
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                              
        _m00 nt::list_entry_t            link;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 nt::list_entry_t            power_children;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PowerChildren
        _m02 nt::list_entry_t            power_parents;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PowerParents
        _m03 struct nt::device_object_t* target_device;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetDevice
        _m04 uint8_t                     order_level;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OrderLevel
        _m05 struct nt::device_object_t* device_object;   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DeviceObject
        _m06 wchar_t*                    device_name;     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .DeviceName
        _m07 wchar_t*                    driver_name;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .DriverName
        _m08 uint32_t                    child_count;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ChildCount
        _m09 uint32_t                    active_child;    //{ +0x005c    +0x005c    +0x005c    +0x005c    } | .ActiveChild
        _m10 uint32_t                    parent_count;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ParentCount
        _m11 uint32_t                    active_parent;   //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .ActiveParent
                                                        
        SDK_MAGIC_PROPERTIES( "_PO_DEVICE_NOTIFY.$", 0x68, true, 0xecdf9d70e26a0eca );               
        SDK_FIXED_SIZE( device_notify_t, 0x68 );               
    };                                                  
};
#include "magic/device_notify_t.end.hpp"
SDK_VERIFY( struct po::device_notify_t, 0x68 );
