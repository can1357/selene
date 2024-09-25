#pragma once
#include <sdkgen/support_library.hpp>
#include "entropy_source_id_t.hpp"
#include "entropy_source_result_code_t.hpp"

#include "magic/entropy_source_ldr_result_t.start.hpp"
namespace boot
{
    // [struct _BOOT_ENTROPY_SOURCE_LDR_RESULT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entropy_source_ldr_result_t                              
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                          
        _m00 enum boot::entropy_source_id_t          source_id;       //{ +0x0000    +0x0000    +0x0000    } | .SourceId
        _m01 uint64_t                                policy;          //{ +0x0008    +0x0008    +0x0008    } | .Policy
        _m02 enum boot::entropy_source_result_code_t result_code;     //{ +0x0010    +0x0010    +0x0010    } | .ResultCode
        _m03 int32_t                                 result_status;   //{ +0x0014    +0x0014    +0x0014    } | .ResultStatus
        _m04 uint64_t                                time;            //{ +0x0018    +0x0018    +0x0018    } | .Time
        _m05 uint32_t                                entropy_length;  //{ +0x0020    +0x0020    +0x0020    } | .EntropyLength
        _m06 sdk::array<uint8_t, 64>                 entropy_data;    //{ +0x0024    +0x0024    +0x0024    } | .EntropyData
                                                                    
        SDK_MAGIC_PROPERTIES( "_BOOT_ENTROPY_SOURCE_LDR_RESULT.$", 0x68, true, 0xe77bb5480aee9722 );               
        SDK_FIXED_SIZE( entropy_source_ldr_result_t, 0x68 );               
    };                                                              
};
#include "magic/entropy_source_ldr_result_t.end.hpp"
SDK_VERIFY( struct boot::entropy_source_ldr_result_t, 0x68 );
