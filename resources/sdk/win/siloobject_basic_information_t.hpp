#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/siloobject_basic_information_t.start.hpp"
namespace win
{
    // [struct _SILOOBJECT_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct siloobject_basic_information_t 
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t silo_id;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SiloId
        _m01 uint32_t silo_parent_id;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SiloParentId
        _m02 uint32_t number_of_processes;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfProcesses
        _m03 uint8_t  is_in_server_silo;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .IsInServerSilo
                                          
        SDK_MAGIC_PROPERTIES( "_SILOOBJECT_BASIC_INFORMATION.$", 0x10, true, 0x75c05a4cdbf853fb );                    
        SDK_FIXED_SIZE( siloobject_basic_information_t, 0x10 );                    
    };                                    
};
#include "magic/siloobject_basic_information_t.end.hpp"
SDK_VERIFY( struct win::siloobject_basic_information_t, 0x10 );
