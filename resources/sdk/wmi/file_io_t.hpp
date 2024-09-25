#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_io_t.start.hpp"
namespace wmi
{
    // [struct _WMI_FILE_IO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct file_io_t                            
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 void*                  file_object;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileObject
        _m01 sdk::array<wchar_t, 1> file_name;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileName
                                                
        SDK_MAGIC_PROPERTIES( "_WMI_FILE_IO.$", 0x10, true, 0x7ea83415998475c1 );            
        SDK_FIXED_SIZE( file_io_t, 0x10 );            
    };                                          
};
#include "magic/file_io_t.end.hpp"
SDK_VERIFY( struct wmi::file_io_t, 0x10 );
