#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_com_activator_t.start.hpp"
namespace win
{
    class opaque_data_info_t;
    class special_properties_t;

    // [class CComActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_com_activator_t                                              
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                               
        _m00 int32_t                          ul_ref;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._ulRef
        _m01 class win::opaque_data_info_t*   p_opaque_data;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pOpaqueData
        _m02 class win::special_properties_t* p_props;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pProps
        _m03 int32_t                          f_act_props_init_necessary;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._fActPropsInitNecessary
                                                                         
        SDK_MAGIC_PROPERTIES( "CComActivator.$", 0x38, true, 0xf24e22658cfdd321 );                           
        SDK_FIXED_SIZE( c_com_activator_t, 0x38 );                           
    };                                                                   
};
#include "magic/c_com_activator_t.end.hpp"
SDK_VERIFY( class win::c_com_activator_t, 0x38 );
