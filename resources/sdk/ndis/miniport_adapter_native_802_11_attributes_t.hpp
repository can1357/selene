#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/miniport_adapter_native_802_11_attributes_t.start.hpp"
namespace ndis
{
    struct dot11_phy_attributes_t;
    struct dot11_wfd_attributes_t;
    struct dot11_extap_attributes_t;
    struct dot11_vwifi_attributes_t;
    struct dot11_extsta_attributes_t;

    // [struct _NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_adapter_native_802_11_attributes_t                                   
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                               
        _m00 struct ndis::object_header_t            header;                               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                op_mode_capability;                   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OpModeCapability
        _m02 uint32_t                                num_of_tx_buffers;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumOfTXBuffers
        _m03 uint32_t                                num_of_rx_buffers;                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumOfRXBuffers
        _m04 uint8_t                                 multi_domain_capability_implemented;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MultiDomainCapabilityImplemented
        _m05 uint32_t                                num_supported_phys;                   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumSupportedPhys
        _m06 struct ndis::dot11_phy_attributes_t*    supported_phy_attributes;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SupportedPhyAttributes
        _m07 struct ndis::dot11_extsta_attributes_t* ext_sta_attributes;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ExtSTAAttributes
        _m08 struct ndis::dot11_vwifi_attributes_t*  v_wi_fi_attributes;                   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VWiFiAttributes
        _m09 struct ndis::dot11_extap_attributes_t*  ext_ap_attributes;                    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ExtAPAttributes
        _m10 struct ndis::dot11_wfd_attributes_t*    wfd_attributes;                       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WFDAttributes
                                                                                         
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_ADAPTER_NATIVE_802_11_ATTRIBUTES.$", 0x40, true, 0x9e3cabd1be9925c6 );                                    
        SDK_FIXED_SIZE( miniport_adapter_native_802_11_attributes_t, 0x40 );                                    
    };                                                                                   
};
#include "magic/miniport_adapter_native_802_11_attributes_t.end.hpp"
SDK_VERIFY( struct ndis::miniport_adapter_native_802_11_attributes_t, 0x40 );
