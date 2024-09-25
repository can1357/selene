#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_offload_token_t.hpp"

#include "magic/storage_offload_read_output_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_OFFLOAD_READ_OUTPUT]
    // => WDK 10 (NV)
    //
    struct storage_offload_read_output_t                           
    {                                                              
        // WDK 10                                                  
        //                                                         
        _m00 uint32_t                           offload_read_flags;  //{ +0x0000    } | .OffloadReadFlags
        _m01 uint64_t                           length_protected;    //{ +0x0008    } | .LengthProtected
        _m02 uint32_t                           token_length;        //{ +0x0010    } | .TokenLength
        _m03 struct nt::storage_offload_token_t token;               //{ +0x0014    } | .Token
                                                                   
        SDK_NONVOL_PROPERTIES( "_STORAGE_OFFLOAD_READ_OUTPUT.$", 0x0, false, 0xa46bae19799f1603 );                   
        SDK_FIXED_SIZE( storage_offload_read_output_t, 0x218 );                   
    };                                                             
};
#include "magic/storage_offload_read_output_t.end.hpp"
SDK_VERIFY( struct nt::storage_offload_read_output_t, 0x218 );
