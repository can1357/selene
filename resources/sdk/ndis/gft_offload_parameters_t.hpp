#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/gft_offload_parameters_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_GFT_OFFLOAD_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct gft_offload_parameters_t                               
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                        
        _m00 struct ndis::object_header_t header;                   //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     flags;                    //{ +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t                     exception_v_port_id;      //{ +0x0008    +0x0008    +0x0008    } | .ExceptionVPortId
        _m03 uint32_t                     copy_lookahead_length;    //{ +0x000c    +0x000c    +0x000c    } | .CopyLookaheadLength
        _m04 uint32_t                     sample_lookahead_length;  //{ +0x0010    +0x0010    +0x0010    } | .SampleLookaheadLength
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_GFT_OFFLOAD_PARAMETERS.$", 0x14, true, 0xc5bff5e0f6ed905e );                        
        SDK_FIXED_SIZE( gft_offload_parameters_t, 0x14 );                        
    };                                                            
};
#include "magic/gft_offload_parameters_t.end.hpp"
SDK_VERIFY( struct ndis::gft_offload_parameters_t, 0x14 );
