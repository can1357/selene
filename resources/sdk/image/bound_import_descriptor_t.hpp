#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bound_import_descriptor_t.start.hpp"
namespace image
{
    // [struct _IMAGE_BOUND_IMPORT_DESCRIPTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bound_import_descriptor_t                  
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                            
        _m00 uint32_t time_date_stamp;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TimeDateStamp
        _m01 uint16_t offset_module_name;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .OffsetModuleName
        _m02 uint16_t number_of_module_forwarder_refs;  //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumberOfModuleForwarderRefs
                                                      
        SDK_MAGIC_PROPERTIES( "_IMAGE_BOUND_IMPORT_DESCRIPTOR.$", 0x8, true, 0x7bafdb851d28a86c );                                
        SDK_FIXED_SIZE( bound_import_descriptor_t, 0x8 );                                
    };                                                
};
#include "magic/bound_import_descriptor_t.end.hpp"
SDK_VERIFY( struct image::bound_import_descriptor_t, 0x8 );
