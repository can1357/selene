#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/delay_ack_fo_t.start.hpp"
namespace nt
{
    struct file_object_t;

    // [struct _DELAY_ACK_FO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct delay_ack_fo_t                                   
    {                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                  
        _m00 nt::list_entry_t          links;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 struct nt::file_object_t* original_file_object;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OriginalFileObject
                                                            
        SDK_MAGIC_PROPERTIES( "_DELAY_ACK_FO.$", 0x18, true, 0x7303571cc07d37bc );                     
        SDK_FIXED_SIZE( delay_ack_fo_t, 0x18 );                     
    };                                                      
};
#include "magic/delay_ack_fo_t.end.hpp"
SDK_VERIFY( struct nt::delay_ack_fo_t, 0x18 );
