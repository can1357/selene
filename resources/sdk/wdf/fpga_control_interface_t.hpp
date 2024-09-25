#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fpga_control_interface_t.start.hpp"
namespace wdf
{
    // [struct _FPGA_CONTROL_INTERFACE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct fpga_control_interface_t                                          
    {                                                                        
        using pfpga_control_error_reporting_t = sdk::function<int32_t(void*, uint32_t, uint32_t, uint8_t)>*;                        
                                                                             
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                   
        _m00 uint16_t                                size;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                                version;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                                   context;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*             interface_reference;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*             interface_dereference;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 sdk::function<void(void*)>*             bus_scan;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .BusScan
        _m06 sdk::function<int32_t(void*, uint8_t)>* control_link;             //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ControlLink
        _m07 sdk::function<int32_t(void*, uint8_t)>* control_config_space;     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ControlConfigSpace
        _m08 pfpga_control_error_reporting_t         control_error_reporting;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ControlErrorReporting
                                                                             
        SDK_NONVOL_PROPERTIES( "_FPGA_CONTROL_INTERFACE.$", 0x40, true, 0x19f3162d4b84f927 );                        
        SDK_FIXED_SIZE( fpga_control_interface_t, 0x40 );                        
    };                                                                       
};
#include "magic/fpga_control_interface_t.end.hpp"
SDK_VERIFY( struct wdf::fpga_control_interface_t, 0x40 );
