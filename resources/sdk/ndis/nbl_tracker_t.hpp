#pragma once
#include <sdkgen/support_library.hpp>
#include "nbl_tracker_bucket_t.hpp"

#include "magic/nbl_tracker_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_NBL_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct nbl_tracker_t                                              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                                            
        _m00 nt::list_entry_t                                 linkage;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Linkage
        _m01 int16_t                                          source;   //{ +0x0010@0  +0x0010@0  +0x0010@0  +0x0010@0  } | .Source
        _m02 uint16_t                                         flags;    //{ +0x0010@16 +0x0010@16 +0x0010@16 +0x0010@16 } | .Flags
        _m03 void*                                            context;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Context
        _m04 const nt::unicode_view*                          name;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Name
        _m05 sdk::array<struct ndis::nbl_tracker_bucket_t, 2> buckets;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Buckets
                                                                      
        SDK_MAGIC_PROPERTIES( "_NDIS_NBL_TRACKER.$", 0x48, true, 0x90c0e16c307d3ed8 );        
        SDK_FIXED_SIZE( nbl_tracker_t, 0x48 );                        
    };                                                                
};
#include "magic/nbl_tracker_t.end.hpp"
SDK_VERIFY( struct ndis::nbl_tracker_t, 0x48 );
