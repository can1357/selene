#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"

#include "magic/vs_subsegment_t.start.hpp"
namespace heap
{
    // [struct _HEAP_VS_SUBSEGMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct vs_subsegment_t                                               
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                               
        _m00 nt::list_entry_t                              list_entry;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ListEntry
        _m01 uint64_t                                      commit_bitmap;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CommitBitmap
        _m02 sdk::variant<struct rtl::srwlock_t, uint64_t> commit_lock;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CommitLock
        _m03 uint16_t                                      size;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Size
        _m04 varuint_t                                     signature;      //{ +0x0022    +0x0022@0  +0x0022@0  +0x0022@0  } | .Signature
                                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                               
        _m05 uint1_t                                       full_commit;    //{ +0x0022@15 +0x0022@15 +0x0022@15 } | .FullCommit
                                                                         
        SDK_MAGIC_PROPERTIES( "_HEAP_VS_SUBSEGMENT.$", 0x28, true, 0x6bfee39795b5847a );              
        SDK_FIXED_SIZE( vs_subsegment_t, 0x28 );                         
    };                                                                   
};
#include "magic/vs_subsegment_t.end.hpp"
SDK_VERIFY( struct heap::vs_subsegment_t, 0x28 );
