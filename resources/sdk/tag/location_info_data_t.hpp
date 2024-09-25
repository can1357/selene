#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/location_info_data_t.start.hpp"
namespace tag
{
    // [struct tagLocationInfoData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct location_info_data_t    
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 wchar_t* machine_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .machineName
        _m01 uint32_t process_id;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .processId
        _m02 uint32_t apartment_id;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .apartmentId
        _m03 uint32_t context_id;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .contextId
                                   
        SDK_MAGIC_PROPERTIES( "tagLocationInfoData.$", 0x18, true, 0xb9acdf3c1a624838 );             
        SDK_FIXED_SIZE( location_info_data_t, 0x18 );             
    };                             
};
#include "magic/location_info_data_t.end.hpp"
SDK_VERIFY( struct tag::location_info_data_t, 0x18 );
