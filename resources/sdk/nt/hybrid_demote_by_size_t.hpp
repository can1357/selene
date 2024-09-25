#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hybrid_demote_by_size_t.start.hpp"
namespace nt
{
    // [struct _HYBRID_DEMOTE_BY_SIZE]
    // => WDK 10 (NV)
    //
    struct hybrid_demote_by_size_t    
    {                                 
        // WDK 10                     
        //                            
        _m00 uint32_t version;          //{ +0x0000    } | .Version
        _m01 uint32_t size;             //{ +0x0004    } | .Size
        _m02 uint8_t  source_priority;  //{ +0x0008    } | .SourcePriority
        _m03 uint8_t  target_priority;  //{ +0x0009    } | .TargetPriority
        _m04 uint64_t lba_count;        //{ +0x0010    } | .LbaCount
                                      
        SDK_NONVOL_PROPERTIES( "_HYBRID_DEMOTE_BY_SIZE.$", 0x0, false, 0xaa6801b336c359c9 );                
        SDK_FIXED_SIZE( hybrid_demote_by_size_t, 0x18 );                
    };                                
};
#include "magic/hybrid_demote_by_size_t.end.hpp"
SDK_VERIFY( struct nt::hybrid_demote_by_size_t, 0x18 );
