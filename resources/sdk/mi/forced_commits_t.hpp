#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/forced_commits_t.start.hpp"
namespace mi
{
    // [struct _MI_FORCED_COMMITS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct forced_commits_t   
    {                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t regular;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Regular
        _m01 uint32_t wrap;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Wrap
                              
        SDK_MAGIC_PROPERTIES( "_MI_FORCED_COMMITS.$", 0x8, true, 0x9f5b50b3386b6103 );        
        SDK_FIXED_SIZE( forced_commits_t, 0x8 );        
    };                        
};
#include "magic/forced_commits_t.end.hpp"
SDK_VERIFY( struct mi::forced_commits_t, 0x8 );
