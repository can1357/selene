#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/by_handle_file_information_t.start.hpp"
namespace win
{
    // [struct _BY_HANDLE_FILE_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct by_handle_file_information_t                     
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                  
        _m00 uint32_t               dw_file_attributes;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFileAttributes
        _m01 struct win::filetime_t ft_creation_time;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ftCreationTime
        _m02 struct win::filetime_t ft_last_access_time;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ftLastAccessTime
        _m03 struct win::filetime_t ft_last_write_time;       //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ftLastWriteTime
        _m04 uint32_t               dw_volume_serial_number;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .dwVolumeSerialNumber
        _m05 uint32_t               n_file_size_high;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .nFileSizeHigh
        _m06 uint32_t               n_file_size_low;          //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .nFileSizeLow
        _m07 uint32_t               n_number_of_links;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .nNumberOfLinks
        _m08 uint32_t               n_file_index_high;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .nFileIndexHigh
        _m09 uint32_t               n_file_index_low;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .nFileIndexLow
                                                            
        SDK_MAGIC_PROPERTIES( "_BY_HANDLE_FILE_INFORMATION.$", 0x34, true, 0x16d42c9ea2722a18 );                        
        SDK_FIXED_SIZE( by_handle_file_information_t, 0x34 );                        
    };                                                      
};
#include "magic/by_handle_file_information_t.end.hpp"
SDK_VERIFY( struct win::by_handle_file_information_t, 0x34 );
