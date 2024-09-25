#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/deferred_pfns_to_free_t.start.hpp"
namespace mi
{
    // [struct _MI_DEFERRED_PFNS_TO_FREE]
    // => Windows 11
    //
    struct deferred_pfns_to_free_t            
    {                                         
        // Windows 11                         
        //                                    
        _m00 nt::list_entry_t list_head;        //{ +0x0000    } | .ListHead
        _m01 uint64_t         number_of_pages;  //{ +0x0010    } | .NumberOfPages
        _m02 uint32_t         tb_flush_stamp;   //{ +0x0018    } | .TbFlushStamp
                                              
        SDK_MAGIC_PROPERTIES( "_MI_DEFERRED_PFNS_TO_FREE.$", 0x0, false, 0x9402572e3e43f846 );                
        SDK_FIXED_SIZE( deferred_pfns_to_free_t, 0x20 );                
    };                                        
};
#include "magic/deferred_pfns_to_free_t.end.hpp"
SDK_VERIFY( struct mi::deferred_pfns_to_free_t, 0x20 );
