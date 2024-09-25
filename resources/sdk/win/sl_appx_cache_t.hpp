#pragma once
#include <sdkgen/support_library.hpp>
#include "sl_appx_cache_value_descriptor_t.hpp"

#include "magic/sl_appx_cache_t.start.hpp"
namespace win
{
    // [struct _SL_APPX_CACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sl_appx_cache_t                 
    {                                      
        using descriptors_t = sdk::array<struct win::sl_appx_cache_value_descriptor_t, 1>;               
                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                 
        _m00 uint32_t       version;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t       flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t       data_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DataSize
        _m03 uint64_t       data_check_sum;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DataCheckSum
        _m04 descriptors_t  descriptors;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Descriptors
                                           
        SDK_MAGIC_PROPERTIES( "_SL_APPX_CACHE.$", 0x48, true, 0xd6c4a614d3790fbd );               
        SDK_FIXED_SIZE( sl_appx_cache_t, 0x48 );               
    };                                     
};
#include "magic/sl_appx_cache_t.end.hpp"
SDK_VERIFY( struct win::sl_appx_cache_t, 0x48 );
