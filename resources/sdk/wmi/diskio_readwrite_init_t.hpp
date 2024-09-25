#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diskio_readwrite_init_t.start.hpp"
namespace wmi
{
    // [struct _WMI_DISKIO_READWRITE_INIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diskio_readwrite_init_t      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 void*    irp;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Irp
        _m01 uint32_t issuing_thread_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IssuingThreadId
                                        
        SDK_MAGIC_PROPERTIES( "_WMI_DISKIO_READWRITE_INIT.$", 0x10, true, 0xef992448652de658 );                  
        SDK_FIXED_SIZE( diskio_readwrite_init_t, 0x10 );                  
    };                                  
};
#include "magic/diskio_readwrite_init_t.end.hpp"
SDK_VERIFY( struct wmi::diskio_readwrite_init_t, 0x10 );
