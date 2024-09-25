#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvme_cdw11_feature_volatile_write_cache_t.start.hpp"
namespace stor::port
{
    // [union NVME_CDW11_FEATURE_VOLATILE_WRITE_CACHE]
    // => Windows 11
    //
    union nvme_cdw11_feature_volatile_write_cache_t
    {                                              
        // Windows 11          
        //                     
        _m00 uint1_t  wce;                           //{ +0x0000@0  } | .WCE
        _m01 uint32_t as_ulong;                      //{ +0x0000    } | .AsUlong
                                                   
        SDK_MAGIC_PROPERTIES( "NVME_CDW11_FEATURE_VOLATILE_WRITE_CACHE.$", 0x0, false, 0x5ccc57a28bf00df8 );         
        SDK_FIXED_SIZE( nvme_cdw11_feature_volatile_write_cache_t, 0x4 );         
    };                                             
};
#include "magic/nvme_cdw11_feature_volatile_write_cache_t.end.hpp"
SDK_VERIFY( union stor::port::nvme_cdw11_feature_volatile_write_cache_t, 0x4 );
