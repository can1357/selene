#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_policy_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_POLICY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_policy_information_t 
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 void*    input_data;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InputData
        _m01 void*    output_data;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OutputData
        _m02 uint32_t input_data_size;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .InputDataSize
        _m03 uint32_t output_data_size;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .OutputDataSize
        _m04 uint32_t version;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Version
                                       
        SDK_MAGIC_PROPERTIES( "_SYSTEM_POLICY_INFORMATION.$", 0x20, true, 0x28c530d645697cfc );                 
        SDK_DYNAMIC_SIZE( system_policy_information_t );                 
    };                                 
};
#include "magic/system_policy_information_t.end.hpp"
