#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/relative_symlink_info_t.start.hpp"
namespace nt
{
    struct relative_symlink_info_t;

    // [struct _RELATIVE_SYMLINK_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct relative_symlink_info_t                                        
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                
        _m00 uint16_t                            exposed_namespace_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ExposedNamespaceLength
        _m01 uint16_t                            flags;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m02 uint16_t                            device_name_length;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DeviceNameLength
        _m03 struct nt::relative_symlink_info_t* interior_mount_point;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .InteriorMountPoint
        _m04 nt::unicode_view                    opened_name;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OpenedName
                                                                          
        SDK_MAGIC_PROPERTIES( "_RELATIVE_SYMLINK_INFO.$", 0x20, true, 0xbdf19a0b3d6a65d0 );                         
        SDK_FIXED_SIZE( relative_symlink_info_t, 0x20 );                         
    };                                                                    
};
#include "magic/relative_symlink_info_t.end.hpp"
SDK_VERIFY( struct nt::relative_symlink_info_t, 0x20 );
