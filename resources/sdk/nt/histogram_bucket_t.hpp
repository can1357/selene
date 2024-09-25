#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/histogram_bucket_t.start.hpp"
namespace nt
{
    // [struct _HISTOGRAM_BUCKET]
    // => WDK 10 (NV)
    //
    struct histogram_bucket_t
    {                        
        // WDK 10            
        //                   
        _m00 uint32_t reads;   //{ +0x0000    } | .Reads
        _m01 uint32_t writes;  //{ +0x0004    } | .Writes
                             
        SDK_NONVOL_PROPERTIES( "_HISTOGRAM_BUCKET.$", 0x0, false, 0xdda5a16c88bc8ccf );       
        SDK_FIXED_SIZE( histogram_bucket_t, 0x8 );       
    };                       
};
#include "magic/histogram_bucket_t.end.hpp"
SDK_VERIFY( struct nt::histogram_bucket_t, 0x8 );
