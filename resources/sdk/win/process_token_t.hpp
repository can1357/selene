#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/process_token_t.start.hpp"
namespace win
{
    struct hstring_t;

    // [class ProcessToken]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class process_token_t                                                       
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                      
        _m00 void*                           p_self_sid;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._pSelfSid
        _m01 void*                           p_package_sid;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pPackageSid
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                   
        //                                                                      
        _m02 struct win::hstring_t volatile* string_self_sid;                     //{ +0x0008    +0x0008    +0x0008    } | ._stringSelfSid
        _m03 struct win::hstring_t volatile* string_package_sid;                  //{ +0x0018    +0x0018    +0x0018    } | ._stringPackageSid
        _m04 struct win::hstring_t volatile* package_moniker;                     //{ +0x0020    +0x0020    +0x0020    } | ._packageMoniker
        _m05 bool                            f_has_package_moniker_been_checked;  //{ +0x0028    +0x0028    +0x0028    } | ._fHasPackageMonikerBeenChecked
        _m06 bool                            f_has_pkg_claim_been_checked;        //{ +0x004c    +0x004c    +0x004c    } | ._fHasPkgClaimBeenChecked
        _m07 uint64_t                        pkg_flags;                           //{ +0x0050    +0x0050    +0x0050    } | ._pkgFlags
        _m08 uint32_t                        session_id;                          //{ +0x0058    +0x0058    +0x0058    } | ._sessionId
                                                                                
        // Windows 10 v1607                                                     
        //                                                                      
        _m09 wchar_t*                        psz_self_sid;                        //{ +0x0008    } | ._pszSelfSid
        _m10 wchar_t*                        psz_package_sid;                     //{ +0x0018    } | ._pszPackageSid
        _m11 wchar_t*                        psz_package_moniker;                 //{ +0x0020    } | ._pszPackageMoniker
        _m12 int32_t                         f_has_package_moniker;               //{ +0x0028    } | ._fHasPackageMoniker
                                                                                
        SDK_MAGIC_PROPERTIES( "ProcessToken.$", 0x60, true, 0x5ec75cac61785586 );                                   
        SDK_DYNAMIC_SIZE( process_token_t );                                    
    };                                                                          
};
#include "magic/process_token_t.end.hpp"
