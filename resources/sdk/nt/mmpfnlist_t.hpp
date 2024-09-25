#pragma once
#include <sdkgen/support_library.hpp>
#include "mmpfn_t.hpp"
#include "mmlists_t.hpp"

#include "magic/mmpfnlist_t.start.hpp"
namespace nt
{
    // [struct _MMPFNLIST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mmpfnlist_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                   
        _m00 volatile uint64_t  total;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Total
        _m01 enum nt::mmlists_t list_name;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ListName
        _m02 uint64_t           flink;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Flink
        _m03 uint64_t           blink;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Blink
        _m04 varint_t           lock;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Lock
                                             
        // Windows 11                        
        //                                   
        _m05 struct nt::mmpfn_t embedded_pfn;  //{ +0x0028    } | .EmbeddedPfn
                                             
        SDK_MAGIC_PROPERTIES( "_MMPFNLIST.$", 0x28, true, 0x22ae06fcaa0b3f69 );             
        SDK_DYNAMIC_SIZE( mmpfnlist_t );             
    };                                       
};
#include "magic/mmpfnlist_t.end.hpp"
