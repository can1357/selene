#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_workload_class_update_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_WORKLOAD_CLASS_UPDATE]
    // => Windows 11
    //
    struct perfinfo_workload_class_update_t
    {                                      
        // Windows 11           
        //                      
        _m00 uint32_t thread_id;             //{ +0x0000    } | .ThreadId
        _m01 uint16_t flags;                 //{ +0x0004    } | .Flags
        _m02 uint8_t  _class;                //{ +0x0006    } | .Class
                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_WORKLOAD_CLASS_UPDATE.$", 0x0, false, 0xe6f6d80dbe823b9 );          
        SDK_FIXED_SIZE( perfinfo_workload_class_update_t, 0x8 );          
    };                                     
};
#include "magic/perfinfo_workload_class_update_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_workload_class_update_t, 0x8 );
