#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "reparse_guid_data_buffer_t.hpp"
#include "../nt/reparse_data_buffer_t.hpp"

#include "magic/reparse_data_buffer_ex_t.start.hpp"
namespace win
{
    // [struct _REPARSE_DATA_BUFFER_EX]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reparse_data_buffer_ex_t                                          
    {                                                                        
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                   
        _m00 uint32_t                               flags;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                               existing_reparse_tag;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ExistingReparseTag
        _m02 struct nt::guid_t                      existing_reparse_guid;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ExistingReparseGuid
        _m03 struct nt::reparse_data_buffer_t       reparse_data_buffer;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReparseDataBuffer
        _m04 struct win::reparse_guid_data_buffer_t reparse_guid_data_buffer;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ReparseGuidDataBuffer
                                                                             
        SDK_NONVOL_PROPERTIES( "_REPARSE_DATA_BUFFER_EX.$", 0x40, true, 0x838bce1b894b972c );                         
        SDK_FIXED_SIZE( reparse_data_buffer_ex_t, 0x40 );                         
    };                                                                       
};
#include "magic/reparse_data_buffer_ex_t.end.hpp"
SDK_VERIFY( struct win::reparse_data_buffer_ex_t, 0x40 );
