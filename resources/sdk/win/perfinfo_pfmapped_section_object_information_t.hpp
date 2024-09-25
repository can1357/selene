#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_pfmapped_section_object_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_PFMAPPED_SECTION_OBJECT_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_pfmapped_section_object_information_t
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                        
        _m00 void* section_object;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SectionObject
        _m01 void* range_base;                             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RangeBase
                                                         
        SDK_MAGIC_PROPERTIES( "_PERFINFO_PFMAPPED_SECTION_OBJECT_INFORMATION.$", 0x10, true, 0xa6f62090616a39a2 );               
        SDK_FIXED_SIZE( perfinfo_pfmapped_section_object_information_t, 0x10 );               
    };                                                   
};
#include "magic/perfinfo_pfmapped_section_object_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_pfmapped_section_object_information_t, 0x10 );
