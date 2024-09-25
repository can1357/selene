#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pte_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PTE]
    // => WDK 10 (NV)
    //
    struct pte_t                             
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint1_t  valid;                   //{ +0x0000@0  } | .Valid
        _m01 uint1_t  zero;                    //{ +0x0000@1  } | .Zero
        _m02 uint1_t  cache_coherent;          //{ +0x0000@2  } | .CacheCoherent
        _m03 uint1_t  read_only;               //{ +0x0000@3  } | .ReadOnly
        _m04 uint1_t  no_execute;              //{ +0x0000@4  } | .NoExecute
        _m05 uint5_t  segment;                 //{ +0x0000@5  } | .Segment
        _m06 uint1_t  large_page;              //{ +0x0000@10 } | .LargePage
        _m07 uint6_t  physical_adapter_index;  //{ +0x0000@11 } | .PhysicalAdapterIndex
        _m08 uint2_t  page_table_page_size;    //{ +0x0000@17 } | .PageTablePageSize
        _m09 uint1_t  system_reserved0;        //{ +0x0000@19 } | .SystemReserved0
        _m10 uint64_t flags;                   //{ +0x0000    } | .Flags
        _m11 uint64_t page_address;            //{ +0x0008    } | .PageAddress
        _m12 uint64_t page_table_address;      //{ +0x0008    } | .PageTableAddress
                                             
        SDK_NONVOL_PROPERTIES( "_DXGK_PTE.$", 0x0, false, 0xeff58ab33f59d8bc );                       
        SDK_FIXED_SIZE( pte_t, 0x10 );                       
    };                                       
};
#include "magic/pte_t.end.hpp"
SDK_VERIFY( struct dxgk::pte_t, 0x10 );
