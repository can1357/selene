#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/suspect_driver_entry_t.start.hpp"
namespace verf
{
    // [struct _VF_SUSPECT_DRIVER_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct suspect_driver_entry_t       
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::list_entry_t links;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 uint32_t         loads;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Loads
        _m02 uint32_t         unloads;    //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Unloads
        _m03 nt::unicode_view base_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseName
                                        
        SDK_MAGIC_PROPERTIES( "_VF_SUSPECT_DRIVER_ENTRY.$", 0x28, true, 0x70351eda64777eb3 );          
        SDK_FIXED_SIZE( suspect_driver_entry_t, 0x28 );          
    };                                  
};
#include "magic/suspect_driver_entry_t.end.hpp"
SDK_VERIFY( struct verf::suspect_driver_entry_t, 0x28 );
