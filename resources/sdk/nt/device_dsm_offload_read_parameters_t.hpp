#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_offload_read_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_OFFLOAD_READ_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_offload_read_parameters_t
    {                                          
        // WDK 10                  
        //                         
        _m00 uint32_t flags;                     //{ +0x0000    } | .Flags
        _m01 uint32_t time_to_live;              //{ +0x0004    } | .TimeToLive
                                               
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_OFFLOAD_READ_PARAMETERS.$", 0x0, false, 0xd274b7106a4c2ea8 );             
        SDK_FIXED_SIZE( device_dsm_offload_read_parameters_t, 0x10 );             
    };                                         
};
#include "magic/device_dsm_offload_read_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_offload_read_parameters_t, 0x10 );
