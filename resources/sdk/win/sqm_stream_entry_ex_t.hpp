#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sqm_stream_entry_ex_t.start.hpp"
namespace win
{
    // [struct _SQM_STREAM_ENTRY_EX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sqm_stream_entry_ex_t                   
    {                                              
        union u0_val_t                             
        {                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
            //                                     
            _m02 const wchar_t* pwsz_val;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pwszVal
            _m03 uint32_t       dw_val;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwVal
            _m04 uint64_t       qw_val;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .qwVal
                                                   
            SDK_MAGIC_PROPERTIES( "_SQM_STREAM_ENTRY_EX.val.$", 0x8, true, 0xacf217e1bc322963 );                   
            SDK_FIXED_SIZE( u0_val_t, 0x8 );                   
        };                                         
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                         
        _m00 uint32_t                    cb_struct;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbStruct
        _m01 uint32_t                    dw_type;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwType
        _m05 u0_val_t                    val;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .val
                                                   
        SDK_MAGIC_PROPERTIES( "_SQM_STREAM_ENTRY_EX.$", 0x10, true, 0x5844d52b13be00e3 );          
        SDK_FIXED_SIZE( sqm_stream_entry_ex_t, 0x10 );          
    };                                             
};
#include "magic/sqm_stream_entry_ex_t.end.hpp"
SDK_VERIFY( union win::sqm_stream_entry_ex_t::u0_val_t, 0x8 );
SDK_VERIFY( struct win::sqm_stream_entry_ex_t, 0x10 );
