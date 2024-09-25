#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/basic_information_t.start.hpp"
namespace alpc
{
    // [struct _ALPC_BASIC_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct basic_information_t     
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint32_t flags;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t sequence_no;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SequenceNo
        _m02 void*    port_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PortContext
                                   
        SDK_MAGIC_PROPERTIES( "_ALPC_BASIC_INFORMATION.$", 0x10, true, 0x5883d2e8d2306672 );             
        SDK_FIXED_SIZE( basic_information_t, 0x10 );             
    };                             
};
#include "magic/basic_information_t.end.hpp"
SDK_VERIFY( struct alpc::basic_information_t, 0x10 );
