#pragma once
#include <sdkgen/support_library.hpp>
#include "stor_event_association_enum_t.hpp"

#include "magic/stor_log_event_details_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_LOG_EVENT_DETAILS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_log_event_details_t                                                      
    {                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                               
        _m00 uint32_t                                       interface_revision;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .InterfaceRevision
        _m01 uint32_t                                       size;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 uint32_t                                       flags;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
        _m03 enum stor::port::stor_event_association_enum_t event_association;             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .EventAssociation
        _m04 uint32_t                                       path_id;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PathId
        _m05 uint32_t                                       target_id;                     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .TargetId
        _m06 uint32_t                                       lun_id;                        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .LunId
        _m07 uint8_t                                        storport_specific_error_code;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .StorportSpecificErrorCode
        _m08 uint32_t                                       error_code;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ErrorCode
        _m09 uint32_t                                       unique_id;                     //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .UniqueId
        _m10 uint32_t                                       dump_data_size;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DumpDataSize
        _m11 void*                                          dump_data;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .DumpData
        _m12 uint32_t                                       string_count;                  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .StringCount
        _m13 wchar_t**                                      string_list;                   //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .StringList
                                                                                         
        SDK_MAGIC_PROPERTIES( "_STOR_LOG_EVENT_DETAILS.$", 0x48, true, 0x45164e32c870f0d0 );                             
        SDK_FIXED_SIZE( stor_log_event_details_t, 0x48 );                                
    };                                                                                   
};
#include "magic/stor_log_event_details_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_log_event_details_t, 0x48 );
