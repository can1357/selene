#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/stor_ext_delete_parameters_t.start.hpp"
namespace stor::port
{
    // [struct _STOR_EXT_DELETE_PARAMETERS]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct stor_ext_delete_parameters_t                  
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                               
        _m00 uint32_t                    version;          //{ +0x0000    +0x0000    +0x0000    } | .Version
        _m01 sdk::function<void(void*)>* delete_callback;  //{ +0x0008    +0x0008    +0x0008    } | .DeleteCallback
        _m02 void*                       delete_context;   //{ +0x0010    +0x0010    +0x0010    } | .DeleteContext
                                                         
        SDK_MAGIC_PROPERTIES( "_STOR_EXT_DELETE_PARAMETERS.$", 0x18, true, 0x27507c066f75221a );                
        SDK_FIXED_SIZE( stor_ext_delete_parameters_t, 0x18 );                
    };                                                   
};
#include "magic/stor_ext_delete_parameters_t.end.hpp"
SDK_VERIFY( struct stor::port::stor_ext_delete_parameters_t, 0x18 );
