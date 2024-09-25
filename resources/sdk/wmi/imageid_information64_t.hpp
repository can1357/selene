#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/imageid_information64_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IMAGEID_INFORMATION64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imageid_information64_t                     
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 uint64_t               image_base64;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase64
        _m01 uint64_t               image_size64;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageSize64
        _m02 uint32_t               process_id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 uint32_t               time_date_stamp;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeDateStamp
        _m04 sdk::array<wchar_t, 1> original_file_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OriginalFileName
                                                       
        SDK_MAGIC_PROPERTIES( "_WMI_IMAGEID_INFORMATION64.$", 0x1a, true, 0x56b48f9039137eaf );                   
        SDK_FIXED_SIZE( imageid_information64_t, 0x1a );                   
    };                                                 
};
#include "magic/imageid_information64_t.end.hpp"
SDK_VERIFY( struct wmi::imageid_information64_t, 0x1a );
