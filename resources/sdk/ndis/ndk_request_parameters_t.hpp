#pragma once
#include <sdkgen/support_library.hpp>
#include "ndk_capabilities_t.hpp"

#include "magic/ndk_request_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NDK_REQUEST_PARAMETERS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_request_parameters_t                         
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                  
        _m00 uint8_t                         rdma_requested;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RdmaRequested
        _m01 uint32_t                        switch_port_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SwitchPortId
        _m02 uint32_t                        if_index;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IfIndex
        _m03 sdk::array<uint8_t, 32>         mac_address;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .MacAddress
        _m04 uint32_t                        vlan_id;         //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .VlanId
        _m05 struct ndis::ndk_capabilities_t ndk_reserved;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .NdkReserved
                                                            
        SDK_MAGIC_PROPERTIES( "_NDIS_NDK_REQUEST_PARAMETERS.$", 0x68, true, 0x4378bc2f627716b3 );               
        SDK_FIXED_SIZE( ndk_request_parameters_t, 0x68 );               
    };                                                      
};
#include "magic/ndk_request_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_request_parameters_t, 0x68 );
