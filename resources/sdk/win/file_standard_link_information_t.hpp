#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_standard_link_information_t.start.hpp"
namespace win
{
    // [struct _FILE_STANDARD_LINK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_standard_link_information_t      
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t number_of_accessible_links;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfAccessibleLinks
        _m01 uint32_t total_number_of_links;       //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TotalNumberOfLinks
        _m02 uint8_t  delete_pending;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DeletePending
        _m03 uint8_t  directory;                   //{ +0x0009    +0x0009    +0x0009    +0x0009    +0x0009    } | .Directory
                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_STANDARD_LINK_INFORMATION.$", 0xc, true, 0x6e71963d31ac4815 );                           
        SDK_FIXED_SIZE( file_standard_link_information_t, 0xc );                           
    };                                           
};
#include "magic/file_standard_link_information_t.end.hpp"
SDK_VERIFY( struct win::file_standard_link_information_t, 0xc );
