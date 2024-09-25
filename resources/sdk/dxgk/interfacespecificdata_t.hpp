#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpn_interface_version_t.hpp"

namespace d3dk::mdt     { struct hvidpn_t;                }
namespace dxgk::arg::cb { struct enumhandlechildren_t;    }
namespace dxgk::arg::cb { struct getcaptureaddress_t;     }
namespace dxgk::arg::cb { struct gethandledata_t;         }
namespace dxgk::arg::cb { struct notify_interrupt_data_t; }

#include "magic/interfacespecificdata_t.start.hpp"
namespace dxgk
{
    struct vidpn_interface_t;

    // [struct _DXGK_INTERFACESPECIFICDATA]
    // => WDK 10 (NV)
    //
    struct interfacespecificdata_t                                            
    {                                                                         
        using dxgkcb_gethandledata_t =       sdk::function<void*(const struct dxgk::arg::cb::gethandledata_t*)>*;                              
        using dxgkcb_enumhandlechildren_t =  sdk::function<uint32_t(const struct dxgk::arg::cb::enumhandlechildren_t*)>*;                              
        using dxgkcb_notify_interrupt_t =    sdk::function<void(const void*, struct dxgk::arg::cb::notify_interrupt_data_t*)>*;                              
        using dxgkcb_queryvidpninterface_t = sdk::function<int32_t(const struct d3dk::mdt::hvidpn_t*, const enum dxgk::vidpn_interface_version_t, const struct dxgk::vidpn_interface_t**)>*;                              
        using dxgkcb_getcaptureaddress_t =   sdk::function<int32_t(struct dxgk::arg::cb::getcaptureaddress_t*)>*;                              
                                                                              
        // WDK 10                                                             
        //                                                                    
        _m00 void*                              h_adapter;                      //{ +0x0000    } | .hAdapter
        _m01 dxgkcb_gethandledata_t             pfn_get_handle_data_cb;         //{ +0x0008    } | .pfnGetHandleDataCb
        _m02 sdk::function<uint32_t(uint32_t)>* pfn_get_handle_parent_cb;       //{ +0x0010    } | .pfnGetHandleParentCb
        _m03 dxgkcb_enumhandlechildren_t        pfn_enum_handle_children_cb;    //{ +0x0018    } | .pfnEnumHandleChildrenCb
        _m04 dxgkcb_notify_interrupt_t          pfn_notify_interrupt_cb;        //{ +0x0020    } | .pfnNotifyInterruptCb
        _m05 sdk::function<void(const void*)>*  pfn_notify_dpc_cb;              //{ +0x0028    } | .pfnNotifyDpcCb
        _m06 dxgkcb_queryvidpninterface_t       pfn_query_vid_pn_interface_cb;  //{ +0x0030    } | .pfnQueryVidPnInterfaceCb
        _m07 dxgkcb_getcaptureaddress_t         pfn_get_capture_address_cb;     //{ +0x0038    } | .pfnGetCaptureAddressCb
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_INTERFACESPECIFICDATA.$", 0x0, false, 0x2db1d5411168c03c );                              
        SDK_FIXED_SIZE( interfacespecificdata_t, 0x40 );                              
    };                                                                        
};
#include "magic/interfacespecificdata_t.end.hpp"
SDK_VERIFY( struct dxgk::interfacespecificdata_t, 0x40 );
