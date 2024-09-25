#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_agile_reference_via_git_t.start.hpp"
namespace win
{
    // [class CAgileReferenceViaGit]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_agile_reference_via_git_t                         
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                    
        _m00 const uint32_t dw_git_cookie;                      //{ +0x0028    +0x0030    +0x0030    +0x0030    } | ._dwGitCookie
        _m01 const uint32_t channel_process_initialized_count;  //{ +0x002c    +0x0034    +0x0034    +0x0034    } | ._channelProcessInitializedCount
                                                              
        // Windows 11                                         
        //                                                    
        _m02 const void*    original_vtable;                    //{ +0x0040    } | ._originalVtable
                                                              
        SDK_MAGIC_PROPERTIES( "CAgileReferenceViaGit.$", 0x38, true, 0x21b9987880635112 );                                  
        SDK_DYNAMIC_SIZE( c_agile_reference_via_git_t );                                  
    };                                                        
};
#include "magic/c_agile_reference_via_git_t.end.hpp"
