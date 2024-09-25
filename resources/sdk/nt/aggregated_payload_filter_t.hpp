#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "event_payload_predicate_t.hpp"

#include "magic/aggregated_payload_filter_t.start.hpp"
namespace nt
{
    // [struct _AGGREGATED_PAYLOAD_FILTER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct aggregated_payload_filter_t                       
    {                                                        
        using predicate_table_t = sdk::array<struct nt::event_payload_predicate_t, 1>;                             
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                   
        _m00 uint12_t           magic_value;                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .MagicValue
        _m01 uint4_t            descriptor_version;            //{ +0x0000@12 +0x0000@12 +0x0000@12 +0x0000@12 } | .DescriptorVersion
        _m02 uint16_t           size;                          //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Size
        _m03 uint16_t           predicate_count;               //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PredicateCount
        _m04 uint64_t           hashed_event_id_bitmap;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HashedEventIdBitmap
        _m05 struct nt::guid_t  provider_guid;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProviderGuid
        _m06 uint16_t           each_event_table_offset;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .EachEventTableOffset
        _m07 uint16_t           each_event_table_length;       //{ +0x0022    +0x0022    +0x0022    +0x0022    } | .EachEventTableLength
        _m08 uint16_t           payload_decoder_table_offset;  //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .PayloadDecoderTableOffset
        _m09 uint16_t           payload_decoder_table_length;  //{ +0x0026    +0x0026    +0x0026    +0x0026    } | .PayloadDecoderTableLength
        _m10 uint16_t           event_filter_table_offset;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .EventFilterTableOffset
        _m11 uint16_t           event_filter_table_length;     //{ +0x002a    +0x002a    +0x002a    +0x002a    } | .EventFilterTableLength
        _m12 uint16_t           unicode_string_table_offset;   //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .UNICODEStringTableOffset
        _m13 uint16_t           unicode_string_table_length;   //{ +0x002e    +0x002e    +0x002e    +0x002e    } | .UNICODEStringTableLength
        _m14 uint16_t           ansi_string_table_offset;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ANSIStringTableOffset
        _m15 uint16_t           ansi_string_table_length;      //{ +0x0032    +0x0032    +0x0032    +0x0032    } | .ANSIStringTableLength
        _m16 predicate_table_t  predicate_table;               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .PredicateTable
                                                             
        SDK_MAGIC_PROPERTIES( "_AGGREGATED_PAYLOAD_FILTER.$", 0x50, true, 0xa100de270d0204cc );                             
        SDK_FIXED_SIZE( aggregated_payload_filter_t, 0x50 );                             
    };                                                       
};
#include "magic/aggregated_payload_filter_t.end.hpp"
SDK_VERIFY( struct nt::aggregated_payload_filter_t, 0x50 );
