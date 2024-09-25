#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/key_set_information_class_t.hpp"

#include "magic/reg_set_information_key_information_t.start.hpp"
namespace wdf
{
    // [struct _REG_SET_INFORMATION_KEY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct reg_set_information_key_information_t                             
    {                                                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                   
        _m00 void*                                object;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Object
        _m01 enum nt::key_set_information_class_t key_set_information_class;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .KeySetInformationClass
        _m02 void*                                key_set_information;         //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .KeySetInformation
        _m03 uint32_t                             key_set_information_length;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .KeySetInformationLength
        _m04 void*                                call_context;                //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .CallContext
        _m05 void*                                object_context;              //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .ObjectContext
                                                                             
        SDK_NONVOL_PROPERTIES( "_REG_SET_INFORMATION_KEY_INFORMATION.$", 0x38, true, 0xd2546ae4b4d0cb04 );                           
        SDK_FIXED_SIZE( reg_set_information_key_information_t, 0x38 );                           
    };                                                                       
};
#include "magic/reg_set_information_key_information_t.end.hpp"
SDK_VERIFY( struct wdf::reg_set_information_key_information_t, 0x38 );
