#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/ksmethod_item_t.start.hpp"
namespace ndis
{
    struct ksidentifier_t;

    // [struct KSMETHOD_ITEM]
    // => Windows 10 v1607
    //
    struct ksmethod_item_t                       
    {                                            
        using method_handler_t =  sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                 
        using support_handler_t = sdk::function<int32_t(struct nt::irp_t*, struct ndis::ksidentifier_t*, void*)>*;                 
                                                 
        // Windows 10 v1607                      
        //                                       
        _m00 uint32_t           method_id;         //{ +0x0000    } | .MethodId
        _m01 method_handler_t   method_handler;    //{ +0x0008    } | .MethodHandler
        _m02 uint8_t            method_supported;  //{ +0x0008    } | .MethodSupported
        _m03 uint32_t           min_method;        //{ +0x0010    } | .MinMethod
        _m04 uint32_t           min_data;          //{ +0x0014    } | .MinData
        _m05 support_handler_t  support_handler;   //{ +0x0018    } | .SupportHandler
        _m06 uint32_t           flags;             //{ +0x0020    } | .Flags
                                                 
        SDK_MAGIC_PROPERTIES( "KSMETHOD_ITEM.$", 0x0, false, 0x18da9d13a1122f07 );                 
        SDK_FIXED_SIZE( ksmethod_item_t, 0x28 );                 
    };                                           
};
#include "magic/ksmethod_item_t.end.hpp"
SDK_VERIFY( struct ndis::ksmethod_item_t, 0x28 );
