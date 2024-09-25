#pragma once
#include <sdkgen/support_library.hpp>
#include "get_bin_context_t.hpp"

#include "magic/get_cell_context_t.start.hpp"
namespace hv
{
    // [struct _HV_GET_CELL_CONTEXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct get_cell_context_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                            
        _m00 uint32_t                     cell;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cell
        _m01 struct hv::get_bin_context_t bin_context;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .BinContext
                                                      
        SDK_MAGIC_PROPERTIES( "_HV_GET_CELL_CONTEXT.$", 0x8, true, 0xc2324a1339a81cdb );            
        SDK_FIXED_SIZE( get_cell_context_t, 0x8 );            
    };                                                
};
#include "magic/get_cell_context_t.end.hpp"
SDK_VERIFY( struct hv::get_cell_context_t, 0x8 );
