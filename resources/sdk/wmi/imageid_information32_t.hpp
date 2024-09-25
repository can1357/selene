#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/imageid_information32_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IMAGEID_INFORMATION32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imageid_information32_t                     
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint32_t               image_base32;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase32
        _m01 uint32_t               image_size32;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ImageSize32
        _m02 uint32_t               process_id;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessId
        _m03 uint32_t               time_date_stamp;     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .TimeDateStamp
        _m04 sdk::array<wchar_t, 1> original_file_name;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OriginalFileName
                                                       
        SDK_MAGIC_PROPERTIES( "_WMI_IMAGEID_INFORMATION32.$", 0x12, true, 0x26fd1ba42e0240 );                   
        SDK_FIXED_SIZE( imageid_information32_t, 0x12 );                   
    };                                                 
};
#include "magic/imageid_information32_t.end.hpp"
SDK_VERIFY( struct wmi::imageid_information32_t, 0x12 );
