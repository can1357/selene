#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_hypervisor_shared_page_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_HYPERVISOR_SHARED_PAGE_INFORMATION]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_hypervisor_shared_page_information_t
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                   
        _m00 void* hypervisor_shared_user_va;           //{ +0x0000    +0x0000    +0x0000    } | .HypervisorSharedUserVa
                                                      
        SDK_MAGIC_PROPERTIES( "_SYSTEM_HYPERVISOR_SHARED_PAGE_INFORMATION.$", 0x8, true, 0x21d50e6e604a230 );                          
        SDK_FIXED_SIZE( system_hypervisor_shared_page_information_t, 0x8 );                          
    };                                                
};
#include "magic/system_hypervisor_shared_page_information_t.end.hpp"
SDK_VERIFY( struct win::system_hypervisor_shared_page_information_t, 0x8 );
