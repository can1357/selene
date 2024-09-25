#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/imageload_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IMAGELOAD_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imageload_information_t                  
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                          
        _m00 void*                  image_base;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase
        _m01 uint64_t               image_size;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageSize
        _m02 uint32_t               process_id;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 uint32_t               image_checksum;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ImageChecksum
        _m04 uint32_t               time_date_stamp;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimeDateStamp
        _m05 uint8_t                signature_level;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .SignatureLevel
        _m06 uint8_t                signature_type;   //{ +0x001d    +0x001d    +0x001d    +0x001d    } | .SignatureType
        _m07 void*                  default_base;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DefaultBase
        _m08 sdk::array<wchar_t, 1> file_name;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .FileName
                                                    
        SDK_MAGIC_PROPERTIES( "_WMI_IMAGELOAD_INFORMATION.$", 0x40, true, 0x5fe2e92b5c138b3c );                
        SDK_FIXED_SIZE( imageload_information_t, 0x40 );                
    };                                              
};
#include "magic/imageload_information_t.end.hpp"
SDK_VERIFY( struct wmi::imageload_information_t, 0x40 );
