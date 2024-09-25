#pragma once
#include <sdkgen/support_library.hpp>
#include "system_bigpool_entry_t.hpp"

#include "magic/system_bigpool_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_BIGPOOL_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_bigpool_information_t       
    {                                         
        using allocated_info_t = sdk::array<struct win::system_bigpool_entry_t, 1>;               
                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 uint32_t          count;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 allocated_info_t  allocated_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AllocatedInfo
                                              
        SDK_MAGIC_PROPERTIES( "_SYSTEM_BIGPOOL_INFORMATION.$", 0x20, true, 0x3d1ebbc9fc014758 );               
        SDK_FIXED_SIZE( system_bigpool_information_t, 0x20 );               
    };                                        
};
#include "magic/system_bigpool_information_t.end.hpp"
SDK_VERIFY( struct win::system_bigpool_information_t, 0x20 );
