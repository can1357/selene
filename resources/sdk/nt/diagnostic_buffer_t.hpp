#pragma once
#include <sdkgen/support_library.hpp>
#include "requester_type_t.hpp"

#include "magic/diagnostic_buffer_t.start.hpp"
namespace nt
{
    // [struct _DIAGNOSTIC_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct diagnostic_buffer_t                                   
    {                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                       
        _m00 uint64_t                  size;                       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 enum nt::requester_type_t caller_type;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .CallerType
        _m02 uint64_t                  process_image_name_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcessImageNameOffset
        _m03 uint32_t                  process_id;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcessId
        _m04 uint32_t                  service_tag;                //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .ServiceTag
        _m05 uint64_t                  device_description_offset;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DeviceDescriptionOffset
        _m06 uint64_t                  device_path_offset;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DevicePathOffset
        _m07 uint64_t                  reason_offset;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReasonOffset
                                                                 
        SDK_MAGIC_PROPERTIES( "_DIAGNOSTIC_BUFFER.$", 0x28, true, 0x3790a60c110d48c2 );                          
        SDK_FIXED_SIZE( diagnostic_buffer_t, 0x28 );                          
    };                                                           
};
#include "magic/diagnostic_buffer_t.end.hpp"
SDK_VERIFY( struct nt::diagnostic_buffer_t, 0x28 );
