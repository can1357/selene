#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/coverage_unloaded_module_entry_t.start.hpp"
namespace win
{
    // [struct _COVERAGE_UNLOADED_MODULE_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct coverage_unloaded_module_entry_t         
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                          
        _m00 nt::list_entry_t next_entry;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NextEntry
        _m01 nt::unicode_view base_dll_name;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BaseDllName
        _m02 nt::unicode_view full_dll_name;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FullDllName
        _m03 uint32_t         coverage_section_size;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CoverageSectionSize
        _m04 void*            coverage_section;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CoverageSection
                                                    
        SDK_MAGIC_PROPERTIES( "_COVERAGE_UNLOADED_MODULE_ENTRY.$", 0x40, true, 0x8ffa4fb0db123245 );                      
        SDK_FIXED_SIZE( coverage_unloaded_module_entry_t, 0x40 );                      
    };                                              
};
#include "magic/coverage_unloaded_module_entry_t.end.hpp"
SDK_VERIFY( struct win::coverage_unloaded_module_entry_t, 0x40 );
