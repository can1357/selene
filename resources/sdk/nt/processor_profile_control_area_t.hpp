#pragma once
#include <sdkgen/support_library.hpp>
#include "pebs_ds_save_area_t.hpp"

#include "magic/processor_profile_control_area_t.start.hpp"
namespace nt
{
    // [struct _PROCESSOR_PROFILE_CONTROL_AREA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct processor_profile_control_area_t                   
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                    
        _m00 struct nt::pebs_ds_save_area_t pebs_ds_save_area;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PebsDsSaveArea
                                                              
        SDK_MAGIC_PROPERTIES( "_PROCESSOR_PROFILE_CONTROL_AREA.$", 0xa0, true, 0xe6bb84c3fba89fd4 );                  
        SDK_DYNAMIC_SIZE( processor_profile_control_area_t );                  
    };                                                        
};
#include "magic/processor_profile_control_area_t.end.hpp"
