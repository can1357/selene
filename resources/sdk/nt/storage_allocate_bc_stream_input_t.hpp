#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_allocate_bc_stream_input_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_ALLOCATE_BC_STREAM_INPUT]
    // => WDK 10 (NV)
    //
    struct storage_allocate_bc_stream_input_t
    {                                        
        // WDK 10                         
        //                                
        _m00 uint32_t version;                 //{ +0x0000    } | .Version
        _m01 uint32_t requests_per_period;     //{ +0x0004    } | .RequestsPerPeriod
        _m02 uint32_t period;                  //{ +0x0008    } | .Period
        _m03 uint8_t  retry_failures;          //{ +0x000c    } | .RetryFailures
        _m04 uint8_t  discardable;             //{ +0x000d    } | .Discardable
        _m05 uint32_t access_type;             //{ +0x0010    } | .AccessType
        _m06 uint32_t access_mode;             //{ +0x0014    } | .AccessMode
                                             
        SDK_NONVOL_PROPERTIES( "_STORAGE_ALLOCATE_BC_STREAM_INPUT.$", 0x0, false, 0xb17ffe4f49b81897 );                    
        SDK_FIXED_SIZE( storage_allocate_bc_stream_input_t, 0x18 );                    
    };                                       
};
#include "magic/storage_allocate_bc_stream_input_t.end.hpp"
SDK_VERIFY( struct nt::storage_allocate_bc_stream_input_t, 0x18 );
