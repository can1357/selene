#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "wudfmessage_header_t.hpp"

#include "magic/wudfmessage_remote_interface_arrival_t.start.hpp"
namespace wdf
{
    struct wudf_device_context_t;
    struct wudf_devnode_context_t;

    // [struct _WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wudfmessage_remote_interface_arrival_t                
    {                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                       
        _m00 struct wdf::wudfmessage_header_t    header;           //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct nt::guid_t                   interface_guid;   //{ +0x0004    +0x0004    +0x0004    } | .InterfaceGuid
        _m02 struct wdf::wudf_devnode_context_t* devnode_context;  //{ +0x0018    +0x0018    +0x0018    } | .DevnodeContext
        _m03 struct wdf::wudf_device_context_t*  device_context;   //{ +0x0020    +0x0020    +0x0020    } | .DeviceContext
                                                                 
        SDK_MAGIC_PROPERTIES( "_WUDFMESSAGE_REMOTE_INTERFACE_ARRIVAL.$", 0x28, true, 0x747cf072683ab15 );                
        SDK_FIXED_SIZE( wudfmessage_remote_interface_arrival_t, 0x28 );                
    };                                                           
};
#include "magic/wudfmessage_remote_interface_arrival_t.end.hpp"
SDK_VERIFY( struct wdf::wudfmessage_remote_interface_arrival_t, 0x28 );
