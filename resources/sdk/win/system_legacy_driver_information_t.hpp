#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_legacy_driver_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_LEGACY_DRIVER_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_legacy_driver_information_t
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 uint32_t         veto_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .VetoType
        _m01 nt::unicode_view veto_list;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VetoList
                                             
        SDK_MAGIC_PROPERTIES( "_SYSTEM_LEGACY_DRIVER_INFORMATION.$", 0x18, true, 0x9d23a2b622c9f34a );          
        SDK_FIXED_SIZE( system_legacy_driver_information_t, 0x18 );          
    };                                       
};
#include "magic/system_legacy_driver_information_t.end.hpp"
SDK_VERIFY( struct win::system_legacy_driver_information_t, 0x18 );
