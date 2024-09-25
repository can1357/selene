#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/win32_find_dataa_t.start.hpp"
namespace win
{
    // [struct _WIN32_FIND_DATAA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_find_dataa_t                             
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 uint32_t               dw_file_attributes;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFileAttributes
        _m01 struct win::filetime_t ft_creation_time;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ftCreationTime
        _m02 struct win::filetime_t ft_last_access_time;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ftLastAccessTime
        _m03 struct win::filetime_t ft_last_write_time;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ftLastWriteTime
        _m04 uint32_t               n_file_size_high;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .nFileSizeHigh
        _m05 uint32_t               n_file_size_low;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .nFileSizeLow
        _m06 uint32_t               dw_reserved0;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwReserved0
        _m07 uint32_t               dw_reserved1;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwReserved1
        _m08 sdk::array<char, 260>  c_file_name;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .cFileName
        _m09 sdk::array<char, 14>   c_alternate_file_name;  //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .cAlternateFileName
                                                          
        SDK_MAGIC_PROPERTIES( "_WIN32_FIND_DATAA.$", 0x140, true, 0xbdbf6762f96ed5b1 );                      
        SDK_FIXED_SIZE( win32_find_dataa_t, 0x140 );                      
    };                                                    
};
#include "magic/win32_find_dataa_t.end.hpp"
SDK_VERIFY( struct win::win32_find_dataa_t, 0x140 );
