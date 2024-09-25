#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/system_exception_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_EXCEPTION_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_exception_information_t       
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint32_t alignment_fixup_count;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AlignmentFixupCount
        _m01 uint32_t exception_dispatch_count;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExceptionDispatchCount
        _m02 uint32_t floating_emulation_count;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FloatingEmulationCount
        _m03 uint32_t byte_word_emulation_count;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ByteWordEmulationCount
                                                
        SDK_MAGIC_PROPERTIES( "_SYSTEM_EXCEPTION_INFORMATION.$", 0x10, true, 0x53367cfa0a6614ee );                          
        SDK_FIXED_SIZE( system_exception_information_t, 0x10 );                          
    };                                          
};
#include "magic/system_exception_information_t.end.hpp"
SDK_VERIFY( struct win::system_exception_information_t, 0x10 );
