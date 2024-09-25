#pragma once
#include <sdkgen/support_library.hpp>
#include "entropy_source_nt_result_t.hpp"

#include "magic/entropy_nt_result_t.start.hpp"
namespace boot
{
    // [struct _BOOT_ENTROPY_NT_RESULT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entropy_nt_result_t                              
    {                                                       
        using entropy_source_result_t = sdk::array<struct boot::entropy_source_nt_result_t, 8>;                      
                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint32_t                 max_entropy_sources;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .maxEntropySources
        _m01 entropy_source_result_t  entropy_source_result;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .EntropySourceResult
        _m02 sdk::array<uint8_t, 48>  seed_bytes_for_cng;     //{ +0x0348    +0x0418    +0x0418    +0x0418    } | .SeedBytesForCng
                                                            
        SDK_MAGIC_PROPERTIES( "_BOOT_ENTROPY_NT_RESULT.$", 0x448, true, 0x9ae0e5216a8e82bf );                      
        SDK_DYNAMIC_SIZE( entropy_nt_result_t );                      
    };                                                      
};
#include "magic/entropy_nt_result_t.end.hpp"
