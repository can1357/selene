#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace tag { struct formatetc_t; }
namespace tag { struct stgmedium_t; }

#include "magic/i_advise_sink_vtbl_t.start.hpp"
namespace win
{
    struct i_moniker_t;
    struct i_advise_sink_t;

    // [struct IAdviseSinkVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_advise_sink_vtbl_t                 
    {                                           
        using query_interface_t = sdk::function<sdk::hresult(struct win::i_advise_sink_t*, const struct nt::guid_t*, void**)>*;                
        using add_ref_t =         sdk::function<uint32_t(struct win::i_advise_sink_t*)>*;                
        using release_t =         sdk::function<uint32_t(struct win::i_advise_sink_t*)>*;                
        using on_data_change_t =  sdk::function<void(struct win::i_advise_sink_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*;                
        using on_view_change_t =  sdk::function<void(struct win::i_advise_sink_t*, uint32_t, int32_t)>*;                
        using on_rename_t =       sdk::function<void(struct win::i_advise_sink_t*, struct win::i_moniker_t*)>*;                
        using on_save_t =         sdk::function<void(struct win::i_advise_sink_t*)>*;                
        using on_close_t =        sdk::function<void(struct win::i_advise_sink_t*)>*;                
                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                      
        _m00 query_interface_t  query_interface;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t          add_ref;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t          release;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 on_data_change_t   on_data_change;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .OnDataChange
        _m04 on_view_change_t   on_view_change;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OnViewChange
        _m05 on_rename_t        on_rename;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .OnRename
        _m06 on_save_t          on_save;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .OnSave
        _m07 on_close_t         on_close;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .OnClose
                                                
        SDK_MAGIC_PROPERTIES( "IAdviseSinkVtbl.$", 0x40, true, 0xf806fa147cb7b6e1 );                
        SDK_FIXED_SIZE( i_advise_sink_vtbl_t, 0x40 );                
    };                                          
};
#include "magic/i_advise_sink_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_advise_sink_vtbl_t, 0x40 );
