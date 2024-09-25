#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"

#include "magic/pool_tracker_t.start.hpp"
namespace fx
{
    struct pool_t;

    // [struct FX_POOL_TRACKER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_tracker_t                         
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                        
        _m00 nt::list_entry_t     link;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct fx::pool_t*   pool;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Pool
        _m02 uint32_t             tag;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Tag
        _m03 uint64_t             size;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Size
        _m04 enum nt::pool_type_t pool_type;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .PoolType
        _m05 void*                callers_address;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CallersAddress
                                                  
        SDK_MAGIC_PROPERTIES( "FX_POOL_TRACKER.$", 0x40, true, 0x3cec6d904fa27cf2 );                
        SDK_FIXED_SIZE( pool_tracker_t, 0x40 );                
    };                                            
};
#include "magic/pool_tracker_t.end.hpp"
SDK_VERIFY( struct fx::pool_tracker_t, 0x40 );
