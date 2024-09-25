#pragma once
#include <sdkgen/support_library.hpp>
#include "miracast_chunk_id_t.hpp"
#include "miracast_chunk_type_t.hpp"

#include "magic/miracast_chunk_info_t.start.hpp"
namespace dxgk
{
    // [struct DXGK_MIRACAST_CHUNK_INFO]
    // => WDK 10 (NV)
    //
    struct miracast_chunk_info_t                              
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 enum dxgk::miracast_chunk_type_t chunk_type;       //{ +0x0000    } | .ChunkType
        _m01 union dxgk::miracast_chunk_id_t  chunk_id;         //{ +0x0008    } | .ChunkId
        _m02 uint32_t                         processing_time;  //{ +0x0010    } | .ProcessingTime
        _m03 uint32_t                         encode_rate;      //{ +0x0014    } | .EncodeRate
                                                              
        SDK_NONVOL_PROPERTIES( "DXGK_MIRACAST_CHUNK_INFO.$", 0x0, false, 0x3732eeabf7ba7b1c );                
        SDK_FIXED_SIZE( miracast_chunk_info_t, 0x18 );                
    };                                                        
};
#include "magic/miracast_chunk_info_t.end.hpp"
SDK_VERIFY( struct dxgk::miracast_chunk_info_t, 0x18 );
