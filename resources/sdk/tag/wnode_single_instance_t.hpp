#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/wnode_header_t.hpp"

#include "magic/wnode_single_instance_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_SINGLE_INSTANCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_single_instance_t                                  
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                          
        _m00 struct stor::port::wnode_header_t wnode_header;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
        _m01 uint32_t                          offset_instance_name;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OffsetInstanceName
        _m02 uint32_t                          instance_index;        //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .InstanceIndex
        _m03 uint32_t                          data_block_offset;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .DataBlockOffset
        _m04 uint32_t                          size_data_block;       //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .SizeDataBlock
        _m05 sdk::array<uint8_t>               variable_data;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .VariableData
                                                                    
        SDK_MAGIC_PROPERTIES( "tagWNODE_SINGLE_INSTANCE.$", 0x40, true, 0x3807e45400241059 );                     
        SDK_FIXED_SIZE( wnode_single_instance_t, 0x40 );                     
    };                                                              
};
#include "magic/wnode_single_instance_t.end.hpp"
SDK_VERIFY( struct tag::wnode_single_instance_t, 0x40 );
