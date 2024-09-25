#pragma once
#include <sdkgen/support_library.hpp>
#include "memory_correctable_error_section_validbits_t.hpp"

#include "magic/memory_correctable_error_data_t.start.hpp"
namespace whea
{
    // [struct _WHEA_MEMORY_CORRECTABLE_ERROR_DATA]
    // => Windows 11
    //
    struct memory_correctable_error_data_t         
    {                                              
        using whea_memory_correctable_error_section_validbits_t = union whea::memory_correctable_error_section_validbits_t;                        
        using valid_bits_t =                                      whea_memory_correctable_error_section_validbits_t ;                        
                                                   
        // Windows 11                              
        //                                         
        _m00 valid_bits_t  valid_bits;               //{ +0x0000    } | .ValidBits
        _m01 uint32_t      socket_id;                //{ +0x0008    } | .SocketId
        _m02 uint32_t      channel_id;               //{ +0x000c    } | .ChannelId
        _m03 uint32_t      dimm_slot;                //{ +0x0010    } | .DimmSlot
        _m04 uint32_t      correctable_error_count;  //{ +0x0014    } | .CorrectableErrorCount
                                                   
        SDK_MAGIC_PROPERTIES( "_WHEA_MEMORY_CORRECTABLE_ERROR_DATA.$", 0x0, false, 0xbce242cda75dc9b8 );                        
        SDK_FIXED_SIZE( memory_correctable_error_data_t, 0x18 );                        
    };                                             
};
#include "magic/memory_correctable_error_data_t.end.hpp"
SDK_VERIFY( struct whea::memory_correctable_error_data_t, 0x18 );
