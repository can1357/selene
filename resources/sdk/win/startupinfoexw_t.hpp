#pragma once
#include <sdkgen/support_library.hpp>
#include "startupinfow_t.hpp"

#include "magic/startupinfoexw_t.start.hpp"
namespace win
{
    struct proc_thread_attribute_list_t;

    // [struct _STARTUPINFOEXW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct startupinfoexw_t                                              
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                               
        _m00 struct win::startupinfow_t                startup_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .StartupInfo
        _m01 struct win::proc_thread_attribute_list_t* lp_attribute_list;  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .lpAttributeList
                                                                         
        SDK_MAGIC_PROPERTIES( "_STARTUPINFOEXW.$", 0x70, true, 0xe86cb84f58298ed7 );                  
        SDK_FIXED_SIZE( startupinfoexw_t, 0x70 );                        
    };                                                                   
};
#include "magic/startupinfoexw_t.end.hpp"
SDK_VERIFY( struct win::startupinfoexw_t, 0x70 );
