#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/cert_qc_statements_ext_info_t.start.hpp"
namespace win
{
    struct cert_qc_statement_t;

    // [struct _CERT_QC_STATEMENTS_EXT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_qc_statements_ext_info_t                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                 
        _m00 uint32_t                         c_statement;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cStatement
        _m01 struct win::cert_qc_statement_t* rg_statement;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .rgStatement
                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_QC_STATEMENTS_EXT_INFO.$", 0x10, true, 0x655a7eba9a4fbb74 );             
        SDK_FIXED_SIZE( cert_qc_statements_ext_info_t, 0x10 );             
    };                                                     
};
#include "magic/cert_qc_statements_ext_info_t.end.hpp"
SDK_VERIFY( struct win::cert_qc_statements_ext_info_t, 0x10 );
