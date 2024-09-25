#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/vacb_level_allocation_list_t.start.hpp"
namespace nt
{
    // [struct VACB_LEVEL_ALLOCATION_LIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct vacb_level_allocation_list_t                      
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                               
        //                                                   
        _m00 nt::list_entry_t vacb_level_list;                 //{ +0x0000    +0x0000    +0x0000    } | .VacbLevelList
        _m01 void*            vacb_level_with_bcb_list_heads;  //{ +0x0010    +0x0010    +0x0010    } | .VacbLevelWithBcbListHeads
        _m02 uint32_t         vacb_levels_allocated;           //{ +0x0018    +0x0018    +0x0018    } | .VacbLevelsAllocated
                                                             
        SDK_MAGIC_PROPERTIES( "VACB_LEVEL_ALLOCATION_LIST.$", 0x20, true, 0xbd8b2ced8f220867 );                               
        SDK_FIXED_SIZE( vacb_level_allocation_list_t, 0x20 );                               
    };                                                       
};
#include "magic/vacb_level_allocation_list_t.end.hpp"
SDK_VERIFY( struct nt::vacb_level_allocation_list_t, 0x20 );
