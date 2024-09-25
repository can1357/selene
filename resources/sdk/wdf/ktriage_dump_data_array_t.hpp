#pragma once
#include <sdkgen/support_library.hpp>
#include "kaddress_range_t.hpp"

#include "magic/ktriage_dump_data_array_t.start.hpp"
namespace wdf
{
    // [struct _KTRIAGE_DUMP_DATA_ARRAY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ktriage_dump_data_array_t                                                  
    {                                                                                 
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                            
        _m00 nt::list_entry_t                            list;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .List
        _m01 uint32_t                                    num_blocks_used;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumBlocksUsed
        _m02 uint32_t                                    num_blocks_total;              //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumBlocksTotal
        _m03 uint32_t                                    data_size;                     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DataSize
        _m04 uint32_t                                    max_data_size;                 //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxDataSize
        _m05 uint32_t                                    component_name_buffer_length;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ComponentNameBufferLength
        _m06 uint8_t*                                    component_name;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ComponentName
        _m07 sdk::array<struct wdf::kaddress_range_t, 1> blocks;                        //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Blocks
                                                                                      
        SDK_NONVOL_PROPERTIES( "_KTRIAGE_DUMP_DATA_ARRAY.$", 0x40, true, 0xf38bb4250d6538ad );                             
        SDK_FIXED_SIZE( ktriage_dump_data_array_t, 0x40 );                             
    };                                                                                
};
#include "magic/ktriage_dump_data_array_t.end.hpp"
SDK_VERIFY( struct wdf::ktriage_dump_data_array_t, 0x40 );
