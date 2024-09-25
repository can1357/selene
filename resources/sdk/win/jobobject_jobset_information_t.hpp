#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/jobobject_jobset_information_t.start.hpp"
namespace win
{
    // [struct _JOBOBJECT_JOBSET_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct jobobject_jobset_information_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t member_level;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MemberLevel
                                         
        SDK_MAGIC_PROPERTIES( "_JOBOBJECT_JOBSET_INFORMATION.$", 0x4, true, 0x34acd9d70a079532 );             
        SDK_FIXED_SIZE( jobobject_jobset_information_t, 0x4 );             
    };                                   
};
#include "magic/jobobject_jobset_information_t.end.hpp"
SDK_VERIFY( struct win::jobobject_jobset_information_t, 0x4 );
