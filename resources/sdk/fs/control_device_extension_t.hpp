#pragma once
#include <sdkgen/support_library.hpp>
#include "../fltmgr/flt_type_t.hpp"

namespace fltmgr { struct fltp_frame_t;    }
namespace nt     { struct device_object_t; }

#include "magic/control_device_extension_t.start.hpp"
namespace fs
{
    // [struct _FS_CONTROL_DEVICE_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct control_device_extension_t                               
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 union fltmgr::flt_type_t     type;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::device_object_t*  attached_to_device_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AttachedToDeviceObject
        _m02 struct fltmgr::fltp_frame_t* frame;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Frame
        _m03 nt::list_entry_t             link;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Link
        _m04 struct nt::device_object_t*  device_object;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceObject
        _m05 nt::unicode_view             control_device_name;        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ControlDeviceName
        _m06 nt::unicode_view             driver_object_name;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .DriverObjectName
                                                                    
        SDK_MAGIC_PROPERTIES( "_FS_CONTROL_DEVICE_EXTENSION.$", 0x50, true, 0xd19b867a3a12236f );                          
        SDK_FIXED_SIZE( control_device_extension_t, 0x50 );                          
    };                                                              
};
#include "magic/control_device_extension_t.end.hpp"
SDK_VERIFY( struct fs::control_device_extension_t, 0x50 );
