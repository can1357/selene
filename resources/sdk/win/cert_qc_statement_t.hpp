#pragma once
#include <sdkgen/support_library.hpp>
#include "cryptoapi_blob_t.hpp"

#include "magic/cert_qc_statement_t.start.hpp"
namespace win
{
    // [struct _CERT_QC_STATEMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct cert_qc_statement_t                             
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                 
        _m00 char*                        psz_statement_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pszStatementId
        _m01 struct win::cryptoapi_blob_t statement_info;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .StatementInfo
                                                           
        SDK_MAGIC_PROPERTIES( "_CERT_QC_STATEMENT.$", 0x18, true, 0x9dd87b8c11551b53 );                 
        SDK_FIXED_SIZE( cert_qc_statement_t, 0x18 );                 
    };                                                     
};
#include "magic/cert_qc_statement_t.end.hpp"
SDK_VERIFY( struct win::cert_qc_statement_t, 0x18 );
