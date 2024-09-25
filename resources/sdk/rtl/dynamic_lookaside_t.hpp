#pragma once
#include <sdkgen/support_library.hpp>
#include "lookaside_t.hpp"

#include "magic/dynamic_lookaside_t.start.hpp"
namespace rtl
{
    // [struct _RTL_DYNAMIC_LOOKASIDE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dynamic_lookaside_t                                             
    {                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                                 
        _m00 uint64_t                                enabled_bucket_bitmap;  //{ +0x0000    +0x0000    +0x0000    } | .EnabledBucketBitmap
        _m01 uint32_t                                bucket_count;           //{ +0x0008    +0x0008    +0x0008    } | .BucketCount
        _m02 uint32_t                                active_bucket_count;    //{ +0x000c    +0x000c    +0x000c    } | .ActiveBucketCount
        _m03 sdk::array<struct rtl::lookaside_t, 64> buckets;                //{ +0x0040    +0x0040    +0x0040    } | .Buckets
                                                                           
        SDK_MAGIC_PROPERTIES( "_RTL_DYNAMIC_LOOKASIDE.$", 0x1040, true, 0x2709f995864ac7b8 );                      
        SDK_FIXED_SIZE( dynamic_lookaside_t, 0x1040 );                      
    };                                                                     
};
#include "magic/dynamic_lookaside_t.end.hpp"
SDK_VERIFY( struct rtl::dynamic_lookaside_t, 0x1040 );
