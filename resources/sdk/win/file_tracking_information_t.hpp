#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_tracking_information_t.start.hpp"
namespace win
{
    // [struct _FILE_TRACKING_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_tracking_information_t                     
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                 
        _m00 void*               destination_file;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DestinationFile
        _m01 uint32_t            object_information_length;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ObjectInformationLength
        _m02 sdk::array<char, 1> object_information;         //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ObjectInformation
                                                           
        SDK_NONVOL_PROPERTIES( "_FILE_TRACKING_INFORMATION.$", 0x10, true, 0x1d1e822f1db6b7f2 );                          
        SDK_FIXED_SIZE( file_tracking_information_t, 0x10 );                          
    };                                                     
};
#include "magic/file_tracking_information_t.end.hpp"
SDK_VERIFY( struct win::file_tracking_information_t, 0x10 );
