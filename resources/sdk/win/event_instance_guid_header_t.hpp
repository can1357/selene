#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/event_instance_guid_header_t.start.hpp"
namespace win
{
    // [struct _EVENT_INSTANCE_GUID_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct event_instance_guid_header_t              
    {                                                
        struct u0__class_t                           
        {                                            
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
            //                                       
            _m05 uint8_t  type;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
            _m06 uint8_t  level;                       //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Level
            _m07 uint16_t version;                     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
                                                     
            SDK_MAGIC_PROPERTIES( "_EVENT_INSTANCE_GUID_HEADER.Class.$", 0x4, true, 0x9396ea586fd37f25 );                           
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
        _m12 struct nt::guid_t    guid;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Guid
        _m13 uint64_t             guid_ptr;            //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GuidPtr
        _m14 uint32_t             client_context;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ClientContext
        _m15 uint32_t             flags;               //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .Flags
        _m16 uint32_t             kernel_time;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .KernelTime
        _m17 uint32_t             user_time;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UserTime
        _m18 uint64_t             processor_time;      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ProcessorTime
        _m19 uint32_t             instance_id;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .InstanceId
        _m20 uint32_t             parent_instance_id;  //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .ParentInstanceId
        _m21 struct nt::guid_t    parent_guid;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .ParentGuid
                                                     
        SDK_MAGIC_PROPERTIES( "_EVENT_INSTANCE_GUID_HEADER.$", 0x48, true, 0x9d6721fea156b56f );                   
        SDK_FIXED_SIZE( event_instance_guid_header_t, 0x48 );                   
    };                                               
};
#include "magic/event_instance_guid_header_t.end.hpp"
SDK_VERIFY( struct win::event_instance_guid_header_t::u0__class_t, 0x4 );
SDK_VERIFY( struct win::event_instance_guid_header_t, 0x48 );
