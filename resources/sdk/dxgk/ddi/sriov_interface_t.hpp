#pragma once
#include <sdkgen/support_library.hpp>

namespace dxgk::arg { struct getdevicelocation_t;               }
namespace dxgk::arg { struct getresourceforbar_t;               }
namespace dxgk::arg { struct getvendoranddevice_t;              }
namespace dxgk::arg { struct queryprobedbars_t;                 }
namespace dxgk::arg { struct queryvirtualfunctionluid_t;        }
namespace dxgk::arg { struct readvirtualfunctionconfig_t;       }
namespace dxgk::arg { struct readvirtualfunctionconfigblock_t;  }
namespace dxgk::arg { struct resetvirtualfunction_t;            }
namespace dxgk::arg { struct setvirtualfunctionpowerstate_t;    }
namespace dxgk::arg { struct writevirtualfunctionconfig_t;      }
namespace dxgk::arg { struct writevirtualfunctionconfigblock_t; }

#include "magic/sriov_interface_t.start.hpp"
namespace dxgk::ddi
{
    // [struct _DXGKDDI_SRIOV_INTERFACE]
    // => WDK 10 (NV)
    //
    struct sriov_interface_t                                                                          
    {                                                                                                 
        using pdxgkddi_readvirtualfunctionconfig_t =       sdk::function<int32_t(void*, struct dxgk::arg::readvirtualfunctionconfig_t*)>*;                                             
        using pdxgkddi_writevirtualfunctionconfig_t =      sdk::function<int32_t(void*, struct dxgk::arg::writevirtualfunctionconfig_t*)>*;                                             
        using pdxgkddi_readvirtualfunctionconfigblock_t =  sdk::function<int32_t(void*, struct dxgk::arg::readvirtualfunctionconfigblock_t*)>*;                                             
        using pdxgkddi_writevirtualfunctionconfigblock_t = sdk::function<int32_t(void*, struct dxgk::arg::writevirtualfunctionconfigblock_t*)>*;                                             
        using pdxgkddi_queryprobedbars_t =                 sdk::function<void(void*, struct dxgk::arg::queryprobedbars_t*)>*;                                             
        using pdxgkddi_getvendoranddevice_t =              sdk::function<void(void*, struct dxgk::arg::getvendoranddevice_t*)>*;                                             
        using pdxgkddi_getdevicelocation_t =               sdk::function<void(void*, struct dxgk::arg::getdevicelocation_t*)>*;                                             
        using pdxgkddi_resetvirtualfunction_t =            sdk::function<int32_t(void*, struct dxgk::arg::resetvirtualfunction_t*)>*;                                             
        using pdxgkddi_setvirtualfunctionpowerstate_t =    sdk::function<int32_t(void*, struct dxgk::arg::setvirtualfunctionpowerstate_t*)>*;                                             
        using pdxgkddi_getresourceforbar_t =               sdk::function<int32_t(void*, struct dxgk::arg::getresourceforbar_t*)>*;                                             
        using pdxgkddi_queryvirtualfunctionluid_t =        sdk::function<void(void*, struct dxgk::arg::queryvirtualfunctionluid_t*)>*;                                             
                                                                                                      
        // WDK 10                                                                                     
        //                                                                                            
        _m00 uint16_t                                    size;                                          //{ +0x0000    } | .Size
        _m01 uint16_t                                    version;                                       //{ +0x0002    } | .Version
        _m02 void*                                       context;                                       //{ +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*                 interface_reference;                           //{ +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*                 interface_dereference;                         //{ +0x0018    } | .InterfaceDereference
        _m05 pdxgkddi_readvirtualfunctionconfig_t        dxgk_ddi_read_virtual_function_config;         //{ +0x0020    } | .DxgkDdiReadVirtualFunctionConfig
        _m06 pdxgkddi_writevirtualfunctionconfig_t       dxgk_ddi_write_virtual_function_config;        //{ +0x0028    } | .DxgkDdiWriteVirtualFunctionConfig
        _m07 pdxgkddi_readvirtualfunctionconfigblock_t   dxgk_ddi_read_virtual_function_config_block;   //{ +0x0030    } | .DxgkDdiReadVirtualFunctionConfigBlock
        _m08 pdxgkddi_writevirtualfunctionconfigblock_t  dxgk_ddi_write_virtual_function_config_block;  //{ +0x0038    } | .DxgkDdiWriteVirtualFunctionConfigBlock
        _m09 pdxgkddi_queryprobedbars_t                  dxgk_ddi_query_probed_bars;                    //{ +0x0040    } | .DxgkDdiQueryProbedBars
        _m10 pdxgkddi_getvendoranddevice_t               dxgk_ddi_get_vendor_and_device;                //{ +0x0048    } | .DxgkDdiGetVendorAndDevice
        _m11 pdxgkddi_getdevicelocation_t                dxgk_ddi_get_device_location;                  //{ +0x0050    } | .DxgkDdiGetDeviceLocation
        _m12 pdxgkddi_resetvirtualfunction_t             dxgk_ddi_reset_virtual_function;               //{ +0x0058    } | .DxgkDdiResetVirtualFunction
        _m13 pdxgkddi_setvirtualfunctionpowerstate_t     dxgk_ddi_set_virtual_function_power_state;     //{ +0x0060    } | .DxgkDdiSetVirtualFunctionPowerState
        _m14 pdxgkddi_getresourceforbar_t                dxgk_ddi_get_resource_for_bar;                 //{ +0x0068    } | .DxgkDdiGetResourceForBar
        _m15 pdxgkddi_queryvirtualfunctionluid_t         dxgk_ddi_query_virtual_function_luid;          //{ +0x0070    } | .DxgkDdiQueryVirtualFunctionLuid
                                                                                                      
        SDK_NONVOL_PROPERTIES( "_DXGKDDI_SRIOV_INTERFACE.$", 0x0, false, 0x89b39bc4bf71a5de );                                             
        SDK_FIXED_SIZE( sriov_interface_t, 0x78 );                                                    
    };                                                                                                
};
#include "magic/sriov_interface_t.end.hpp"
SDK_VERIFY( struct dxgk::ddi::sriov_interface_t, 0x78 );
