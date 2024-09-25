#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_entry_inuse_t.hpp"
#include "pool_page_header_t.hpp"

namespace nt { struct slist_entry_t; }

#include "magic/pool_entry_t.start.hpp"
namespace ver
{
    // [struct _VI_POOL_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pool_entry_t                                 
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                              
        _m00 struct ver::pool_page_header_t page_header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PageHeader
        _m01 struct ver::pool_entry_inuse_t in_use;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InUse
        _m02 struct nt::slist_entry_t*      next_free;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextFree
                                                        
        SDK_MAGIC_PROPERTIES( "_VI_POOL_ENTRY.$", 0x20, true, 0x474365d22f9d3ac8 );            
        SDK_FIXED_SIZE( pool_entry_t, 0x20 );            
    };                                                  
};
#include "magic/pool_entry_t.end.hpp"
SDK_VERIFY( struct ver::pool_entry_t, 0x20 );
