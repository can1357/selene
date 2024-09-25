#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualization_interface_t.start.hpp"
namespace pci
{
    // [struct _PCI_VIRTUALIZATION_INTERFACE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtualization_interface_t                                                   
    {                                                                                   
        using set_virtual_function_data_t =    sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*;                                 
        using get_virtual_function_data_t =    sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*;                                 
        using pget_virtual_device_location_t = sdk::function<int32_t(void*, uint16_t, uint16_t*, uint8_t*, uint8_t*)>*;                                 
        using penable_virtualization_t =       sdk::function<int32_t(void*, uint16_t, uint8_t, uint8_t, uint8_t)>*;                                 
                                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                              
        _m00 uint16_t                                  size;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                  version;                           //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                     context;                           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*               interface_reference;               //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*               interface_dereference;             //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 set_virtual_function_data_t               set_virtual_function_data;         //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SetVirtualFunctionData
        _m06 get_virtual_function_data_t               get_virtual_function_data;         //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GetVirtualFunctionData
        _m07 pget_virtual_device_location_t            get_location;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .GetLocation
        _m08 sdk::function<void(void*, uint8_t*)>*     get_resources;                     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .GetResources
        _m09 penable_virtualization_t                  enable_virtualization;             //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .EnableVirtualization
        _m10 sdk::function<int32_t(void*, uint32_t*)>* get_virtual_function_probed_bars;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .GetVirtualFunctionProbedBars
                                                                                        
        SDK_NONVOL_PROPERTIES( "_PCI_VIRTUALIZATION_INTERFACE.$", 0x50, true, 0x8d3d65f8c64c0343 );                                 
        SDK_FIXED_SIZE( virtualization_interface_t, 0x50 );                                 
    };                                                                                  
};
#include "magic/virtualization_interface_t.end.hpp"
SDK_VERIFY( struct pci::virtualization_interface_t, 0x50 );
