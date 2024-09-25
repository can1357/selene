#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/activation_context_data_com_progid_redirection_t.start.hpp"
namespace win
{
    // [struct _ACTIVATION_CONTEXT_DATA_COM_PROGID_REDIRECTION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct activation_context_data_com_progid_redirection_t
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                    
        _m00 uint32_t size;                                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint32_t flags;                                 //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 uint32_t configured_clsid_offset;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConfiguredClsidOffset
                                                           
        SDK_MAGIC_PROPERTIES( "_ACTIVATION_CONTEXT_DATA_COM_PROGID_REDIRECTION.$", 0xc, true, 0x2d971f8ef9c623e0 );                        
        SDK_FIXED_SIZE( activation_context_data_com_progid_redirection_t, 0xc );                        
    };                                                     
};
#include "magic/activation_context_data_com_progid_redirection_t.end.hpp"
SDK_VERIFY( struct win::activation_context_data_com_progid_redirection_t, 0xc );
