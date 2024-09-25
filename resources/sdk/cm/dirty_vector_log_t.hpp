#pragma once
#include <sdkgen/support_library.hpp>
#include "dirty_vector_log_entry_t.hpp"

#include "magic/dirty_vector_log_t.start.hpp"
namespace cm
{
    // [struct _CM_DIRTY_VECTOR_LOG]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dirty_vector_log_t       
    {                               
        using log_t = sdk::array<struct cm::dirty_vector_log_entry_t, 16>;     
                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                          
        _m00 volatile uint32_t next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Next
        _m01 uint32_t          size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Size
        _m02 log_t             log;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Log
                                    
        SDK_MAGIC_PROPERTIES( "_CM_DIRTY_VECTOR_LOG.$", 0x488, true, 0x45da0adcf3adc07 );     
        SDK_FIXED_SIZE( dirty_vector_log_t, 0x488 );     
    };                              
};
#include "magic/dirty_vector_log_t.end.hpp"
SDK_VERIFY( struct cm::dirty_vector_log_t, 0x488 );
