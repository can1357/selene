#pragma once
#include <sdkgen/support_library.hpp>
#include "../etwi/header_t.hpp"
#include "../win/mof_field_t.hpp"

#include "magic/buffer_t.start.hpp"
namespace trace
{
    // [struct _TRACE_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct buffer_t                                           
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m00 struct etwi::header_t                  header;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 sdk::array<struct win::mof_field_t, 9> mof_field;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MofField
                                                              
        SDK_MAGIC_PROPERTIES( "_TRACE_BUFFER.$", 0xc0, true, 0x9a81c5851452a595 );          
        SDK_FIXED_SIZE( buffer_t, 0xc0 );                     
    };                                                        
};
#include "magic/buffer_t.end.hpp"
SDK_VERIFY( struct trace::buffer_t, 0xc0 );
