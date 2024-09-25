#pragma once
#include <sdkgen/support_library.hpp>
#include "sl_kmem_cache_value_descriptor_t.hpp"

#include "magic/sl_kmem_cache_t.start.hpp"
namespace win
{
    // [struct _SL_KMEM_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sl_kmem_cache_t                 
    {                                      
        using descriptors_t = sdk::array<struct win::sl_kmem_cache_value_descriptor_t, 1>;               
                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                 
        _m00 uint32_t       total_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint32_t       size_of_data;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SizeOfData
        _m02 uint32_t       signature_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SignatureSize
        _m03 uint32_t       flags;           //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 uint32_t       version;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Version
        _m05 descriptors_t  descriptors;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Descriptors
                                           
        SDK_MAGIC_PROPERTIES( "_SL_KMEM_CACHE.$", 0x28, true, 0xc4fe631b059b1403 );               
        SDK_FIXED_SIZE( sl_kmem_cache_t, 0x28 );               
    };                                     
};
#include "magic/sl_kmem_cache_t.end.hpp"
SDK_VERIFY( struct win::sl_kmem_cache_t, 0x28 );
