#pragma once
#include <sdkgen/support_library.hpp>
#include "revision_t.hpp"
#include "timestamp_t.hpp"
#include "../nt/guid_t.hpp"
#include "error_severity_t.hpp"
#include "persistence_info_t.hpp"
#include "error_record_header_flags_t.hpp"
#include "error_record_header_validbits_t.hpp"

#include "magic/error_record_header_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_RECORD_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_record_header_t                                          
    {                                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                
        _m00 uint32_t                                    signature;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 union whea::revision_t                      revision;          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Revision
        _m02 uint32_t                                    signature_end;     //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .SignatureEnd
        _m03 uint16_t                                    section_count;     //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .SectionCount
        _m04 enum whea::error_severity_t                 severity;          //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Severity
        _m05 union whea::error_record_header_validbits_t valid_bits;        //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ValidBits
        _m06 uint32_t                                    length;            //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Length
        _m07 union whea::timestamp_t                     timestamp;         //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Timestamp
        _m08 struct nt::guid_t                           platform_id;       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .PlatformId
        _m09 struct nt::guid_t                           partition_id;      //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .PartitionId
        _m10 struct nt::guid_t                           creator_id;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .CreatorId
        _m11 struct nt::guid_t                           notify_type;       //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .NotifyType
        _m12 uint64_t                                    record_id;         //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .RecordId
        _m13 union whea::error_record_header_flags_t     flags;             //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Flags
        _m14 union whea::persistence_info_t              persistence_info;  //{ +0x006c    +0x006c    +0x006c    +0x006c    +0x006c    } | .PersistenceInfo
                                                                          
        // Windows 11                                                     
        //                                                                
        _m15 uint32_t                                    os_build_number;   //{ +0x0074    } | .OsBuildNumber
                                                                          
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_HEADER.$", 0x80, true, 0xc69bba7bf21ca5d4 );                 
        SDK_FIXED_SIZE( error_record_header_t, 0x80 );                    
    };                                                                    
};
#include "magic/error_record_header_t.end.hpp"
SDK_VERIFY( struct whea::error_record_header_t, 0x80 );
