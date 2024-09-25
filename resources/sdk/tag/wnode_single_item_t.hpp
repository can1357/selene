#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/wnode_single_item_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_SINGLE_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_single_item_t                                      
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                          
        _m00 struct stor::port::wnode_header_t wnode_header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
        _m01 uint32_t                          offset_instance_name;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OffsetInstanceName
        _m02 uint32_t                          instance_index;        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .InstanceIndex
        _m03 uint32_t                          item_id;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ItemId
        _m04 uint32_t                          data_block_offset;     //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .DataBlockOffset
        _m05 uint32_t                          size_data_item;        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SizeDataItem
        _m06 sdk::array<uint8_t>               variable_data;         //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .VariableData
                                                                    
        SDK_MAGIC_PROPERTIES( "tagWNODE_SINGLE_ITEM.$", 0x48, true, 0x84f082bbae3181af );                     
        SDK_FIXED_SIZE( wnode_single_item_t, 0x48 );                     
    };                                                              
};
#include "magic/wnode_single_item_t.end.hpp"
SDK_VERIFY( struct tag::wnode_single_item_t, 0x48 );
