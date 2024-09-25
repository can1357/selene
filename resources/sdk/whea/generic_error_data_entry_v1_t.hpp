#pragma once
#include <sdkgen/support_library.hpp>
#include "revision_t.hpp"
#include "../nt/guid_t.hpp"
#include "error_severity_t.hpp"

#include "magic/generic_error_data_entry_v1_t.start.hpp"
namespace whea
{
    // [struct _WHEA_GENERIC_ERROR_DATA_ENTRY_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct generic_error_data_entry_v1_t                   
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                 
        _m00 struct nt::guid_t           section_type;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionType
        _m01 enum whea::error_severity_t error_severity;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ErrorSeverity
        _m02 union whea::revision_t      revision;           //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Revision
        _m03 uint8_t                     valid_bits;         //{ +0x0016    +0x0016    +0x0016    +0x0016    +0x0016    } | .ValidBits
        _m04 uint8_t                     flags;              //{ +0x0017    +0x0017    +0x0017    +0x0017    +0x0017    } | .Flags
        _m05 uint32_t                    error_data_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ErrorDataLength
        _m06 struct nt::guid_t           fru_id;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .FRUId
        _m07 sdk::array<uint8_t, 20>     fru_text;           //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .FRUText
        _m08 sdk::array<uint8_t, 1>      data;               //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Data
                                                           
        SDK_NONVOL_PROPERTIES( "_WHEA_GENERIC_ERROR_DATA_ENTRY_V1.$", 0x41, true, 0x3a710c6f29ae198d );                  
        SDK_FIXED_SIZE( generic_error_data_entry_v1_t, 0x41 );                  
    };                                                     
};
#include "magic/generic_error_data_entry_v1_t.end.hpp"
SDK_VERIFY( struct whea::generic_error_data_entry_v1_t, 0x41 );
