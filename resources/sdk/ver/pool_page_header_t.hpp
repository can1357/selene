#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct slist_entry_t; }

#include "magic/pool_page_header_t.start.hpp"
namespace ver
{
    // [struct _VI_POOL_PAGE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_page_header_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 struct nt::slist_entry_t* next_page;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextPage
        _m01 void*                     verifier_entry;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VerifierEntry
        _m02 uint64_t                  signature;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Signature
                                                      
        SDK_MAGIC_PROPERTIES( "_VI_POOL_PAGE_HEADER.$", 0x18, true, 0xf56cfa51b18f0445 );               
        SDK_FIXED_SIZE( pool_page_header_t, 0x18 );               
    };                                                
};
#include "magic/pool_page_header_t.end.hpp"
SDK_VERIFY( struct ver::pool_page_header_t, 0x18 );
