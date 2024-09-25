#pragma once
#include <sdkgen/support_library.hpp>
#include "full_dump64_t.hpp"
#include "dump_header64_t.hpp"
#include "triage_dump64_t.hpp"
#include "summary_dump64_t.hpp"

#include "magic/memory_dump64_t.start.hpp"
namespace nt
{
    // [struct _MEMORY_DUMP64]
    // => WDK 10 (NV)
    //
    struct memory_dump64_t                       
    {                                            
        // WDK 10                                
        //                                       
        _m00 struct nt::dump_header64_t  header;   //{ +0x0000    } | .Header
        _m01 struct nt::full_dump64_t    full;     //{ +0x2000    } | .Full
        _m02 struct nt::summary_dump64_t summary;  //{ +0x2000    } | .Summary
        _m03 struct nt::triage_dump64_t  triage;   //{ +0x2000    } | .Triage
                                                 
        SDK_NONVOL_PROPERTIES( "_MEMORY_DUMP64.$", 0x0, false, 0x985ee90bf3bc8702 );        
        SDK_FIXED_SIZE( memory_dump64_t, 0x2080 );        
    };                                           
};
#include "magic/memory_dump64_t.end.hpp"
SDK_VERIFY( struct nt::memory_dump64_t, 0x2080 );
