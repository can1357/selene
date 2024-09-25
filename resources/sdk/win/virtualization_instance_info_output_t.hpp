#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/virtualization_instance_info_output_t.start.hpp"
namespace win
{
    // [struct _VIRTUALIZATION_INSTANCE_INFO_OUTPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct virtualization_instance_info_output_t          
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m00 struct nt::guid_t virtualization_instance_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualizationInstanceID
                                                          
        SDK_NONVOL_PROPERTIES( "_VIRTUALIZATION_INSTANCE_INFO_OUTPUT.$", 0x10, true, 0x526f9294be907770 );                           
        SDK_FIXED_SIZE( virtualization_instance_info_output_t, 0x10 );                           
    };                                                    
};
#include "magic/virtualization_instance_info_output_t.end.hpp"
SDK_VERIFY( struct win::virtualization_instance_info_output_t, 0x10 );
