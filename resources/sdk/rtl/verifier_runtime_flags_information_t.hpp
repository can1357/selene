#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_runtime_flags_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_RUNTIME_FLAGS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_runtime_flags_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                           
        _m00 uint32_t size;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t provider_flags;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ProviderFlags
        _m02 uint32_t debug_flags;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DebugFlags
                                               
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_RUNTIME_FLAGS_INFORMATION.$", 0x10, true, 0xfd6eba6172b37eed );               
        SDK_FIXED_SIZE( verifier_runtime_flags_information_t, 0x10 );               
    };                                         
};
#include "magic/verifier_runtime_flags_information_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_runtime_flags_information_t, 0x10 );
