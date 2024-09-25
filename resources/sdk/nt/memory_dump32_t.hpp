#pragma once
#include <sdkgen/support_library.hpp>
#include "full_dump32_t.hpp"
#include "dump_header32_t.hpp"
#include "triage_dump32_t.hpp"
#include "summary_dump32_t.hpp"

#include "magic/memory_dump32_t.start.hpp"
namespace nt
{
    // [struct _MEMORY_DUMP32]
    // => WDK 10 (NV)
    //
    struct memory_dump32_t                       
    {                                            
        // WDK 10                                
        //                                       
        _m00 struct nt::dump_header32_t  header;   //{ +0x0000    } | .Header
        _m01 struct nt::full_dump32_t    full;     //{ +0x1000    } | .Full
        _m02 struct nt::summary_dump32_t summary;  //{ +0x1000    } | .Summary
        _m03 struct nt::triage_dump32_t  triage;   //{ +0x1000    } | .Triage
                                                 
        SDK_NONVOL_PROPERTIES( "_MEMORY_DUMP32.$", 0x0, false, 0x63a9878e7ad26943 );        
        SDK_FIXED_SIZE( memory_dump32_t, 0x1068 );        
    };                                           
};
#include "magic/memory_dump32_t.end.hpp"
SDK_VERIFY( struct nt::memory_dump32_t, 0x1068 );
