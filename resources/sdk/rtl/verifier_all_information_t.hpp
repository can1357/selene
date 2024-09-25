#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_all_information_t.start.hpp"
namespace rtl
{
    // [struct _RTL_VERIFIER_ALL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_all_information_t                  
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                             
        _m00 uint64_t size;                              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint64_t offset_page_heaps_information;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffsetPageHeapsInformation
        _m02 uint64_t offset_runtime_flags_information;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OffsetRuntimeFlagsInformation
        _m03 uint64_t offset_fault_inject_information;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OffsetFaultInjectInformation
                                                       
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_ALL_INFORMATION.$", 0x20, true, 0x777bb089e718ae93 );                                 
        SDK_FIXED_SIZE( verifier_all_information_t, 0x20 );                                 
    };                                                 
};
#include "magic/verifier_all_information_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_all_information_t, 0x20 );
