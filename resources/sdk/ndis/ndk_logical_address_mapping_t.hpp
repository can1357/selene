#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_logical_address_mapping_t.start.hpp"
namespace ndis
{
    // [struct _NDK_LOGICAL_ADDRESS_MAPPING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_logical_address_mapping_t               
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 void*                  adapter_context;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AdapterContext
        _m01 uint32_t               adapter_page_count;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AdapterPageCount
        _m02 sdk::array<int64_t, 1> adapter_page_array;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .AdapterPageArray
                                                       
        SDK_MAGIC_PROPERTIES( "_NDK_LOGICAL_ADDRESS_MAPPING.$", 0x18, true, 0x3c74fc11ba5e95f2 );                   
        SDK_FIXED_SIZE( ndk_logical_address_mapping_t, 0x18 );                   
    };                                                 
};
#include "magic/ndk_logical_address_mapping_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_logical_address_mapping_t, 0x18 );
