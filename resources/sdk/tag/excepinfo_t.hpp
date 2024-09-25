#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/excepinfo_t.start.hpp"
namespace tag
{
    struct excepinfo_t;

    // [struct tagEXCEPINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct excepinfo_t                                    
    {                                                     
        using pfn_deferred_fill_in_t = sdk::function<sdk::hresult(struct tag::excepinfo_t*)>*;                     
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 uint16_t                w_code;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wCode
        _m01 uint16_t                w_reserved;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wReserved
        _m02 wchar_t*                bstr_source;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bstrSource
        _m03 wchar_t*                bstr_description;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bstrDescription
        _m04 wchar_t*                bstr_help_file;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .bstrHelpFile
        _m05 uint32_t                dw_help_context;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .dwHelpContext
        _m06 void*                   pv_reserved;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pvReserved
        _m07 pfn_deferred_fill_in_t  pfn_deferred_fill_in;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .pfnDeferredFillIn
        _m08 int32_t                 scode;                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .scode
                                                          
        SDK_MAGIC_PROPERTIES( "tagEXCEPINFO.$", 0x40, true, 0x778ec416d94f26a5 );                     
        SDK_FIXED_SIZE( excepinfo_t, 0x40 );                     
    };                                                    
};
#include "magic/excepinfo_t.end.hpp"
SDK_VERIFY( struct tag::excepinfo_t, 0x40 );
