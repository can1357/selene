#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct pephandle_t; }

#include "magic/crashdump_information_t.start.hpp"
namespace pep
{
    // [struct _PEP_CRASHDUMP_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct crashdump_information_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                          
        _m00 struct nt::pephandle_t* device_handle;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DeviceHandle
        _m01 void*                   device_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DeviceContext
                                                    
        SDK_MAGIC_PROPERTIES( "_PEP_CRASHDUMP_INFORMATION.$", 0x10, true, 0x98344486311990d9 );               
        SDK_FIXED_SIZE( crashdump_information_t, 0x10 );               
    };                                              
};
#include "magic/crashdump_information_t.end.hpp"
SDK_VERIFY( struct pep::crashdump_information_t, 0x10 );
