#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_datacache_t.start.hpp"
namespace ahc
{
    // [struct _AHC_SERVICE_DATACACHE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_datacache_t                 
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                     
        _m00 void*            file_handle;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FileHandle
        _m01 uint16_t         exe_type;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExeType
        _m02 uint32_t         hint_flags;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .HintFlags
        _m03 void*            process_handle;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessHandle
        _m04 nt::unicode_view file_name;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .FileName
        _m05 nt::unicode_view environment;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Environment
        _m06 nt::unicode_view package_alias;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PackageAlias
        _m07 uint32_t         custom_data_size;  //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .CustomDataSize
        _m08 uint8_t*         custom_data;       //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .CustomData
                                               
        SDK_MAGIC_PROPERTIES( "_AHC_SERVICE_DATACACHE.$", 0x58, true, 0x27df8fac3e2cba1e );                 
        SDK_FIXED_SIZE( service_datacache_t, 0x58 );                 
    };                                         
};
#include "magic/service_datacache_t.end.hpp"
SDK_VERIFY( struct ahc::service_datacache_t, 0x58 );
