#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/slist_header_t.hpp"

#include "magic/lfh_subsegment_cache_t.start.hpp"
namespace heap
{
    // [struct _HEAP_LFH_SUBSEGMENT_CACHE]
    // => Windows 10 v1607
    //
    struct lfh_subsegment_cache_t                            
    {                                                        
        // Windows 10 v1607                                  
        //                                                   
        _m00 sdk::array<union nt::slist_header_t, 7> s_lists;  //{ +0x0000    } | .SLists
                                                             
        SDK_MAGIC_PROPERTIES( "_HEAP_LFH_SUBSEGMENT_CACHE.$", 0x0, false, 0xbc960e71b409c04a );        
        SDK_FIXED_SIZE( lfh_subsegment_cache_t, 0x70 );        
    };                                                       
};
#include "magic/lfh_subsegment_cache_t.end.hpp"
SDK_VERIFY( struct heap::lfh_subsegment_cache_t, 0x70 );
