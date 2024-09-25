#pragma once
#include <sdkgen/support_library.hpp>
#include "ks_compression_t.hpp"
#include "ks_framing_item_t.hpp"

#include "magic/ksallocator_framing_ex_t.start.hpp"
namespace ndis
{
    // [struct KSALLOCATOR_FRAMING_EX]
    // => Windows 10 v1607
    //
    struct ksallocator_framing_ex_t                                           
    {                                                                         
        // Windows 10 v1607                                                   
        //                                                                    
        _m00 uint32_t                                      count_items;         //{ +0x0000    } | .CountItems
        _m01 uint32_t                                      pin_flags;           //{ +0x0004    } | .PinFlags
        _m02 struct ndis::ks_compression_t                 output_compression;  //{ +0x0008    } | .OutputCompression
        _m03 uint32_t                                      pin_weight;          //{ +0x0014    } | .PinWeight
        _m04 sdk::array<struct ndis::ks_framing_item_t, 1> framing_item;        //{ +0x0018    } | .FramingItem
                                                                              
        SDK_MAGIC_PROPERTIES( "KSALLOCATOR_FRAMING_EX.$", 0x0, false, 0xc637cf4d32398306 );                   
        SDK_FIXED_SIZE( ksallocator_framing_ex_t, 0x70 );                     
    };                                                                        
};
#include "magic/ksallocator_framing_ex_t.end.hpp"
SDK_VERIFY( struct ndis::ksallocator_framing_ex_t, 0x70 );
