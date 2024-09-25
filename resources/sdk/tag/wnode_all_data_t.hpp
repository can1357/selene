#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"
#include "../win/offsetinstancedataandlength_t.hpp"

#include "magic/wnode_all_data_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_ALL_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_all_data_t                                                     
    {                                                                           
        using offset_instance_data_and_length_t = sdk::array<struct win::offsetinstancedataandlength_t>;                                
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                                                      
        _m00 struct stor::port::wnode_header_t  wnode_header;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
        _m01 uint32_t                           data_block_offset;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DataBlockOffset
        _m02 uint32_t                           instance_count;                   //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .InstanceCount
        _m03 uint32_t                           offset_instance_name_offsets;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OffsetInstanceNameOffsets
        _m04 uint32_t                           fixed_instance_size;              //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .FixedInstanceSize
        _m05 offset_instance_data_and_length_t  offset_instance_data_and_length;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .OffsetInstanceDataAndLength
                                                                                
        SDK_MAGIC_PROPERTIES( "tagWNODE_ALL_DATA.$", 0x48, true, 0x8a1e460e520a66c7 );                                
        SDK_FIXED_SIZE( wnode_all_data_t, 0x48 );                                
    };                                                                          
};
#include "magic/wnode_all_data_t.end.hpp"
SDK_VERIFY( struct tag::wnode_all_data_t, 0x48 );
