#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "../nt/fast_mutex_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/volume_device_extension_t.start.hpp"
namespace fltmgr
{
    struct flt_volume_t;
    struct fltp_frame_t;

    // [struct _VOLUME_DEVICE_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct volume_device_extension_t                                
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 union fltmgr::flt_type_t     type;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::device_object_t*  attached_to_device_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AttachedToDeviceObject
        _m02 struct fltmgr::fltp_frame_t* frame;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Frame
        _m03 struct nt::fast_mutex_t      volume_access_lock;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VolumeAccessLock
        _m04 struct fltmgr::flt_volume_t* volume;                     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Volume
                                                                    
        SDK_MAGIC_PROPERTIES( "_VOLUME_DEVICE_EXTENSION.$", 0x58, true, 0x4475dcd00dde7b72 );                          
        SDK_FIXED_SIZE( volume_device_extension_t, 0x58 );                          
    };                                                              
};
#include "magic/volume_device_extension_t.end.hpp"
SDK_VERIFY( struct fltmgr::volume_device_extension_t, 0x58 );
