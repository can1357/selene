#pragma once
#include <sdkgen/support_library.hpp>
#include "compatibility_context_element_t.hpp"

#include "magic/activation_context_compatibility_information_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_compatibility_information_t
    {                                                    
        using elements_t = sdk::array<struct win::compatibility_context_element_t>;              
                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                             
        _m00 uint32_t    element_count;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ElementCount
        _m01 elements_t  elements;                         //{ +0x0004    +0x0008    +0x0008    +0x0008    } | .Elements
                                                         
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_COMPATIBILITY_INFORMATION.$", 0x8, true, 0xec6563f53343d984 );              
        SDK_DYNAMIC_SIZE( activation_context_compatibility_information_t );              
    };                                                   
};
#include "magic/activation_context_compatibility_information_t.end.hpp"
