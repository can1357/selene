#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"
#include "ppl_lookaside_list_t.hpp"

#include "magic/ppl_lookaside_list_array_t.start.hpp"
namespace ndis
{
    // [struct _PPL_LOOKASIDE_LIST_ARRAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ppl_lookaside_list_array_t               
    {                                               
        using lookaside_lists_t = sdk::variant<struct ndis::ppl_lookaside_list_t**, sdk::array<struct ndis::ppl_lookaside_list_t>>;                  
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                          
        _m00 uint32_t             valid_entry_count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ValidEntryCount
        _m01 uint32_t             flags;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t             tag;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Tag
        _m03 uint32_t             lookaside_tag;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LookasideTag
        _m04 uint64_t             size;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m05 enum nt::pool_type_t pool_type;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PoolType
        _m06 uint16_t             depth;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .Depth
        _m07 lookaside_lists_t    lookaside_lists;    //{ +0x0020    +0x0020    +0x0040    +0x0020    } | .LookasideLists
                                                    
        SDK_MAGIC_PROPERTIES( "_PPL_LOOKASIDE_LIST_ARRAY.$", 0x40, true, 0xf96f7e000b14906b );                  
        SDK_FIXED_SIZE( ppl_lookaside_list_array_t, 0x40 );                  
    };                                              
};
#include "magic/ppl_lookaside_list_array_t.end.hpp"
SDK_VERIFY( struct ndis::ppl_lookaside_list_array_t, 0x40 );
