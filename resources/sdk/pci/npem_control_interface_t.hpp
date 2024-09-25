#pragma once
#include <sdkgen/support_library.hpp>
#include "npem_control_standard_control_bit_t.hpp"

#include "magic/npem_control_interface_t.start.hpp"
namespace pci
{
    union npem_capability_standard_t;

    // [struct _NPEM_CONTROL_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct npem_control_interface_t                                                   
    {                                                                                 
        using pnpem_control_query_standard_capabilities_t = sdk::function<int32_t(void*, union pci::npem_capability_standard_t*)>*;                            
        using pnpem_control_set_standard_control_t =        sdk::function<int32_t(void*, enum pci::npem_control_standard_control_bit_t, uint8_t)>*;                            
                                                                                      
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                            
        _m00 uint16_t                                     size;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                     version;                      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                        context;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*                  interface_reference;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*                  interface_dereference;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<int32_t(void*, uint8_t)>*      set_npem_support_state;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .SetNpemSupportState
        _m06 pnpem_control_query_standard_capabilities_t  query_standard_capabilities;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .QueryStandardCapabilities
        _m07 pnpem_control_set_standard_control_t         set_standard_control;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .SetStandardControl
                                                                                      
        // Windows 11                                                                 
        //                                                                            
        _m08 sdk::function<uint32_t(void*)>*              query_npem_control;           //{ +0x0038    } | .QueryNpemControl
                                                                                      
        SDK_NONVOL_PROPERTIES( "_NPEM_CONTROL_INTERFACE.$", 0x38, true, 0xcd05c9f59eed475 );                            
        SDK_DYNAMIC_SIZE( npem_control_interface_t );                                 
    };                                                                                
};
#include "magic/npem_control_interface_t.end.hpp"
