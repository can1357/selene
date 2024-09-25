#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/log_name_information_t.start.hpp"
namespace clfs
{
    // [struct _CLFS_LOG_NAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct log_name_information_t                        
    {                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                               
        _m00 uint16_t               name_length_in_bytes;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NameLengthInBytes
        _m01 sdk::array<wchar_t, 1> name;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Name
                                                         
        SDK_NONVOL_PROPERTIES( "_CLFS_LOG_NAME_INFORMATION.$", 0x4, true, 0xc99e43a9e105e51c );                     
        SDK_FIXED_SIZE( log_name_information_t, 0x4 );                     
    };                                                   
};
#include "magic/log_name_information_t.end.hpp"
SDK_VERIFY( struct clfs::log_name_information_t, 0x4 );
