#pragma once
#include <sdkgen/support_library.hpp>
#include "wait_object_record_t.hpp"

#include "magic/wait_multiple_t.start.hpp"
namespace wmi
{
    // [struct _WMI_WAIT_MULTIPLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wait_multiple_t                                                  
    {                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                                                  
        _m00 uint32_t                                         thread_id;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ThreadId
        _m01 uint8_t                                          wait_type;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .WaitType
        _m02 uint8_t                                          object_count;   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .ObjectCount
        _m03 sdk::array<struct wmi::wait_object_record_t, 64> object_record;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectRecord
                                                                            
        SDK_MAGIC_PROPERTIES( "_WMI_WAIT_MULTIPLE.$", 0x408, true, 0x189428246ceedbdc );              
        SDK_FIXED_SIZE( wait_multiple_t, 0x408 );                           
    };                                                                      
};
#include "magic/wait_multiple_t.end.hpp"
SDK_VERIFY( struct wmi::wait_multiple_t, 0x408 );
