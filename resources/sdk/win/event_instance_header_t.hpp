#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/event_instance_header_t.start.hpp"
namespace win
{
    // [struct _EVENT_INSTANCE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_instance_header_t                   
    {                                                
        struct u0__class_t                           
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                       
            _m05 uint8_t  type;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
            _m06 uint8_t  level;                       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Level
            _m07 uint16_t version;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
                                                     
            SDK_MAGIC_PROPERTIES( "_EVENT_INSTANCE_HEADER.Class.$", 0x4, true, 0x10b3c74044b42bde );                           
            SDK_FIXED_SIZE( u0__class_t, 0x4 );                           
        };                                           
                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                           
        _m00 uint16_t             size;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t             field_type_flags;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .FieldTypeFlags
        _m02 uint8_t              header_type;         //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .HeaderType
        _m03 uint8_t              marker_flags;        //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .MarkerFlags
        _m04 uint32_t             version;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m08 u0__class_t          _class;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Class
        _m09 uint32_t             thread_id;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ThreadId
        _m10 uint32_t             process_id;          //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ProcessId
        _m11 int64_t              time_stamp;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TimeStamp
        _m12 uint64_t             reg_handle;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegHandle
        _m13 uint32_t             instance_id;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .InstanceId
        _m14 uint32_t             parent_instance_id;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .ParentInstanceId
        _m15 uint32_t             kernel_time;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KernelTime
        _m16 uint32_t             user_time;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UserTime
        _m17 uint64_t             processor_time;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessorTime
        _m18 uint32_t             event_id;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EventId
        _m19 uint32_t             flags;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m20 uint64_t             parent_reg_handle;   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ParentRegHandle
                                                     
        SDK_MAGIC_PROPERTIES( "_EVENT_INSTANCE_HEADER.$", 0x38, true, 0x923fdfa19dbdb255 );                   
        SDK_FIXED_SIZE( event_instance_header_t, 0x38 );                   
    };                                               
};
#include "magic/event_instance_header_t.end.hpp"
SDK_VERIFY( struct win::event_instance_header_t::u0__class_t, 0x4 );
SDK_VERIFY( struct win::event_instance_header_t, 0x38 );
