#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/container_root_info_output_t.start.hpp"
namespace win
{
    // [struct _CONTAINER_ROOT_INFO_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct container_root_info_output_t                      
    {                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                   
        _m00 uint16_t               container_root_id_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ContainerRootIdLength
        _m01 sdk::array<uint8_t, 1> container_root_id;         //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .ContainerRootId
                                                             
        SDK_NONVOL_PROPERTIES( "_CONTAINER_ROOT_INFO_OUTPUT.$", 0x4, true, 0x8391af4c471ee667 );                         
        SDK_FIXED_SIZE( container_root_info_output_t, 0x4 );                         
    };                                                       
};
#include "magic/container_root_info_output_t.end.hpp"
SDK_VERIFY( struct win::container_root_info_output_t, 0x4 );
