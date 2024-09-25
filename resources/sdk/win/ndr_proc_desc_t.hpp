#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_proc_header_exts_t.hpp"
#include "interpreter_opt_flags_t.hpp"

#include "magic/ndr_proc_desc_t.start.hpp"
namespace win
{
    // [struct _NDR_PROC_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_proc_desc_t                                          
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 uint16_t                            client_buffer_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ClientBufferSize
        _m01 uint16_t                            server_buffer_size;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ServerBufferSize
        _m02 struct win::interpreter_opt_flags_t oi2_flags;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Oi2Flags
        _m03 uint8_t                             number_params;       //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .NumberParams
        _m04 struct win::ndr_proc_header_exts_t  ndr_exts;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NdrExts
                                                                    
        SDK_MAGIC_PROPERTIES( "_NDR_PROC_DESC.$", 0xe, true, 0x35029464c0e2c574 );                   
        SDK_FIXED_SIZE( ndr_proc_desc_t, 0xe );                     
    };                                                              
};
#include "magic/ndr_proc_desc_t.end.hpp"
SDK_VERIFY( struct win::ndr_proc_desc_t, 0xe );
