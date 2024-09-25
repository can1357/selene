#pragma once
#include <sdkgen/support_library.hpp>
#include "historybufferprecision_t.hpp"

namespace dxgk { struct history_buffer_t; }

#include "magic/formathistorybuffer_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_FORMATHISTORYBUFFER]
    // => WDK 10 (NV)
    //
    struct formathistorybuffer_t                                              
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 struct dxgk::history_buffer_t*             p_history_buffer;       //{ +0x0000    } | .pHistoryBuffer
        _m01 uint32_t                                   history_buffer_size;    //{ +0x0008    } | .HistoryBufferSize
        _m02 void*                                      p_formatted_buffer;     //{ +0x0010    } | .pFormattedBuffer
        _m03 uint32_t                                   formatted_buffer_size;  //{ +0x0018    } | .FormattedBufferSize
        _m04 uint32_t                                   num_timestamps;         //{ +0x001c    } | .NumTimestamps
        _m05 struct dxgk::arg::historybufferprecision_t precision;              //{ +0x0020    } | .Precision
        _m06 uint32_t                                   offset;                 //{ +0x0024    } | .Offset
                                                                              
        SDK_NONVOL_PROPERTIES( "_DXGKARG_FORMATHISTORYBUFFER.$", 0x0, false, 0xaf2ec24457655c91 );                      
        SDK_FIXED_SIZE( formathistorybuffer_t, 0x28 );                        
    };                                                                        
};
#include "magic/formathistorybuffer_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::formathistorybuffer_t, 0x28 );
