#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_image_file_execution_options_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_IMAGE_FILE_EXECUTION_OPTIONS_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_image_file_execution_options_information_t
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t flags_to_enable;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FlagsToEnable
        _m01 uint32_t flags_to_disable;                       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .FlagsToDisable
                                                            
        SDK_MAGIC_PROPERTIES( "_SYSTEM_IMAGE_FILE_EXECUTION_OPTIONS_INFORMATION.$", 0x8, true, 0xe312ef325e548f28 );                 
        SDK_FIXED_SIZE( system_image_file_execution_options_information_t, 0x8 );                 
    };                                                      
};
#include "magic/system_image_file_execution_options_information_t.end.hpp"
SDK_VERIFY( struct win::system_image_file_execution_options_information_t, 0x8 );
