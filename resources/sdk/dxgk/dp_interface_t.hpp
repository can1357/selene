#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg { struct dpauxiotransmission_t; }
namespace dxgk::arg { struct dpi2ciotransmission_t; }
namespace dxgk::arg { struct dpsbmtransmission_t;   }
namespace dxgk::arg { struct getdpaddress_t;        }
namespace dxgk::arg { struct querydpcaps_t;         }

#include "magic/dp_interface_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DP_INTERFACE]
    // => WDK 10 (NV)
    //
    struct dp_interface_t                                                    
    {                                                                        
        using pdxgkddi_querydpcaps_t =         sdk::function<int32_t(void*, struct dxgk::arg::querydpcaps_t*)>*;                                
        using pdxgkddi_getdpaddress_t =        sdk::function<int32_t(void*, struct dxgk::arg::getdpaddress_t*)>*;                                
        using pdxgkddi_dpauxiotransmission_t = sdk::function<int32_t(void*, struct dxgk::arg::dpauxiotransmission_t*)>*;                                
        using pdxgkddi_dpi2ciotransmission_t = sdk::function<int32_t(void*, struct dxgk::arg::dpi2ciotransmission_t*)>*;                                
        using pdxgkddi_dpsbmtransmission_t =   sdk::function<int32_t(void*, struct dxgk::arg::dpsbmtransmission_t*)>*;                                
                                                                             
        // WDK 10                                                            
        //                                                                   
        _m00 uint16_t                        size;                             //{ +0x0000    } | .Size
        _m01 uint16_t                        version;                          //{ +0x0002    } | .Version
        _m02 void*                           context;                          //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*     interface_reference;              //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*     interface_dereference;            //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_querydpcaps_t          dxgk_ddi_query_dp_caps;           //{ +0x0020    } | .DxgkDdiQueryDPCaps
        _m06 pdxgkddi_getdpaddress_t         dxgk_ddi_get_dp_address;          //{ +0x0028    } | .DxgkDdiGetDPAddress
        _m07 pdxgkddi_dpauxiotransmission_t  dxgk_ddi_dp_aux_io_transmission;  //{ +0x0030    } | .DxgkDdiDPAuxIoTransmission
        _m08 pdxgkddi_dpi2ciotransmission_t  dxgk_ddi_dpi2c_io_transmission;   //{ +0x0038    } | .DxgkDdiDPI2CIoTransmission
        _m09 pdxgkddi_dpsbmtransmission_t    dxgk_ddi_dpsbm_transmission;      //{ +0x0040    } | .DxgkDdiDPSBMTransmission
                                                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_DP_INTERFACE.$", 0x0, false, 0x8920631b03752af1 );                                
        SDK_FIXED_SIZE( dp_interface_t, 0x48 );                                
    };                                                                       
};
#include "magic/dp_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::dp_interface_t, 0x48 );
