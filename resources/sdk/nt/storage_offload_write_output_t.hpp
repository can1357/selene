#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_offload_write_output_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_OFFLOAD_WRITE_OUTPUT]
    // => WDK 10 (NV)
    //
    struct storage_offload_write_output_t 
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t offload_write_flags;  //{ +0x0000    } | .OffloadWriteFlags
        _m01 uint64_t length_copied;        //{ +0x0008    } | .LengthCopied
                                          
        SDK_NONVOL_PROPERTIES( "_STORAGE_OFFLOAD_WRITE_OUTPUT.$", 0x0, false, 0x8cff8eb4796de97f );                    
        SDK_FIXED_SIZE( storage_offload_write_output_t, 0x10 );                    
    };                                    
};
#include "magic/storage_offload_write_output_t.end.hpp"
SDK_VERIFY( struct nt::storage_offload_write_output_t, 0x10 );
