#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/error_history_directory_entry_t.start.hpp"
namespace nt
{
    // [struct _ERROR_HISTORY_DIRECTORY_ENTRY]
    // => WDK 10 (NV)
    //
    struct error_history_directory_entry_t               
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint8_t                supported_buffer_id;   //{ +0x0000    } | .SupportedBufferId
        _m01 uint8_t                buffer_format;         //{ +0x0001    } | .BufferFormat
        _m02 uint4_t                buffer_source;         //{ +0x0002@0  } | .BufferSource
        _m03 sdk::array<uint8_t, 4> max_available_length;  //{ +0x0004    } | .MaxAvailableLength
                                                         
        SDK_NONVOL_PROPERTIES( "_ERROR_HISTORY_DIRECTORY_ENTRY.$", 0x0, false, 0x925c3744b7749290 );                     
        SDK_FIXED_SIZE( error_history_directory_entry_t, 0x8 );                     
    };                                                   
};
#include "magic/error_history_directory_entry_t.end.hpp"
SDK_VERIFY( struct nt::error_history_directory_entry_t, 0x8 );
