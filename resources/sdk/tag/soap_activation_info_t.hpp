#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/soap_activation_info_t.start.hpp"
namespace tag
{
    // [struct tagSOAP_ACTIVATION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct soap_activation_info_t        
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 int32_t  b_soap_activated;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .bSoapActivated
        _m01 int32_t  l_mode;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .lMode
        _m02 wchar_t* bstr_v_root;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .bstrVRoot
        _m03 wchar_t* bstr_mail_to;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .bstrMailTo
        _m04 wchar_t* bstr_assembly_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .bstrAssemblyName
        _m05 wchar_t* bstr_type_name;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .bstrTypeName
        _m06 wchar_t* bstr_base_url;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .bstrBaseUrl
                                         
        SDK_MAGIC_PROPERTIES( "tagSOAP_ACTIVATION_INFO.$", 0x30, true, 0x611312795f98bd14 );                   
        SDK_FIXED_SIZE( soap_activation_info_t, 0x30 );                   
    };                                   
};
#include "magic/soap_activation_info_t.end.hpp"
SDK_VERIFY( struct tag::soap_activation_info_t, 0x30 );
