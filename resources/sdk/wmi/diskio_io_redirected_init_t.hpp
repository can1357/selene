#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diskio_io_redirected_init_t.start.hpp"
namespace wmi
{
    // [struct _WMI_DISKIO_IO_REDIRECTED_INIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_io_redirected_init_t
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                  
        _m00 void* irp;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 void* file_key;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileKey
                                      
        SDK_MAGIC_PROPERTIES( "_WMI_DISKIO_IO_REDIRECTED_INIT.$", 0x10, true, 0xa8cc98df270f05d9 );         
        SDK_FIXED_SIZE( diskio_io_redirected_init_t, 0x10 );         
    };                                
};
#include "magic/diskio_io_redirected_init_t.end.hpp"
SDK_VERIFY( struct wmi::diskio_io_redirected_init_t, 0x10 );
