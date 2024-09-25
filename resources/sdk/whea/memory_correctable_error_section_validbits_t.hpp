#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/memory_correctable_error_section_validbits_t.start.hpp"
namespace whea
{
    // [union _WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS]
    // => Windows 11
    //
    union memory_correctable_error_section_validbits_t
    {                                                 
        // Windows 11                         
        //                                    
        _m00 uint1_t  socket_id;                        //{ +0x0000@0  } | .SocketId
        _m01 uint1_t  channel_id;                       //{ +0x0000@1  } | .ChannelId
        _m02 uint1_t  dimm_slot;                        //{ +0x0000@2  } | .DimmSlot
        _m03 uint1_t  correctable_error_count;          //{ +0x0000@3  } | .CorrectableErrorCount
        _m04 uint64_t valid_bits;                       //{ +0x0000    } | .ValidBits
                                                      
        SDK_MAGIC_PROPERTIES( "_WHEA_MEMORY_CORRECTABLE_ERROR_SECTION_VALIDBITS.$", 0x0, false, 0xf226a2808e5acc99 );                        
        SDK_FIXED_SIZE( memory_correctable_error_section_validbits_t, 0x8 );                        
    };                                                
};
#include "magic/memory_correctable_error_section_validbits_t.end.hpp"
SDK_VERIFY( union whea::memory_correctable_error_section_validbits_t, 0x8 );
