#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;           }
namespace tag { struct dvtargetdevice_t; }
namespace tag { struct logpalette_t;     }

#include "magic/i_view_object_vtbl_t.start.hpp"
namespace win
{
    struct hdc_t;
    struct rectl_t;
    struct i_advise_sink_t;
    struct i_view_object_t;

    // [struct IViewObjectVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_view_object_vtbl_t                 
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_view_object_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_view_object_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_view_object_t*)>*;                
        using draw_t =            sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, struct tag::dvtargetdevice_t*, struct win::hdc_t*, struct win::hdc_t*, const struct win::rectl_t*, const struct win::rectl_t*, sdk::function<int32_t(uint64_t)>*, uint64_t)>*;                
        using get_color_set_t =   sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, struct tag::dvtargetdevice_t*, struct win::hdc_t*, struct tag::logpalette_t**)>*;                
        using freeze_t =          sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, int32_t, void*, uint32_t*)>*;                
        using unfreeze_t =        sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t)>*;                
        using set_advise_t =      sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t, uint32_t, struct win::i_advise_sink_t*)>*;                
        using get_advise_t =      sdk::function<sdk::hresult(struct win::i_view_object_t*, uint32_t*, uint32_t*, struct win::i_advise_sink_t**)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 draw_t             draw;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Draw
        _m04 get_color_set_t    get_color_set;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .GetColorSet
        _m05 freeze_t           freeze;           //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Freeze
        _m06 unfreeze_t         unfreeze;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Unfreeze
        _m07 set_advise_t       set_advise;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SetAdvise
        _m08 get_advise_t       get_advise;       //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetAdvise
                                                
        SDK_MAGIC_PROPERTIES( "IViewObjectVtbl.$", 0x48, true, 0x988c8f7fa51c9403 );                
        SDK_FIXED_SIZE( i_view_object_vtbl_t, 0x48 );                
    };                                          
};
#include "magic/i_view_object_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_view_object_vtbl_t, 0x48 );
