#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_fs_attribute_information_t.start.hpp"
namespace win
{
    // [struct _FILE_FS_ATTRIBUTE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_fs_attribute_information_t                        
    {                                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                        
        _m00 uint32_t               file_system_attributes;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .FileSystemAttributes
        _m01 int32_t                maximum_component_name_length;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .MaximumComponentNameLength
        _m02 uint32_t               file_system_name_length;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileSystemNameLength
        _m03 sdk::array<wchar_t, 1> file_system_name;               //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .FileSystemName
                                                                  
        SDK_NONVOL_PROPERTIES( "_FILE_FS_ATTRIBUTE_INFORMATION.$", 0x10, true, 0xf7943890a9330cde );                              
        SDK_FIXED_SIZE( file_fs_attribute_information_t, 0x10 );                              
    };                                                            
};
#include "magic/file_fs_attribute_information_t.end.hpp"
SDK_VERIFY( struct win::file_fs_attribute_information_t, 0x10 );
