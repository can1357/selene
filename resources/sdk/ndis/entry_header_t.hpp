#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/entry_header_t.start.hpp"
namespace ndis
{
    struct pool_header_t;

    // [struct _NDIS_ENTRY_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct entry_header_t                                     
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                    
        _m00 struct ndis::pool_header_t* pool_header;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PoolHeader
        _m01 nt::list_entry_t            linkage;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Linkage
        _m02 uint32_t                    lookaside_proc_index;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LookasideProcIndex
                                                              
        SDK_MAGIC_PROPERTIES( "_NDIS_ENTRY_HEADER.$", 0x20, true, 0xd7842c7b274c6875 );                     
        SDK_FIXED_SIZE( entry_header_t, 0x20 );                     
    };                                                        
};
#include "magic/entry_header_t.end.hpp"
SDK_VERIFY( struct ndis::entry_header_t, 0x20 );
