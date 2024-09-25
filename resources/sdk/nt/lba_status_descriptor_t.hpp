#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lba_status_descriptor_t.start.hpp"
namespace nt
{
    // [struct _LBA_STATUS_DESCRIPTOR]
    // => WDK 10 (NV)
    //
    struct lba_status_descriptor_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint64_t starting_lba;         //{ +0x0000    } | .StartingLBA
        _m01 uint32_t logical_block_count;  //{ +0x0008    } | .LogicalBlockCount
        _m02 uint4_t  provisioning_status;  //{ +0x000c@0  } | .ProvisioningStatus
                                          
        SDK_NONVOL_PROPERTIES( "_LBA_STATUS_DESCRIPTOR.$", 0x0, false, 0x5963eb3dc44d63b8 );                    
        SDK_FIXED_SIZE( lba_status_descriptor_t, 0x10 );                    
    };                                    
};
#include "magic/lba_status_descriptor_t.end.hpp"
SDK_VERIFY( struct nt::lba_status_descriptor_t, 0x10 );
