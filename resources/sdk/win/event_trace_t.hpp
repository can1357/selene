#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../etwi/header_t.hpp"
#include "../etw/buffer_context_t.hpp"

#include "magic/event_trace_t.start.hpp"
namespace win
{
    // [struct _EVENT_TRACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_trace_t                                     
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                   
        _m00 struct etwi::header_t        header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                     instance_id;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InstanceId
        _m02 uint32_t                     parent_instance_id;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ParentInstanceId
        _m03 struct nt::guid_t            parent_guid;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ParentGuid
        _m04 void*                        mof_data;            //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .MofData
        _m05 uint32_t                     mof_length;          //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .MofLength
        _m06 uint32_t                     client_context;      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .ClientContext
        _m07 struct etw::buffer_context_t buffer_context;      //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .BufferContext
                                                             
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE.$", 0x58, true, 0x3d8fcee6e4dd5ea8 );                   
        SDK_FIXED_SIZE( event_trace_t, 0x58 );                   
    };                                                       
};
#include "magic/event_trace_t.end.hpp"
SDK_VERIFY( struct win::event_trace_t, 0x58 );
