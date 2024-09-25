#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_root_silo_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_ROOT_SILO_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_root_silo_information_t            
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 uint32_t                number_of_silos;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfSilos
        _m01 sdk::array<uint32_t, 1> silo_id_list;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SiloIdList
                                                     
        SDK_MAGIC_PROPERTIES( "_SYSTEM_ROOT_SILO_INFORMATION.$", 0x8, true, 0x1469e1588298086a );                
        SDK_FIXED_SIZE( system_root_silo_information_t, 0x8 );                
    };                                               
};
#include "magic/system_root_silo_information_t.end.hpp"
SDK_VERIFY( struct win::system_root_silo_information_t, 0x8 );
