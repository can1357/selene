#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sysdbg_livedump_control_addpages_t.start.hpp"
namespace win
{
    // [union _SYSDBG_LIVEDUMP_CONTROL_ADDPAGES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union sysdbg_livedump_control_addpages_t         
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                           
        _m00 uint1_t  hypervisor_pages;                //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .HypervisorPages
        _m01 uint32_t as_ulong;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AsUlong
                                                     
        // Windows 11                                
        //                                           
        _m02 uint1_t  non_essential_hypervisor_pages;  //{ +0x0000@1  } | .NonEssentialHypervisorPages
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSDBG_LIVEDUMP_CONTROL_ADDPAGES.$", 0x4, true, 0x40870bb41c3d7d );                               
        SDK_FIXED_SIZE( sysdbg_livedump_control_addpages_t, 0x4 );                               
    };                                               
};
#include "magic/sysdbg_livedump_control_addpages_t.end.hpp"
SDK_VERIFY( union win::sysdbg_livedump_control_addpages_t, 0x4 );
