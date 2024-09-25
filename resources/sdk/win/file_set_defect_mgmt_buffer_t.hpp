#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_set_defect_mgmt_buffer_t.start.hpp"
namespace win
{
    // [struct _FILE_SET_DEFECT_MGMT_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_set_defect_mgmt_buffer_t
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                   
        _m00 uint8_t disable;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Disable
                                        
        SDK_NONVOL_PROPERTIES( "_FILE_SET_DEFECT_MGMT_BUFFER.$", 0x1, true, 0xede882c7f7cd2335 );        
        SDK_FIXED_SIZE( file_set_defect_mgmt_buffer_t, 0x1 );        
    };                                  
};
#include "magic/file_set_defect_mgmt_buffer_t.end.hpp"
SDK_VERIFY( struct win::file_set_defect_mgmt_buffer_t, 0x1 );
