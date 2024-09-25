#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "error_type_t.hpp"
#include "error_severity_t.hpp"
#include "error_source_type_t.hpp"
#include "error_packet_flags_t.hpp"
#include "error_packet_data_format_t.hpp"

#include "magic/error_packet_v2_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_PACKET_V2]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_packet_v2_t                                         
    {                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                           
        _m00 uint32_t                              signature;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t                              version;            //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 uint32_t                              length;             //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
        _m03 union whea::error_packet_flags_t      flags;              //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 enum whea::error_type_t               error_type;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorType
        _m05 enum whea::error_severity_t           error_severity;     //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .ErrorSeverity
        _m06 uint32_t                              error_source_id;    //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorSourceId
        _m07 enum whea::error_source_type_t        error_source_type;  //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .ErrorSourceType
        _m08 struct nt::guid_t                     notify_type;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .NotifyType
        _m09 uint64_t                              context;            //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .Context
        _m10 enum whea::error_packet_data_format_t data_format;        //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DataFormat
        _m11 uint32_t                              data_offset;        //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .DataOffset
        _m12 uint32_t                              data_length;        //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .DataLength
        _m13 uint32_t                              pshed_data_offset;  //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .PshedDataOffset
        _m14 uint32_t                              pshed_data_length;  //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .PshedDataLength
                                                                     
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_PACKET_V2.$", 0x50, true, 0xf93965201d13abf2 );                  
        SDK_FIXED_SIZE( error_packet_v2_t, 0x50 );                   
    };                                                               
};
#include "magic/error_packet_v2_t.end.hpp"
SDK_VERIFY( struct whea::error_packet_v2_t, 0x50 );
