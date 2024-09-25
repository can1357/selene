#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_report_zones_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_REPORT_ZONES_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_report_zones_parameters_t
    {                                          
        // WDK 10                   
        //                          
        _m00 uint32_t size;                      //{ +0x0000    } | .Size
        _m01 uint8_t  report_option;             //{ +0x0004    } | .ReportOption
        _m02 uint8_t  partial;                   //{ +0x0005    } | .Partial
                                               
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_REPORT_ZONES_PARAMETERS.$", 0x0, false, 0x4339829aba888633 );              
        SDK_FIXED_SIZE( device_dsm_report_zones_parameters_t, 0x8 );              
    };                                         
};
#include "magic/device_dsm_report_zones_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_report_zones_parameters_t, 0x8 );
