#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kcontinue_type_t.hpp"

#include "magic/kcontinue_argument_t.start.hpp"
namespace win
{
    // [struct _KCONTINUE_ARGUMENT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct kcontinue_argument_t                       
    {                                                 
        // Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 enum nt::kcontinue_type_t continue_type;   //{ +0x0000    +0x0000    +0x0000    } | .ContinueType
        _m01 uint32_t                  continue_flags;  //{ +0x0004    +0x0004    +0x0004    } | .ContinueFlags
                                                      
        SDK_MAGIC_PROPERTIES( "_KCONTINUE_ARGUMENT.$", 0x18, true, 0x9a58384b00339951 );               
        SDK_FIXED_SIZE( kcontinue_argument_t, 0x18 );               
    };                                                
};
#include "magic/kcontinue_argument_t.end.hpp"
SDK_VERIFY( struct win::kcontinue_argument_t, 0x18 );
