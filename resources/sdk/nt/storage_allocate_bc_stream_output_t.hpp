#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_allocate_bc_stream_output_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ALLOCATE_BC_STREAM_OUTPUT]
    // => WDK 10 (NV)
    //
    struct storage_allocate_bc_stream_output_t  
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint64_t request_size;               //{ +0x0000    } | .RequestSize
        _m01 uint32_t num_out_standing_requests;  //{ +0x0008    } | .NumOutStandingRequests
                                                
        SDK_NONVOL_PROPERTIES( "_STORAGE_ALLOCATE_BC_STREAM_OUTPUT.$", 0x0, false, 0xb628a0db0c02fd86 );                          
        SDK_FIXED_SIZE( storage_allocate_bc_stream_output_t, 0x10 );                          
    };                                          
};
#include "magic/storage_allocate_bc_stream_output_t.end.hpp"
SDK_VERIFY( struct nt::storage_allocate_bc_stream_output_t, 0x10 );
