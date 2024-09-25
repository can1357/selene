#pragma once
#include <sdkgen/support_library.hpp>
#include "../../dxgk/pte_t.hpp"

#include "magic/get_pte_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_GET_PTE]
    // => WDK 10 (NV)
    //
    struct get_pte_t                                                   
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 uint32_t                           physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint32_t                           page_table_level;        //{ +0x0004    } | .PageTableLevel
        _m02 sdk::array<uint32_t, 6>            page_table_index;        //{ +0x0008    } | .PageTableIndex
        _m03 uint8_t                            b64kb_pte;               //{ +0x0020    } | .b64KBPte
        _m04 uint32_t                           num_ptes;                //{ +0x0024    } | .NumPtes
        _m05 sdk::array<struct dxgk::pte_t, 64> pte;                     //{ +0x0028    } | .Pte
        _m06 uint32_t                           num_valid_entries;       //{ +0x0428    } | .NumValidEntries
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMT_GET_PTE.$", 0x0, false, 0x5958c79cb3a12206 );                       
        SDK_FIXED_SIZE( get_pte_t, 0x430 );                            
    };                                                                 
};
#include "magic/get_pte_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::get_pte_t, 0x430 );
