#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ptm_control_interface_t.start.hpp"
namespace wdf
{
    // [struct _PTM_CONTROL_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ptm_control_interface_t                                           
    {                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                   
        _m00 uint16_t                                  size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                  version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                     context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*               interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*, uint8_t*)>*  query_granularity;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .QueryGranularity
        _m06 sdk::function<int32_t(void*, uint32_t*)>* query_time_source;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryTimeSource
        _m07 sdk::function<int32_t(void*)>*            enable;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Enable
        _m08 sdk::function<int32_t(void*)>*            disable;                //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Disable
                                                                             
        SDK_NONVOL_PROPERTIES( "_PTM_CONTROL_INTERFACE.$", 0x40, true, 0x54686f8ae72f1f42 );                      
        SDK_FIXED_SIZE( ptm_control_interface_t, 0x40 );                      
    };                                                                       
};
#include "magic/ptm_control_interface_t.end.hpp"
SDK_VERIFY( struct wdf::ptm_control_interface_t, 0x40 );
