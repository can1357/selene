#pragma once
#include <sdkgen/support_library.hpp>

namespace ver { struct pool_entry_t; }

#include "magic/verifier_pool_header_t.start.hpp"
namespace mi
{
    // [struct _MI_VERIFIER_POOL_HEADER]
    // => Windows 10 v1607
    //
    struct verifier_pool_header_t                          
    {                                                      
        // Windows 10 v1607                                
        //                                                 
        _m00 struct ver::pool_entry_t* verifier_pool_entry;  //{ +0x0000    } | .VerifierPoolEntry
                                                           
        SDK_MAGIC_PROPERTIES( "_MI_VERIFIER_POOL_HEADER.$", 0x0, false, 0x9144822714b4262 );                    
        SDK_FIXED_SIZE( verifier_pool_header_t, 0x8 );                    
    };                                                     
};
#include "magic/verifier_pool_header_t.end.hpp"
SDK_VERIFY( struct mi::verifier_pool_header_t, 0x8 );
