#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/querydpcaps_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYDPCAPS]
    // => WDK 10 (NV)
    //
    struct querydpcaps_t               
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t num_root_ports;    //{ +0x0000    } | .NumRootPorts
        _m01 uint8_t  dp_version_major;  //{ +0x0004    } | .DPVersionMajor
        _m02 uint8_t  dp_version_minor;  //{ +0x0005    } | .DPVersionMinor
                                       
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYDPCAPS.$", 0x0, false, 0x4558160255dd9dc9 );                 
        SDK_FIXED_SIZE( querydpcaps_t, 0x8 );                 
    };                                 
};
#include "magic/querydpcaps_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::querydpcaps_t, 0x8 );
