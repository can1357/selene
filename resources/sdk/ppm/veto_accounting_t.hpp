#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/veto_accounting_t.start.hpp"
namespace ppm
{
    struct veto_entry_t;

    // [struct _PPM_VETO_ACCOUNTING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct veto_accounting_t                                   
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                     
        _m00 volatile int32_t          veto_present;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VetoPresent
        _m01 nt::list_entry_t          veto_list_head;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoListHead
        _m02 uint8_t                   cs_accounting_blocks;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CsAccountingBlocks
        _m03 uint8_t                   blocks_drips;             //{ +0x0019    +0x0019    +0x0019    +0x0019    } | .BlocksDrips
        _m04 uint32_t                  preallocated_veto_count;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .PreallocatedVetoCount
        _m05 struct ppm::veto_entry_t* preallocated_veto_list;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .PreallocatedVetoList
                                                               
        SDK_MAGIC_PROPERTIES( "_PPM_VETO_ACCOUNTING.$", 0x28, true, 0x8170c5207042ebc8 );                        
        SDK_FIXED_SIZE( veto_accounting_t, 0x28 );                        
    };                                                         
};
#include "magic/veto_accounting_t.end.hpp"
SDK_VERIFY( struct ppm::veto_accounting_t, 0x28 );
