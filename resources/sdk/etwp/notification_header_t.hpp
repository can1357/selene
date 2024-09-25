#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../etw/notification_type_t.hpp"

#include "magic/notification_header_t.start.hpp"
namespace etwp
{
    // [struct _ETWP_NOTIFICATION_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct notification_header_t                             
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                   
        _m00 enum etw::notification_type_t notification_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NotificationType
        _m01 uint32_t                      notification_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NotificationSize
        _m02 int32_t                       ref_count;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RefCount
        _m03 uint8_t                       reply_requested;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ReplyRequested
        _m04 uint32_t                      reply_index;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReplyIndex
        _m05 uint32_t                      timeout;            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Timeout
        _m06 uint32_t                      reply_count;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ReplyCount
        _m07 uint32_t                      notifyee_count;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NotifyeeCount
        _m08 uint64_t                      reply_handle;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReplyHandle
        _m09 void*                         reply_object;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ReplyObject
        _m10 uint32_t                      reg_index;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RegIndex
        _m11 uint32_t                      target_pid;         //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TargetPID
        _m12 uint32_t                      source_pid;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .SourcePID
        _m13 struct nt::guid_t             destination_guid;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DestinationGuid
        _m14 struct nt::guid_t             source_guid;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SourceGuid
                                                             
        SDK_MAGIC_PROPERTIES( "_ETWP_NOTIFICATION_HEADER.$", 0x48, true, 0x5202c70d9c960e78 );                  
        SDK_FIXED_SIZE( notification_header_t, 0x48 );                  
    };                                                       
};
#include "magic/notification_header_t.end.hpp"
SDK_VERIFY( struct etwp::notification_header_t, 0x48 );
