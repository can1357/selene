#pragma once
#include <sdkgen/support_library.hpp>
#include "pagetableupdatemode_t.hpp"
#include "updatepagetableflags_t.hpp"
#include "pagetableupdateaddress_t.hpp"

#include "magic/buildpagingbuffer_updatepagetable_t.start.hpp"
namespace dxgk
{
    struct pte_t;

    // [struct _DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_updatepagetable_t                                
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                              page_table_level;            //{ +0x0000    } | .PageTableLevel
        _m01 void*                                 h_allocation;                //{ +0x0008    } | .hAllocation
        _m02 struct dxgk::pagetableupdateaddress_t page_table_address;          //{ +0x0010    } | .PageTableAddress
        _m03 struct dxgk::pte_t*                   p_page_table_entries;        //{ +0x0020    } | .pPageTableEntries
        _m04 uint32_t                              start_index;                 //{ +0x0028    } | .StartIndex
        _m05 uint32_t                              num_page_table_entries;      //{ +0x002c    } | .NumPageTableEntries
        _m06 struct dxgk::updatepagetableflags_t   flags;                       //{ +0x0034    } | .Flags
        _m07 uint64_t                              driver_protection;           //{ +0x0038    } | .DriverProtection
        _m08 uint64_t                              allocation_offset_in_bytes;  //{ +0x0040    } | .AllocationOffsetInBytes
        _m09 void*                                 h_process;                   //{ +0x0048    } | .hProcess
        _m10 enum dxgk::pagetableupdatemode_t      update_mode;                 //{ +0x0050    } | .UpdateMode
        _m11 struct dxgk::pte_t*                   p_page_table_entries64kb;    //{ +0x0058    } | .pPageTableEntries64KB
        _m12 uint64_t                              first_pte_virtual_address;   //{ +0x0060    } | .FirstPteVirtualAddress
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_UPDATEPAGETABLE.$", 0x0, false, 0x488b89107622606 );                           
        SDK_FIXED_SIZE( buildpagingbuffer_updatepagetable_t, 0x68 );                           
    };                                                                        
};
#include "magic/buildpagingbuffer_updatepagetable_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_updatepagetable_t, 0x68 );
