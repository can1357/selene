#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/reparse_guid_data_buffer_t.start.hpp"
namespace win
{
    // [struct _REPARSE_GUID_DATA_BUFFER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reparse_guid_data_buffer_t                                      
    {                                                                      
        struct u0_generic_reparse_buffer_t                                 
        {                                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
            //                                                             
            _m03 sdk::array<uint8_t, 1> data_buffer;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataBuffer
                                                                           
            SDK_NONVOL_PROPERTIES( "_REPARSE_GUID_DATA_BUFFER.GenericReparseBuffer.$", 0x1, true, 0x482c1ec9429d46a9 );                                   
            SDK_FIXED_SIZE( u0_generic_reparse_buffer_t, 0x1 );                                   
        };                                                                 
                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                 
        _m00 uint32_t                               reparse_tag;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReparseTag
        _m01 uint16_t                               reparse_data_length;     //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ReparseDataLength
        _m02 struct nt::guid_t                      reparse_guid;            //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ReparseGuid
        _m04 u0_generic_reparse_buffer_t            generic_reparse_buffer;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .GenericReparseBuffer
                                                                           
        SDK_NONVOL_PROPERTIES( "_REPARSE_GUID_DATA_BUFFER.$", 0x1c, true, 0x711bf6b091e08861 );                       
        SDK_FIXED_SIZE( reparse_guid_data_buffer_t, 0x1c );                       
    };                                                                     
};
#include "magic/reparse_guid_data_buffer_t.end.hpp"
SDK_VERIFY( struct win::reparse_guid_data_buffer_t::u0_generic_reparse_buffer_t, 0x1 );
SDK_VERIFY( struct win::reparse_guid_data_buffer_t, 0x1c );
