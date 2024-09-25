#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/list_entry64_t.hpp"

#include "magic/debug_data_header64_t.start.hpp"
namespace dbgkd
{
    // [struct DBGKD_DEBUG_DATA_HEADER64]
    // => WDK 10 (NV)
    //
    struct debug_data_header64_t                 
    {                                            
        // WDK 10                                
        //                                       
        _m00 struct nt::list_entry64_t list;       //{ +0x0000    } | .List
        _m01 uint32_t                  owner_tag;  //{ +0x0010    } | .OwnerTag
        _m02 uint32_t                  size;       //{ +0x0014    } | .Size
                                                 
        SDK_NONVOL_PROPERTIES( "DBGKD_DEBUG_DATA_HEADER64.$", 0x0, false, 0x507f6caca69fdf54 );          
        SDK_FIXED_SIZE( debug_data_header64_t, 0x18 );          
    };                                           
};
#include "magic/debug_data_header64_t.end.hpp"
SDK_VERIFY( struct dbgkd::debug_data_header64_t, 0x18 );
