#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"

namespace rtl { struct splay_links_t; }

#include "magic/built_in_class_cache_t.start.hpp"
namespace win
{
    // [class BuiltInClassCache]
    // => Windows 10 v1607
    //
    class built_in_class_cache_t                                                      
    {                                                                                 
        // Windows 10 v1607                                                           
        //                                                                            
        _m00 struct rtl::srwlock_t      lock;                                           //{ +0x0000    } | ._lock
        _m01 int64_t                    activation_store_sequence_for_current_results;  //{ +0x0008    } | ._activationStoreSequenceForCurrentResults
        _m02 struct rtl::splay_links_t* p_root;                                         //{ +0x0010    } | ._pRoot
                                                                                      
        SDK_MAGIC_PROPERTIES( "BuiltInClassCache.$", 0x0, false, 0x6f6966cd2a6e088c );                                              
        SDK_FIXED_SIZE( built_in_class_cache_t, 0x18 );                                              
    };                                                                                
};
#include "magic/built_in_class_cache_t.end.hpp"
SDK_VERIFY( class win::built_in_class_cache_t, 0x18 );
