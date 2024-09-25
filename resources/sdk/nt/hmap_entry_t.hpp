#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/rundown_ref_t.hpp"

#include "magic/hmap_entry_t.start.hpp"
namespace nt
{
    // [struct _HMAP_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hmap_entry_t                                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint64_t                 block_offset;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BlockOffset
        _m01 uint64_t                 permanent_bin_address;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PermanentBinAddress
        _m02 uint32_t                 mem_alloc;              //{ +0x0020    +0x0010    +0x0010    +0x0010    } | .MemAlloc
                                                            
        // Windows 10 v1607                                 
        //                                                  
        _m03 uint64_t                 temporary_bin_address;  //{ +0x0010    } | .TemporaryBinAddress
        _m04 struct ex::rundown_ref_t temporary_bin_rundown;  //{ +0x0018    } | .TemporaryBinRundown
                                                            
        SDK_MAGIC_PROPERTIES( "_HMAP_ENTRY.$", 0x18, true, 0x1483a4d83df5b357 );                      
        SDK_DYNAMIC_SIZE( hmap_entry_t );                      
    };                                                      
};
#include "magic/hmap_entry_t.end.hpp"
