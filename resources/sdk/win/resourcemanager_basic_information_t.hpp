#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/resourcemanager_basic_information_t.start.hpp"
namespace win
{
    // [struct _RESOURCEMANAGER_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resourcemanager_basic_information_t          
    {                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 struct nt::guid_t      resource_manager_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ResourceManagerId
        _m01 uint32_t               description_length;   //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .DescriptionLength
        _m02 sdk::array<wchar_t, 1> description;          //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Description
                                                        
        SDK_NONVOL_PROPERTIES( "_RESOURCEMANAGER_BASIC_INFORMATION.$", 0x18, true, 0x30c510663c1d9ef5 );                    
        SDK_FIXED_SIZE( resourcemanager_basic_information_t, 0x18 );                    
    };                                                  
};
#include "magic/resourcemanager_basic_information_t.end.hpp"
SDK_VERIFY( struct win::resourcemanager_basic_information_t, 0x18 );
