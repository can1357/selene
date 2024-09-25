#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/pool_type_t.hpp"

#include "magic/ksallocator_framing_t.start.hpp"
namespace ndis
{
    // [struct KSALLOCATOR_FRAMING]
    // => Windows 10 v1607
    //
    struct ksallocator_framing_t                     
    {                                                
        // Windows 10 v1607                          
        //                                           
        _m00 uint32_t             options_flags;       //{ +0x0000    } | .OptionsFlags
        _m01 uint32_t             requirements_flags;  //{ +0x0000    } | .RequirementsFlags
        _m02 enum nt::pool_type_t pool_type;           //{ +0x0004    } | .PoolType
        _m03 uint32_t             frames;              //{ +0x0008    } | .Frames
        _m04 uint32_t             frame_size;          //{ +0x000c    } | .FrameSize
        _m05 uint32_t             file_alignment;      //{ +0x0010    } | .FileAlignment
        _m06 int32_t              frame_pitch;         //{ +0x0010    } | .FramePitch
                                                     
        SDK_MAGIC_PROPERTIES( "KSALLOCATOR_FRAMING.$", 0x0, false, 0x5fe7d321305bbb81 );                   
        SDK_FIXED_SIZE( ksallocator_framing_t, 0x18 );                   
    };                                               
};
#include "magic/ksallocator_framing_t.end.hpp"
SDK_VERIFY( struct ndis::ksallocator_framing_t, 0x18 );
