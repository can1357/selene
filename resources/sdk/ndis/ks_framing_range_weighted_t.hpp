#pragma once
#include <sdkgen/support_library.hpp>
#include "ks_framing_range_t.hpp"

#include "magic/ks_framing_range_weighted_t.start.hpp"
namespace ndis
{
    // [struct KS_FRAMING_RANGE_WEIGHTED]
    // => Windows 10 v1607
    //
    struct ks_framing_range_weighted_t                           
    {                                                            
        // Windows 10 v1607                                      
        //                                                       
        _m00 struct ndis::ks_framing_range_t range;                //{ +0x0000    } | .Range
        _m01 uint32_t                        in_place_weight;      //{ +0x000c    } | .InPlaceWeight
        _m02 uint32_t                        not_in_place_weight;  //{ +0x0010    } | .NotInPlaceWeight
                                                                 
        SDK_MAGIC_PROPERTIES( "KS_FRAMING_RANGE_WEIGHTED.$", 0x0, false, 0x704ddf934be618be );                    
        SDK_FIXED_SIZE( ks_framing_range_weighted_t, 0x14 );                    
    };                                                           
};
#include "magic/ks_framing_range_weighted_t.end.hpp"
SDK_VERIFY( struct ndis::ks_framing_range_weighted_t, 0x14 );
