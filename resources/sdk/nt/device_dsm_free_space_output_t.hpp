#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_dsm_free_space_output_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_FREE_SPACE_OUTPUT]
    // => WDK 10 (NV)
    //
    struct device_dsm_free_space_output_t
    {                                    
        // WDK 10                
        //                       
        _m00 uint32_t version;             //{ +0x0000    } | .Version
        _m01 uint64_t free_space;          //{ +0x0008    } | .FreeSpace
                                         
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_FREE_SPACE_OUTPUT.$", 0x0, false, 0x543ad74b65cc8b24 );           
        SDK_FIXED_SIZE( device_dsm_free_space_output_t, 0x10 );           
    };                                   
};
#include "magic/device_dsm_free_space_output_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_free_space_output_t, 0x10 );
