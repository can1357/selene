#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../tag/activation_context_info_data_t.hpp"

#include "magic/context_info_t.start.hpp"
namespace win
{
    class c_object_context_t;
    struct i_serializable_parent_t;

    // [class ContextInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class context_info_t                                                  
    {                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                                
        _m00 struct win::i_serializable_parent_t*       parent;             //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._parent
        _m01 int32_t                                    un_serialized;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._unSerialized
        _m02 int32_t                                    added;              //{ +0x001c    +0x001c    +0x001c    +0x001c    } | ._added
        _m03 struct tag::activation_context_info_data_t context_info_data;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._contextInfoData
        _m04 struct nt::guid_t                          ctx_override;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._ctxOverride
        _m05 class win::c_object_context_t*             p_client_ctx;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pClientCtx
        _m06 class win::c_object_context_t*             p_prototype_ctx;    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._pPrototypeCtx
        _m07 int32_t                                    to_release_ifd;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._toReleaseIFD
                                                                          
        SDK_MAGIC_PROPERTIES( "ContextInfo.$", 0x70, true, 0x57129b8e1fd5f29c );                  
        SDK_FIXED_SIZE( context_info_t, 0x70 );                           
    };                                                                    
};
#include "magic/context_info_t.end.hpp"
SDK_VERIFY( class win::context_info_t, 0x70 );
