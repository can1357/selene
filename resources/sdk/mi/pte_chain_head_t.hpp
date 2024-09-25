#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/mmpte_t.hpp"

#include "magic/pte_chain_head_t.start.hpp"
namespace mi
{
    // [struct _MI_PTE_CHAIN_HEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct pte_chain_head_t               
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2         
        //                                
        _m00 struct nt::mmpte_t  flink;     //{ +0x0000    +0x0000    +0x0000    } | .Flink
        _m01 struct nt::mmpte_t  blink;     //{ +0x0008    +0x0008    +0x0008    } | .Blink
        _m02 struct nt::mmpte_t* pte_base;  //{ +0x0010    +0x0010    +0x0010    } | .PteBase
                                          
        SDK_MAGIC_PROPERTIES( "_MI_PTE_CHAIN_HEAD.$", 0x18, true, 0xe85a89e6b38f617 );         
        SDK_FIXED_SIZE( pte_chain_head_t, 0x18 );         
    };                                    
};
#include "magic/pte_chain_head_t.end.hpp"
SDK_VERIFY( struct mi::pte_chain_head_t, 0x18 );
