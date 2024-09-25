#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/imageload_information32_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IMAGELOAD_INFORMATION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imageload_information32_t                
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 uint32_t               image_base32;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase32
        _m01 uint32_t               image_size32;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageSize32
        _m02 uint32_t               process_id;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m03 uint32_t               image_checksum;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ImageChecksum
        _m04 uint32_t               time_date_stamp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeDateStamp
        _m05 uint8_t                signature_level;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .SignatureLevel
        _m06 uint8_t                signature_type;   //{ +0x0015    +0x0015    +0x0015    +0x0015    } | .SignatureType
        _m07 uint32_t               default_base32;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DefaultBase32
        _m08 sdk::array<wchar_t, 1> file_name;        //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .FileName
                                                    
        SDK_MAGIC_PROPERTIES( "_WMI_IMAGELOAD_INFORMATION32.$", 0x30, true, 0x4efd755ac37ecb0c );                
        SDK_FIXED_SIZE( imageload_information32_t, 0x30 );                
    };                                              
};
#include "magic/imageload_information32_t.end.hpp"
SDK_VERIFY( struct wmi::imageload_information32_t, 0x30 );
