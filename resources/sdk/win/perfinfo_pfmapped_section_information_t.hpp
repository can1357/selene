#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_pfmapped_section_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PFMAPPED_SECTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_pfmapped_section_information_t
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 void*    range_base;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RangeBase
        _m01 void*    range_end;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RangeEnd
        _m02 uint32_t creating_process_id;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CreatingProcessId
                                                  
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PFMAPPED_SECTION_INFORMATION.$", 0x18, true, 0xf0e86899a4c476e5 );                    
        SDK_FIXED_SIZE( perfinfo_pfmapped_section_information_t, 0x18 );                    
    };                                            
};
#include "magic/perfinfo_pfmapped_section_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_pfmapped_section_information_t, 0x18 );
