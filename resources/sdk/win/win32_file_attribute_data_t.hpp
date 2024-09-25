#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/win32_file_attribute_data_t.start.hpp"
namespace win
{
    // [struct _WIN32_FILE_ATTRIBUTE_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_file_attribute_data_t                  
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                              
        _m00 uint32_t               dw_file_attributes;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFileAttributes
        _m01 struct win::filetime_t ft_creation_time;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ftCreationTime
        _m02 struct win::filetime_t ft_last_access_time;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ftLastAccessTime
        _m03 struct win::filetime_t ft_last_write_time;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ftLastWriteTime
        _m04 uint32_t               n_file_size_high;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .nFileSizeHigh
        _m05 uint32_t               n_file_size_low;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .nFileSizeLow
                                                        
        SDK_MAGIC_PROPERTIES( "_WIN32_FILE_ATTRIBUTE_DATA.$", 0x24, true, 0xd7bf0a9700b5ee90 );                    
        SDK_FIXED_SIZE( win32_file_attribute_data_t, 0x24 );                    
    };                                                  
};
#include "magic/win32_file_attribute_data_t.end.hpp"
SDK_VERIFY( struct win::win32_file_attribute_data_t, 0x24 );
