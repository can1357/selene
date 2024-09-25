#pragma once
#include <sdkgen/support_library.hpp>
#include "revision_t.hpp"
#include "../nt/guid_t.hpp"
#include "error_severity_t.hpp"
#include "error_record_section_descriptor_flags_t.hpp"
#include "error_record_section_descriptor_validbits_t.hpp"

#include "magic/error_record_section_descriptor_t.start.hpp"
namespace whea
{
    // [struct _WHEA_ERROR_RECORD_SECTION_DESCRIPTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct error_record_section_descriptor_t                                
    {                                                                       
        using whea_error_record_section_descriptor_validbits_t = union whea::error_record_section_descriptor_validbits_t;                 
        using valid_bits_t =                                     whea_error_record_section_descriptor_validbits_t ;                 
        using whea_error_record_section_descriptor_flags_t =     union whea::error_record_section_descriptor_flags_t;                 
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                                  
        _m00 uint32_t                                      section_offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionOffset
        _m01 uint32_t                                      section_length;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .SectionLength
        _m02 union whea::revision_t                        revision;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Revision
        _m03 valid_bits_t                                  valid_bits;        //{ +0x000a    +0x000a    +0x000a    +0x000a    +0x000a    } | .ValidBits
        _m04 whea_error_record_section_descriptor_flags_t  flags;             //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m05 struct nt::guid_t                             section_type;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .SectionType
        _m06 struct nt::guid_t                             fru_id;            //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .FRUId
        _m07 enum whea::error_severity_t                   section_severity;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SectionSeverity
        _m08 sdk::array<char, 20>                          fru_text;          //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .FRUText
                                                                            
        SDK_NONVOL_PROPERTIES( "_WHEA_ERROR_RECORD_SECTION_DESCRIPTOR.$", 0x48, true, 0x62bbc1de8d820712 );                 
        SDK_FIXED_SIZE( error_record_section_descriptor_t, 0x48 );                 
    };                                                                      
};
#include "magic/error_record_section_descriptor_t.end.hpp"
SDK_VERIFY( struct whea::error_record_section_descriptor_t, 0x48 );
