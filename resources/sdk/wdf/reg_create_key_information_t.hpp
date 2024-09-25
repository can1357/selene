#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_create_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_CREATE_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_create_key_information_t                    
    {                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                 
        _m00 nt::unicode_view* complete_name;                //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CompleteName
        _m01 void*             root_object;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .RootObject
        _m02 void*             object_type;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ObjectType
        _m03 uint32_t          create_options;               //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .CreateOptions
        _m04 nt::unicode_view* _class;                       //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Class
        _m05 void*             security_descriptor;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SecurityDescriptor
        _m06 void*             security_quality_of_service;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .SecurityQualityOfService
        _m07 uint32_t          desired_access;               //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .DesiredAccess
        _m08 uint32_t          granted_access;               //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .GrantedAccess
        _m09 uint32_t*         disposition;                  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Disposition
        _m10 void**            result_object;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .ResultObject
        _m11 void*             call_context;                 //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .CallContext
        _m12 void*             root_object_context;          //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .RootObjectContext
        _m13 void*             transaction;                  //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .Transaction
                                                           
        SDK_NONVOL_PROPERTIES( "_REG_CREATE_KEY_INFORMATION.$", 0x70, true, 0x215bc564665e5a79 );                            
        SDK_FIXED_SIZE( reg_create_key_information_t, 0x70 );                            
    };                                                     
};
#include "magic/reg_create_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_create_key_information_t, 0x70 );
