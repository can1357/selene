#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_caching_type_t.hpp"

#include "magic/memory_caching_requirements_t.start.hpp"
namespace nt
{
    // [struct _MEMORY_CACHING_REQUIREMENTS]
    // => Windows 11
    //
    struct memory_caching_requirements_t                        
    {                                                           
        // Windows 11                                           
        //                                                      
        _m00 uint64_t                       base_page;            //{ +0x0000    } | .BasePage
        _m01 uint64_t                       page_count;           //{ +0x0008    } | .PageCount
        _m02 enum nt::memory_caching_type_t memory_caching_type;  //{ +0x0010    } | .MemoryCachingType
                                                                
        SDK_MAGIC_PROPERTIES( "_MEMORY_CACHING_REQUIREMENTS.$", 0x0, false, 0x23ff7dec36b7c27d );                    
        SDK_FIXED_SIZE( memory_caching_requirements_t, 0x18 );                    
    };                                                          
};
#include "magic/memory_caching_requirements_t.end.hpp"
SDK_VERIFY( struct nt::memory_caching_requirements_t, 0x18 );
