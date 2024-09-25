#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_moniker_vtbl_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct i_stream_t;
    struct i_moniker_t;
    struct i_bind_ctx_t;
    struct i_enum_moniker_t;

    // [struct IMonikerVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_moniker_vtbl_t                                     
    {                                                           
        using query_interface_t =         sdk::function<sdk::hresult(struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*;                        
        using add_ref_t =                 sdk::function<uint32_t(struct win::i_moniker_t*)>*;                        
        using release_t =                 sdk::function<uint32_t(struct win::i_moniker_t*)>*;                        
        using get_class_id_t =            sdk::function<sdk::hresult(struct win::i_moniker_t*, struct nt::guid_t*)>*;                        
        using is_dirty_t =                sdk::function<sdk::hresult(struct win::i_moniker_t*)>*;                        
        using load_t =                    sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_stream_t*)>*;                        
        using save_t =                    sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_stream_t*, int32_t)>*;                        
        using get_size_max_t =            sdk::function<sdk::hresult(struct win::i_moniker_t*, uint64_t*)>*;                        
        using bind_to_object_t =          sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*;                        
        using bind_to_storage_t =         sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, const struct nt::guid_t*, void**)>*;                        
        using reduce_t =                  sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, uint32_t, struct win::i_moniker_t**, struct win::i_moniker_t**)>*;                        
        using compose_with_t =            sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, int32_t, struct win::i_moniker_t**)>*;                        
        using _enum_t =                   sdk::function<sdk::hresult(struct win::i_moniker_t*, int32_t, struct win::i_enum_moniker_t**)>*;                        
        using is_equal_t =                sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*)>*;                        
        using hash_t =                    sdk::function<sdk::hresult(struct win::i_moniker_t*, uint32_t*)>*;                        
        using is_running_t =              sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, struct win::i_moniker_t*)>*;                        
        using get_time_of_last_change_t = sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, struct win::filetime_t*)>*;                        
        using inverse_t =                 sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t**)>*;                        
        using common_prefix_with_t =      sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, struct win::i_moniker_t**)>*;                        
        using relative_path_to_t =        sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_moniker_t*, struct win::i_moniker_t**)>*;                        
        using get_display_name_t =        sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, wchar_t**)>*;                        
        using parse_display_name_t =      sdk::function<sdk::hresult(struct win::i_moniker_t*, struct win::i_bind_ctx_t*, struct win::i_moniker_t*, wchar_t*, uint32_t*, struct win::i_moniker_t**)>*;                        
        using is_system_moniker_t =       sdk::function<sdk::hresult(struct win::i_moniker_t*, uint32_t*)>*;                        
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 query_interface_t          query_interface;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                  add_ref;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                  release;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_class_id_t             get_class_id;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetClassID
        _m04 is_dirty_t                 is_dirty;                 //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IsDirty
        _m05 load_t                     load;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Load
        _m06 save_t                     save;                     //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Save
        _m07 get_size_max_t             get_size_max;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .GetSizeMax
        _m08 bind_to_object_t           bind_to_object;           //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .BindToObject
        _m09 bind_to_storage_t          bind_to_storage;          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .BindToStorage
        _m10 reduce_t                   reduce;                   //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .Reduce
        _m11 compose_with_t             compose_with;             //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ComposeWith
        _m12 _enum_t                    _enum;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .Enum
        _m13 is_equal_t                 is_equal;                 //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .IsEqual
        _m14 hash_t                     hash;                     //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .Hash
        _m15 is_running_t               is_running;               //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .IsRunning
        _m16 get_time_of_last_change_t  get_time_of_last_change;  //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .GetTimeOfLastChange
        _m17 inverse_t                  inverse;                  //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .Inverse
        _m18 common_prefix_with_t       common_prefix_with;       //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .CommonPrefixWith
        _m19 relative_path_to_t         relative_path_to;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .RelativePathTo
        _m20 get_display_name_t         get_display_name;         //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .GetDisplayName
        _m21 parse_display_name_t       parse_display_name;       //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .ParseDisplayName
        _m22 is_system_moniker_t        is_system_moniker;        //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .IsSystemMoniker
                                                                
        SDK_MAGIC_PROPERTIES( "IMonikerVtbl.$", 0xb8, true, 0xd5b2b5101039e185 );                        
        SDK_FIXED_SIZE( i_moniker_vtbl_t, 0xb8 );                        
    };                                                          
};
#include "magic/i_moniker_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_moniker_vtbl_t, 0xb8 );
