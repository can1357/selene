#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/getdpaddress_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_GETDPADDRESS]
    // => WDK 10 (NV)
    //
    struct getdpaddress_t                            
    {                                                
        // WDK 10                                    
        //                                           
        _m00 uint32_t                target_id;        //{ +0x0000    } | .TargetId
        _m01 uint32_t                dp_native_error;  //{ +0x0004    } | .DPNativeError
        _m02 uint32_t                root_port_index;  //{ +0x0008    } | .RootPortIndex
        _m03 uint8_t                 num_links;        //{ +0x000c    } | .NumLinks
        _m04 sdk::array<uint8_t, 15> rel_address;      //{ +0x000d    } | .RelAddress
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_GETDPADDRESS.$", 0x0, false, 0xb69857bee60c1897 );                
        SDK_FIXED_SIZE( getdpaddress_t, 0x1c );                
    };                                               
};
#include "magic/getdpaddress_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::getdpaddress_t, 0x1c );
