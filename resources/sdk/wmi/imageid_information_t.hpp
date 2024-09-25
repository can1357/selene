#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/imageid_information_t.start.hpp"
namespace wmi
{
    // [struct _WMI_IMAGEID_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct imageid_information_t                       
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                             
        _m00 void*                  image_base;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ImageBase
        _m01 uint64_t               image_size;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ImageSize
        _m02 uint32_t               process_id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessId
        _m03 uint32_t               time_date_stamp;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TimeDateStamp
        _m04 sdk::array<wchar_t, 1> original_file_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OriginalFileName
                                                       
        SDK_MAGIC_PROPERTIES( "_WMI_IMAGEID_INFORMATION.$", 0x1a, true, 0x7bbd2eadac819225 );                   
        SDK_FIXED_SIZE( imageid_information_t, 0x1a );                   
    };                                                 
};
#include "magic/imageid_information_t.end.hpp"
SDK_VERIFY( struct wmi::imageid_information_t, 0x1a );
