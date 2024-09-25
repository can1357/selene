#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t; }
namespace tag { struct msg_t;  }
namespace tag { struct rect_t; }

#include "magic/i_ole_in_place_active_object_vtbl_t.start.hpp"
namespace win
{
    struct hwnd_t;
    struct i_ole_in_place_ui_window_t;
    struct i_ole_in_place_active_object_t;

    // [struct IOleInPlaceActiveObjectVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_in_place_active_object_vtbl_t                    
    {                                                             
        using query_interface_t =          sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, const struct nt::guid_t*, void**)>*;                         
        using add_ref_t =                  sdk::function<uint32_t(struct win::i_ole_in_place_active_object_t*)>*;                         
        using release_t =                  sdk::function<uint32_t(struct win::i_ole_in_place_active_object_t*)>*;                         
        using get_window_t =               sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, struct win::hwnd_t**)>*;                         
        using context_sensitive_help_t =   sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*;                         
        using translate_accelerator_w_t =  sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, struct tag::msg_t*)>*;                         
        using on_frame_window_activate_t = sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*;                         
        using on_doc_window_activate_t =   sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*;                         
        using resize_border_t =            sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, const struct tag::rect_t*, struct win::i_ole_in_place_ui_window_t*, int32_t)>*;                         
        using enable_modeless_t =          sdk::function<sdk::hresult(struct win::i_ole_in_place_active_object_t*, int32_t)>*;                         
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                        
        _m00 query_interface_t           query_interface;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                   add_ref;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                   release;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_window_t                get_window;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetWindow
        _m04 context_sensitive_help_t    context_sensitive_help;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ContextSensitiveHelp
        _m05 translate_accelerator_w_t   translate_accelerator_w;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .TranslateAcceleratorW
        _m06 on_frame_window_activate_t  on_frame_window_activate;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OnFrameWindowActivate
        _m07 on_doc_window_activate_t    on_doc_window_activate;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OnDocWindowActivate
        _m08 resize_border_t             resize_border;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ResizeBorder
        _m09 enable_modeless_t           enable_modeless;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnableModeless
                                                                  
        SDK_MAGIC_PROPERTIES( "IOleInPlaceActiveObjectVtbl.$", 0x50, true, 0x88e5156647cb1ca9 );                         
        SDK_FIXED_SIZE( i_ole_in_place_active_object_vtbl_t, 0x50 );                         
    };                                                            
};
#include "magic/i_ole_in_place_active_object_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_ole_in_place_active_object_vtbl_t, 0x50 );
