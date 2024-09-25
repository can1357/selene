#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fsrtl_per_fileobject_context_t.start.hpp"
namespace nt
{
    // [struct _FSRTL_PER_FILEOBJECT_CONTEXT]
    // => WDK 10 (NV)
    //
    struct fsrtl_per_fileobject_context_t 
    {                                     
        // WDK 10                         
        //                                
        _m00 nt::list_entry_t links;        //{ +0x0000    } | .Links
        _m01 void*            owner_id;     //{ +0x0010    } | .OwnerId
        _m02 void*            instance_id;  //{ +0x0018    } | .InstanceId
                                          
        SDK_NONVOL_PROPERTIES( "_FSRTL_PER_FILEOBJECT_CONTEXT.$", 0x0, false, 0xe1738579eae9b284 );            
        SDK_FIXED_SIZE( fsrtl_per_fileobject_context_t, 0x20 );            
    };                                    
};
#include "magic/fsrtl_per_fileobject_context_t.end.hpp"
SDK_VERIFY( struct nt::fsrtl_per_fileobject_context_t, 0x20 );
