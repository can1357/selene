#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/msv1_0_av_pair_t.start.hpp"
namespace nt
{
    // [struct _MSV1_0_AV_PAIR]
    // => WDK 10 (NV)
    //
    struct msv1_0_av_pair_t  
    {                        
        // WDK 10            
        //                   
        _m00 uint16_t av_id;   //{ +0x0000    } | .AvId
        _m01 uint16_t av_len;  //{ +0x0002    } | .AvLen
                             
        SDK_NONVOL_PROPERTIES( "_MSV1_0_AV_PAIR.$", 0x0, false, 0xca0156cb1bafbc83 );       
        SDK_FIXED_SIZE( msv1_0_av_pair_t, 0x4 );       
    };                       
};
#include "magic/msv1_0_av_pair_t.end.hpp"
SDK_VERIFY( struct nt::msv1_0_av_pair_t, 0x4 );
