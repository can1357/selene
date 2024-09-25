#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reg_load_key_information_v2_t.start.hpp"
namespace wdf
{
    // [struct _REG_LOAD_KEY_INFORMATION_V2]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reg_load_key_information_v2_t          
    {                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 void*             object;              //{ +0x0000    +0x0000    +0x0000    } | .Object
        _m01 nt::unicode_view* key_name;            //{ +0x0008    +0x0008    +0x0008    } | .KeyName
        _m02 nt::unicode_view* source_file;         //{ +0x0010    +0x0010    +0x0010    } | .SourceFile
        _m03 uint32_t          flags;               //{ +0x0018    +0x0018    +0x0018    } | .Flags
        _m04 void*             trust_class_object;  //{ +0x0020    +0x0020    +0x0020    } | .TrustClassObject
        _m05 void*             user_event;          //{ +0x0028    +0x0028    +0x0028    } | .UserEvent
        _m06 uint32_t          desired_access;      //{ +0x0030    +0x0030    +0x0030    } | .DesiredAccess
        _m07 void**            root_handle;         //{ +0x0038    +0x0038    +0x0038    } | .RootHandle
        _m08 void*             call_context;        //{ +0x0040    +0x0040    +0x0040    } | .CallContext
        _m09 void*             object_context;      //{ +0x0048    +0x0048    +0x0048    } | .ObjectContext
        _m10 uint64_t          version;             //{ +0x0050    +0x0050    +0x0050    } | .Version
        _m11 void*             file_access_token;   //{ +0x0058    +0x0058    +0x0058    } | .FileAccessToken
                                                  
        SDK_MAGIC_PROPERTIES( "_REG_LOAD_KEY_INFORMATION_V2.$", 0x60, true, 0xf6c57dd8a6cf7490 );                   
        SDK_FIXED_SIZE( reg_load_key_information_v2_t, 0x60 );                   
    };                                            
};
#include "magic/reg_load_key_information_v2_t.end.hpp"
SDK_VERIFY( struct wdf::reg_load_key_information_v2_t, 0x60 );
