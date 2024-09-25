#pragma once
#include <sdkgen/support_library.hpp>
#include "node_header_t.hpp"

#include "magic/state_data_t.start.hpp"
namespace wnf
{
    // [struct _WNF_STATE_DATA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct state_data_t                               
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 struct wnf::node_header_t header;          //{ +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                  allocated_size;  //{ +0x0004    +0x0004    +0x0004    } | .AllocatedSize
        _m02 uint32_t                  data_size;       //{ +0x0008    +0x0008    +0x0008    } | .DataSize
        _m03 uint32_t                  change_stamp;    //{ +0x000c    +0x000c    +0x000c    } | .ChangeStamp
                                                      
        SDK_MAGIC_PROPERTIES( "_WNF_STATE_DATA.$", 0x10, true, 0x2c1c652af5691d2e );               
        SDK_FIXED_SIZE( state_data_t, 0x10 );               
    };                                                
};
#include "magic/state_data_t.end.hpp"
SDK_VERIFY( struct wnf::state_data_t, 0x10 );
