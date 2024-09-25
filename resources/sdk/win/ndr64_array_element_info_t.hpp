#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_array_element_info_t.start.hpp"
namespace win
{
    // [struct _NDR64_ARRAY_ELEMENT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_array_element_info_t     
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                
        _m00 uint32_t    element_mem_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ElementMemSize
        _m01 const void* element;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Element
                                          
        SDK_MAGIC_PROPERTIES( "_NDR64_ARRAY_ELEMENT_INFO.$", 0x10, true, 0x93594f8ba056810a );                 
        SDK_FIXED_SIZE( ndr64_array_element_info_t, 0x10 );                 
    };                                    
};
#include "magic/ndr64_array_element_info_t.end.hpp"
SDK_VERIFY( struct win::ndr64_array_element_info_t, 0x10 );
