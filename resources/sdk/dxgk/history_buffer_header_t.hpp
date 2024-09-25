#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/history_buffer_header_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_HISTORY_BUFFER_HEADER]
    // => WDK 10 (NV)
    //
    struct history_buffer_header_t       
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t render_cb_sequence;  //{ +0x0000    } | .RenderCbSequence
        _m01 uint32_t num_timestamps;      //{ +0x0004    } | .NumTimestamps
        _m02 uint32_t private_data_size;   //{ +0x0008    } | .PrivateDataSize
                                         
        SDK_NONVOL_PROPERTIES( "_DXGK_HISTORY_BUFFER_HEADER.$", 0x0, false, 0x8f28593a651f8ce5 );                   
        SDK_FIXED_SIZE( history_buffer_header_t, 0x10 );                   
    };                                   
};
#include "magic/history_buffer_header_t.end.hpp"
SDK_VERIFY( struct dxgk::history_buffer_header_t, 0x10 );
