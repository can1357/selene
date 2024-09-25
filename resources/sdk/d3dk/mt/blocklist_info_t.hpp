#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/blocklist_info_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_BLOCKLIST_INFO]
    // => WDK 10 (NV)
    //
    struct blocklist_info_t                    
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t               size;        //{ +0x0000    } | .Size
        _m01 sdk::array<wchar_t, 1> block_list;  //{ +0x0004    } | .BlockList
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_BLOCKLIST_INFO.$", 0x0, false, 0xe180cae74482e6d9 );           
        SDK_FIXED_SIZE( blocklist_info_t, 0x8 );           
    };                                         
};
#include "magic/blocklist_info_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::blocklist_info_t, 0x8 );
