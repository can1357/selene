#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;      }
namespace tag { struct formatetc_t; }
namespace tag { struct stgmedium_t; }

#include "magic/async_i_advise_sink2_vtbl_t.start.hpp"
namespace win
{
    struct i_moniker_t;
    struct async_i_advise_sink2_t;

    // [struct AsyncIAdviseSink2Vtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct async_i_advise_sink2_vtbl_t                              
    {                                                               
        using query_interface_t =           sdk::function<sdk::hresult(struct win::async_i_advise_sink2_t*, const struct nt::guid_t*, void**)>*;                          
        using add_ref_t =                   sdk::function<uint32_t(struct win::async_i_advise_sink2_t*)>*;                          
        using release_t =                   sdk::function<uint32_t(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_data_change_t =      sdk::function<void(struct win::async_i_advise_sink2_t*, struct tag::formatetc_t*, struct tag::stgmedium_t*)>*;                          
        using finish_on_data_change_t =     sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_view_change_t =      sdk::function<void(struct win::async_i_advise_sink2_t*, uint32_t, int32_t)>*;                          
        using finish_on_view_change_t =     sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_rename_t =           sdk::function<void(struct win::async_i_advise_sink2_t*, struct win::i_moniker_t*)>*;                          
        using finish_on_rename_t =          sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_save_t =             sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using finish_on_save_t =            sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_close_t =            sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using finish_on_close_t =           sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
        using begin_on_link_src_change_t =  sdk::function<void(struct win::async_i_advise_sink2_t*, struct win::i_moniker_t*)>*;                          
        using finish_on_link_src_change_t = sdk::function<void(struct win::async_i_advise_sink2_t*)>*;                          
                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                          
        _m00 query_interface_t            query_interface;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                    add_ref;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                    release;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 begin_on_data_change_t       begin_on_data_change;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Begin_OnDataChange
        _m04 finish_on_data_change_t      finish_on_data_change;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Finish_OnDataChange
        _m05 begin_on_view_change_t       begin_on_view_change;       //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Begin_OnViewChange
        _m06 finish_on_view_change_t      finish_on_view_change;      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Finish_OnViewChange
        _m07 begin_on_rename_t            begin_on_rename;            //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .Begin_OnRename
        _m08 finish_on_rename_t           finish_on_rename;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Finish_OnRename
        _m09 begin_on_save_t              begin_on_save;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .Begin_OnSave
        _m10 finish_on_save_t             finish_on_save;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Finish_OnSave
        _m11 begin_on_close_t             begin_on_close;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .Begin_OnClose
        _m12 finish_on_close_t            finish_on_close;            //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Finish_OnClose
        _m13 begin_on_link_src_change_t   begin_on_link_src_change;   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .Begin_OnLinkSrcChange
        _m14 finish_on_link_src_change_t  finish_on_link_src_change;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Finish_OnLinkSrcChange
                                                                    
        SDK_MAGIC_PROPERTIES( "AsyncIAdviseSink2Vtbl.$", 0x78, true, 0x6bd9fc37c57530ee );                          
        SDK_FIXED_SIZE( async_i_advise_sink2_vtbl_t, 0x78 );                          
    };                                                              
};
#include "magic/async_i_advise_sink2_vtbl_t.end.hpp"
SDK_VERIFY( struct win::async_i_advise_sink2_vtbl_t, 0x78 );
