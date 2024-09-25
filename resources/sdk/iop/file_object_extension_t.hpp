#pragma once
#include <sdkgen/support_library.hpp>
#include "priority_hint_t.hpp"

#include "magic/file_object_extension_t.start.hpp"
namespace iop
{
    // [struct _IOP_FILE_OBJECT_EXTENSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_object_extension_t                               
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                       
        _m00 uint32_t                  fo_ext_flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FoExtFlags
        _m01 sdk::array<void*, 8>      fo_ext_per_type_extension;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FoExtPerTypeExtension
        _m02 enum iop::priority_hint_t fo_io_priority_hint;        //{ +0x0048    +0x0050    +0x0058    +0x0050    } | .FoIoPriorityHint
                                                                 
        SDK_MAGIC_PROPERTIES( "_IOP_FILE_OBJECT_EXTENSION.$", 0x58, true, 0x99e251022186c4c0 );                          
        SDK_DYNAMIC_SIZE( file_object_extension_t );                          
    };                                                           
};
#include "magic/file_object_extension_t.end.hpp"
