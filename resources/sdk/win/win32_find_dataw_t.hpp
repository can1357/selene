#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"

#include "magic/win32_find_dataw_t.start.hpp"
namespace win
{
    // [struct _WIN32_FIND_DATAW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct win32_find_dataw_t                               
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                  
        _m00 uint32_t                 dw_file_attributes;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwFileAttributes
        _m01 struct win::filetime_t   ft_creation_time;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ftCreationTime
        _m02 struct win::filetime_t   ft_last_access_time;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ftLastAccessTime
        _m03 struct win::filetime_t   ft_last_write_time;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ftLastWriteTime
        _m04 uint32_t                 n_file_size_high;       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .nFileSizeHigh
        _m05 uint32_t                 n_file_size_low;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .nFileSizeLow
        _m06 uint32_t                 dw_reserved0;           //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .dwReserved0
        _m07 uint32_t                 dw_reserved1;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .dwReserved1
        _m08 sdk::array<wchar_t, 260> c_file_name;            //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .cFileName
        _m09 sdk::array<wchar_t, 14>  c_alternate_file_name;  //{ +0x0234    +0x0234    +0x0234    +0x0234    } | .cAlternateFileName
                                                            
        SDK_MAGIC_PROPERTIES( "_WIN32_FIND_DATAW.$", 0x250, true, 0x1c494d3cb6e288d3 );                      
        SDK_FIXED_SIZE( win32_find_dataw_t, 0x250 );                      
    };                                                      
};
#include "magic/win32_find_dataw_t.end.hpp"
SDK_VERIFY( struct win::win32_find_dataw_t, 0x250 );
