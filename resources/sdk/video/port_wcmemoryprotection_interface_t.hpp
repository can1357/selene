#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/port_wcmemoryprotection_interface_t.start.hpp"
namespace video
{
    // [struct _VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE]
    // => WDK 10 (NV)
    //
    struct port_wcmemoryprotection_interface_t                                  
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 uint16_t                              size;                          //{ +0x0000    } | .Size
        _m01 uint16_t                              version;                       //{ +0x0002    } | .Version
        _m02 void*                                 context;                       //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*           interface_reference;           //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*           interface_dereference;         //{ +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*, void*)>* video_port_protect_wc_memory;  //{ +0x0020    } | .VideoPortProtectWCMemory
        _m06 sdk::function<int32_t(void*, void*)>* video_port_restore_wc_memory;  //{ +0x0028    } | .VideoPortRestoreWCMemory
                                                                                
        SDK_NONVOL_PROPERTIES( "_VIDEO_PORT_WCMEMORYPROTECTION_INTERFACE.$", 0x0, false, 0xefaeff5b69da1fc1 );                             
        SDK_FIXED_SIZE( port_wcmemoryprotection_interface_t, 0x30 );                             
    };                                                                          
};
#include "magic/port_wcmemoryprotection_interface_t.end.hpp"
SDK_VERIFY( struct video::port_wcmemoryprotection_interface_t, 0x30 );
