#pragma once
#include <sdkgen/support_library.hpp>
#include "wudfmessage_header_t.hpp"

#include "magic/wudfmessage_add_device_t.start.hpp"
namespace wdf
{
    struct wudf_devnode_context_t;

    // [struct _WUDFMESSAGE_ADD_DEVICE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_add_device_t                                               
    {                                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                        
        _m00 struct wdf::wudfmessage_header_t    header;                            //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            attach_device_name_offset;         //{ +0x0004    +0x0004    +0x0004    } | .AttachDeviceNameOffset
        _m02 sdk::array<uint8_t, 2>              internal_reference_string_valid;   //{ +0x0008    +0x0008    +0x0008    } | .InternalReferenceStringValid
        _m03 sdk::array<uint32_t, 2>             internal_reference_string_offset;  //{ +0x000c    +0x000c    +0x000c    } | .InternalReferenceStringOffset
        _m04 uint32_t                            pdo_name_offset;                   //{ +0x0014    +0x0014    +0x0014    } | .PdoNameOffset
        _m05 void*                               device_object_pointer;             //{ +0x0018    +0x0018    +0x0018    } | .DeviceObjectPointer
        _m06 struct wdf::wudf_devnode_context_t* devnode_context;                   //{ +0x0020    +0x0020    +0x0020    } | .DevnodeContext
                                                                                  
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_ADD_DEVICE.$", 0x28, true, 0x1099f0a3c0237fc8 );                                 
        SDK_FIXED_SIZE( wudfmessage_add_device_t, 0x28 );                                 
    };                                                                            
};
#include "magic/wudfmessage_add_device_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_add_device_t, 0x28 );
