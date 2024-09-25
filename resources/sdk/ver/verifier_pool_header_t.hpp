#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_pool_header_t.start.hpp"
namespace ver
{
    struct pool_entry_t;

    // [struct _VI_VERIFIER_POOL_HEADER]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_pool_header_t                          
    {                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                 
        _m00 struct ver::pool_entry_t* verifier_pool_entry;  //{ +0x0000    +0x0000    +0x0000    } | .VerifierPoolEntry
                                                           
        SDK_MAGIC_PROPERTIES( "_VI_VERIFIER_POOL_HEADER.$", 0x8, true, 0xce0e7140aedc19cf );                    
        SDK_FIXED_SIZE( verifier_pool_header_t, 0x8 );                    
    };                                                     
};
#include "magic/verifier_pool_header_t.end.hpp"
SDK_VERIFY( struct ver::verifier_pool_header_t, 0x8 );
