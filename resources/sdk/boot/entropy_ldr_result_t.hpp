#pragma once
#include <sdkgen/support_library.hpp>
#include "entropy_source_ldr_result_t.hpp"

#include "magic/entropy_ldr_result_t.start.hpp"
namespace boot
{
    // [struct _BOOT_ENTROPY_LDR_RESULT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entropy_ldr_result_t                               
    {                                                         
        using entropy_source_result_t = sdk::array<struct boot::entropy_source_ldr_result_t, 10>;                       
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 uint32_t                  max_entropy_sources;     //{ +0x0000    +0x0000    +0x0000    } | .maxEntropySources
        _m01 entropy_source_result_t   entropy_source_result;   //{ +0x0008    +0x0008    +0x0008    } | .EntropySourceResult
        _m02 sdk::array<uint8_t, 48>   seed_bytes_for_cng;      //{ +0x0418    +0x0418    +0x0418    } | .SeedBytesForCng
        _m03 sdk::array<uint8_t, 1024> rng_bytes_for_ntoskrnl;  //{ +0x0448    +0x0448    +0x0448    } | .RngBytesForNtoskrnl
        _m04 sdk::array<uint8_t, 32>   kd_entropy;              //{ +0x0848    +0x0848    +0x0848    } | .KdEntropy
                                                              
        SDK_MAGIC_PROPERTIES( "_BOOT_ENTROPY_LDR_RESULT.$", 0x868, true, 0x478fe55de49b22b6 );                       
        SDK_FIXED_SIZE( entropy_ldr_result_t, 0x868 );                       
    };                                                        
};
#include "magic/entropy_ldr_result_t.end.hpp"
SDK_VERIFY( struct boot::entropy_ldr_result_t, 0x868 );
