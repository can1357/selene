#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t; }
namespace tag { struct rect_t; }

#include "magic/i_ole_in_place_ui_window_vtbl_t.start.hpp"
namespace win
{
    struct hwnd_t;
    struct i_ole_in_place_ui_window_t;
    struct i_ole_in_place_active_object_t;

    // [struct IOleInPlaceUIWindowVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_ole_in_place_ui_window_vtbl_t                    
    {                                                         
        using query_interface_t =        sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct nt::guid_t*, void**)>*;                       
        using add_ref_t =                sdk::function<uint32_t(struct win::i_ole_in_place_ui_window_t*)>*;                       
        using release_t =                sdk::function<uint32_t(struct win::i_ole_in_place_ui_window_t*)>*;                       
        using get_window_t =             sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct win::hwnd_t**)>*;                       
        using context_sensitive_help_t = sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, int32_t)>*;                       
        using get_border_t =             sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct tag::rect_t*)>*;                       
        using request_border_space_t =   sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct tag::rect_t*)>*;                       
        using set_border_space_t =       sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, const struct tag::rect_t*)>*;                       
        using set_active_object_t =      sdk::function<sdk::hresult(struct win::i_ole_in_place_ui_window_t*, struct win::i_ole_in_place_active_object_t*, const wchar_t*)>*;                       
                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                    
        _m00 query_interface_t         query_interface;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                 add_ref;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                 release;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_window_t              get_window;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetWindow
        _m04 context_sensitive_help_t  context_sensitive_help;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ContextSensitiveHelp
        _m05 get_border_t              get_border;              //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .GetBorder
        _m06 request_border_space_t    request_border_space;    //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RequestBorderSpace
        _m07 set_border_space_t        set_border_space;        //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SetBorderSpace
        _m08 set_active_object_t       set_active_object;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .SetActiveObject
                                                              
        SDK_MAGIC_PROPERTIES( "IOleInPlaceUIWindowVtbl.$", 0x48, true, 0xe50f15f4c7b64192 );                       
        SDK_FIXED_SIZE( i_ole_in_place_ui_window_vtbl_t, 0x48 );                       
    };                                                        
};
#include "magic/i_ole_in_place_ui_window_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_ole_in_place_ui_window_vtbl_t, 0x48 );
