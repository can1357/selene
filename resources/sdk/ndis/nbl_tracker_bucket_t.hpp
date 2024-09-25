#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nbl_tracker_bucket_t.start.hpp"
namespace ndis
{
    struct pndis_per_processor_slot_t;

    // [struct _NDIS_NBL_TRACKER_BUCKET]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nbl_tracker_bucket_t                                       
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                            
        _m00 struct ndis::pndis_per_processor_slot_t* slot;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Slot
        _m01 int64_t                                  passive_counter;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PassiveCounter
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NBL_TRACKER_BUCKET.$", 0x10, true, 0x4ffa2d802b956fbf );                
        SDK_FIXED_SIZE( nbl_tracker_bucket_t, 0x10 );                 
    };                                                                
};
#include "magic/nbl_tracker_bucket_t.end.hpp"
SDK_VERIFY( struct ndis::nbl_tracker_bucket_t, 0x10 );
