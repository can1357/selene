#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct mmpte_t; }

#include "magic/page_hash_t.start.hpp"
namespace mi
{
    // [struct _MI_PAGE_HASH]
    // => Windows 11
    //
    struct page_hash_t                            
    {                                             
        // Windows 11                             
        //                                        
        _m00 uint32_t            hash_value;        //{ +0x0000    } | .HashValue
        _m01 uint32_t            page_file_offset;  //{ +0x0004    } | .PageFileOffset
        _m02 struct nt::mmpte_t* owning_pte;        //{ +0x0008    } | .OwningPte
                                                  
        SDK_MAGIC_PROPERTIES( "_MI_PAGE_HASH.$", 0x0, false, 0xd8ea542be24c707b );                 
        SDK_FIXED_SIZE( page_hash_t, 0x10 );                 
    };                                            
};
#include "magic/page_hash_t.end.hpp"
SDK_VERIFY( struct mi::page_hash_t, 0x10 );
