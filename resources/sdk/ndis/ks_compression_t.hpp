#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ks_compression_t.start.hpp"
namespace ndis
{
    // [struct KS_COMPRESSION]
    // => Windows 10 v1607
    //
    struct ks_compression_t                 
    {                                       
        // Windows 10 v1607                      
        //                                  
        _m00 uint32_t ratio_numerator;        //{ +0x0000    } | .RatioNumerator
        _m01 uint32_t ratio_denominator;      //{ +0x0004    } | .RatioDenominator
        _m02 uint32_t ratio_constant_margin;  //{ +0x0008    } | .RatioConstantMargin
                                            
        SDK_MAGIC_PROPERTIES( "KS_COMPRESSION.$", 0x0, false, 0xa1f3c0a9d7c80dee );                      
        SDK_FIXED_SIZE( ks_compression_t, 0xc );                      
    };                                      
};
#include "magic/ks_compression_t.end.hpp"
SDK_VERIFY( struct ndis::ks_compression_t, 0xc );
