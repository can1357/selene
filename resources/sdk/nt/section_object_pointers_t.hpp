#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/section_object_pointers_t.start.hpp"
namespace nt
{
    // [struct _SECTION_OBJECT_POINTERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct section_object_pointers_t    
    {                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                              
        _m00 void* data_section_object;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataSectionObject
        _m01 void* shared_cache_map;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SharedCacheMap
        _m02 void* image_section_object;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ImageSectionObject
                                        
        SDK_NONVOL_PROPERTIES( "_SECTION_OBJECT_POINTERS.$", 0x18, true, 0x9f63aa20cd51088b );                     
        SDK_FIXED_SIZE( section_object_pointers_t, 0x18 );                     
    };                                  
};
#include "magic/section_object_pointers_t.end.hpp"
SDK_VERIFY( struct nt::section_object_pointers_t, 0x18 );
