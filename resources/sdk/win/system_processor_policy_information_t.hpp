#pragma once
#include <sdkgen/support_library.hpp>
#include "xsave_policy_t.hpp"

#include "magic/system_processor_policy_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_PROCESSOR_POLICY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_policy_information_t  
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                        
        _m00 uint32_t                   length;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t                   policy_id;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PolicyId
        _m02 struct win::xsave_policy_t policy;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Policy
                                                  
        SDK_MAGIC_PROPERTIES( "_SYSTEM_PROCESSOR_POLICY_INFORMATION.$", 0x38, true, 0x2f64a75bd80b503c );          
        SDK_FIXED_SIZE( system_processor_policy_information_t, 0x38 );          
    };                                            
};
#include "magic/system_processor_policy_information_t.end.hpp"
SDK_VERIFY( struct win::system_processor_policy_information_t, 0x38 );
