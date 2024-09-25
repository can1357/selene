#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scrub_data_input_t.start.hpp"
namespace win
{
    // [struct _SCRUB_DATA_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scrub_data_input_t                        
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m00 uint32_t                 size;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t                 flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                 maximum_ios;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .MaximumIos
        _m03 sdk::array<uint8_t, 816> resume_context;  //{ +0x0080    +0x0050    +0x0080    +0x00c0    +0x0080    } | .ResumeContext
                                                     
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                           
        _m04 sdk::array<uint32_t, 4>  object_id;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ObjectId
                                                     
        SDK_MAGIC_PROPERTIES( "_SCRUB_DATA_INPUT.$", 0x3b0, true, 0x9cf0b43c39eb7629 );               
        SDK_DYNAMIC_SIZE( scrub_data_input_t );               
    };                                               
};
#include "magic/scrub_data_input_t.end.hpp"
