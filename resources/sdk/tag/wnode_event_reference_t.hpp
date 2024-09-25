#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../stor/port/wnode_header_t.hpp"

#include "magic/wnode_event_reference_t.start.hpp"
namespace tag
{
    // [struct tagWNODE_EVENT_REFERENCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wnode_event_reference_t                                    
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m00 struct stor::port::wnode_header_t wnode_header;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WnodeHeader
        _m01 struct nt::guid_t                 target_guid;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TargetGuid
        _m02 uint32_t                          target_data_block_size;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .TargetDataBlockSize
        _m03 uint32_t                          target_instance_index;   //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TargetInstanceIndex
        _m04 sdk::array<wchar_t>               target_instance_name;    //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .TargetInstanceName
                                                                      
        SDK_MAGIC_PROPERTIES( "tagWNODE_EVENT_REFERENCE.$", 0x48, true, 0x608c766ea81c7a85 );                       
        SDK_FIXED_SIZE( wnode_event_reference_t, 0x48 );                       
    };                                                                
};
#include "magic/wnode_event_reference_t.end.hpp"
SDK_VERIFY( struct tag::wnode_event_reference_t, 0x48 );
