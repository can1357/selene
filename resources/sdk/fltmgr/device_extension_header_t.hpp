#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/device_extension_header_t.start.hpp"
namespace fltmgr
{
    struct fltp_frame_t;

    // [struct _DEVICE_EXTENSION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct device_extension_header_t                                
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 union fltmgr::flt_type_t     type;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct nt::device_object_t*  attached_to_device_object;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AttachedToDeviceObject
        _m02 struct fltmgr::fltp_frame_t* frame;                      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Frame
                                                                    
        SDK_MAGIC_PROPERTIES( "_DEVICE_EXTENSION_HEADER.$", 0x18, true, 0x88e33fe8b9ae4b2 );                          
        SDK_FIXED_SIZE( device_extension_header_t, 0x18 );                          
    };                                                              
};
#include "magic/device_extension_header_t.end.hpp"
SDK_VERIFY( struct fltmgr::device_extension_header_t, 0x18 );
