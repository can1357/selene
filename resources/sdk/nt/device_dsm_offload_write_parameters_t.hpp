#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_offload_token_t.hpp"

#include "magic/device_dsm_offload_write_parameters_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS]
    // => WDK 10 (NV)
    //
    struct device_dsm_offload_write_parameters_t             
    {                                                        
        // WDK 10                                            
        //                                                   
        _m00 uint32_t                           flags;         //{ +0x0000    } | .Flags
        _m01 uint64_t                           token_offset;  //{ +0x0008    } | .TokenOffset
        _m02 struct nt::storage_offload_token_t token;         //{ +0x0010    } | .Token
                                                             
        SDK_NONVOL_PROPERTIES( "_DEVICE_DSM_OFFLOAD_WRITE_PARAMETERS.$", 0x0, false, 0x459eabde228c2aae );             
        SDK_FIXED_SIZE( device_dsm_offload_write_parameters_t, 0x210 );             
    };                                                       
};
#include "magic/device_dsm_offload_write_parameters_t.end.hpp"
SDK_VERIFY( struct nt::device_dsm_offload_write_parameters_t, 0x210 );
