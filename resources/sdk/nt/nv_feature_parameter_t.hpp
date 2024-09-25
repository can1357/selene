#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nv_feature_parameter_t.start.hpp"
namespace nt
{
    // [struct _NV_FEATURE_PARAMETER]
    // => WDK 10 (NV)
    //
    struct nv_feature_parameter_t           
    {                                       
        // WDK 10                           
        //                                  
        _m00 uint16_t nv_power_mode_enabled;  //{ +0x0000    } | .NVPowerModeEnabled
        _m01 uint16_t nv_parameter_reserv1;   //{ +0x0002    } | .NVParameterReserv1
        _m02 uint16_t nv_cmd_enabled;         //{ +0x0004    } | .NVCmdEnabled
        _m03 uint16_t nv_parameter_reserv2;   //{ +0x0006    } | .NVParameterReserv2
        _m04 uint16_t nv_power_mode_ver;      //{ +0x0008    } | .NVPowerModeVer
        _m05 uint16_t nv_cmd_ver;             //{ +0x000a    } | .NVCmdVer
        _m06 uint32_t nv_size;                //{ +0x000c    } | .NVSize
        _m07 uint16_t nv_read_speed;          //{ +0x0010    } | .NVReadSpeed
        _m08 uint16_t nv_wrt_speed;           //{ +0x0012    } | .NVWrtSpeed
        _m09 uint32_t device_spin_up_time;    //{ +0x0014    } | .DeviceSpinUpTime
                                            
        SDK_NONVOL_PROPERTIES( "_NV_FEATURE_PARAMETER.$", 0x0, false, 0xa1be221ce45a7562 );                      
        SDK_FIXED_SIZE( nv_feature_parameter_t, 0x18 );                      
    };                                      
};
#include "magic/nv_feature_parameter_t.end.hpp"
SDK_VERIFY( struct nt::nv_feature_parameter_t, 0x18 );
