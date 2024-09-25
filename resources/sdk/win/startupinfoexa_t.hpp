#pragma once
#include <sdkgen/support_library.hpp>
#include "startupinfoa_t.hpp"

#include "magic/startupinfoexa_t.start.hpp"
namespace win
{
    struct proc_thread_attribute_list_t;

    // [struct _STARTUPINFOEXA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct startupinfoexa_t                                              
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                               
        _m00 struct win::startupinfoa_t                startup_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartupInfo
        _m01 struct win::proc_thread_attribute_list_t* lp_attribute_list;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .lpAttributeList
                                                                         
        SDK_MAGIC_PROPERTIES( "_STARTUPINFOEXA.$", 0x70, true, 0xb569fda9ef20891c );                  
        SDK_FIXED_SIZE( startupinfoexa_t, 0x70 );                        
    };                                                                   
};
#include "magic/startupinfoexa_t.end.hpp"
SDK_VERIFY( struct win::startupinfoexa_t, 0x70 );
