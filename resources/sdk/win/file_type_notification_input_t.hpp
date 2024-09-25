#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/file_type_notification_input_t.start.hpp"
namespace win
{
    // [struct _FILE_TYPE_NOTIFICATION_INPUT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_type_notification_input_t                        
    {                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                       
        _m00 uint32_t                         flags;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                         num_file_type_i_ds;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .NumFileTypeIDs
        _m02 sdk::array<struct nt::guid_t, 1> file_type_id;        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .FileTypeID
                                                                 
        SDK_NONVOL_PROPERTIES( "_FILE_TYPE_NOTIFICATION_INPUT.$", 0x18, true, 0x96cfbf8a254fae5b );                   
        SDK_FIXED_SIZE( file_type_notification_input_t, 0x18 );                   
    };                                                           
};
#include "magic/file_type_notification_input_t.end.hpp"
SDK_VERIFY( struct win::file_type_notification_input_t, 0x18 );
