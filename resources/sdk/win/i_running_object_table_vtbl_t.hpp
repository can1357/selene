#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_running_object_table_vtbl_t.start.hpp"
namespace win
{
    struct filetime_t;
    struct i_moniker_t;
    struct i_unknown_t;
    struct i_enum_moniker_t;
    struct i_running_object_table_t;

    // [struct IRunningObjectTableVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_running_object_table_vtbl_t                        
    {                                                           
        using query_interface_t =         sdk::function<sdk::hresult(struct win::i_running_object_table_t*, const struct nt::guid_t*, void**)>*;                        
        using add_ref_t =                 sdk::function<uint32_t(struct win::i_running_object_table_t*)>*;                        
        using release_t =                 sdk::function<uint32_t(struct win::i_running_object_table_t*)>*;                        
        using _register_t =               sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t, struct win::i_unknown_t*, struct win::i_moniker_t*, uint32_t*)>*;                        
        using revoke_t =                  sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t)>*;                        
        using is_running_t =              sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*)>*;                        
        using get_object_w_t =            sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*, struct win::i_unknown_t**)>*;                        
        using note_change_time_t =        sdk::function<sdk::hresult(struct win::i_running_object_table_t*, uint32_t, struct win::filetime_t*)>*;                        
        using get_time_of_last_change_t = sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_moniker_t*, struct win::filetime_t*)>*;                        
        using enum_running_t =            sdk::function<sdk::hresult(struct win::i_running_object_table_t*, struct win::i_enum_moniker_t**)>*;                        
                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 query_interface_t          query_interface;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t                  add_ref;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t                  release;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 _register_t                _register;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Register
        _m04 revoke_t                   revoke;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Revoke
        _m05 is_running_t               is_running;               //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IsRunning
        _m06 get_object_w_t             get_object_w;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .GetObjectW
        _m07 note_change_time_t         note_change_time;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .NoteChangeTime
        _m08 get_time_of_last_change_t  get_time_of_last_change;  //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .GetTimeOfLastChange
        _m09 enum_running_t             enum_running;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .EnumRunning
                                                                
        SDK_MAGIC_PROPERTIES( "IRunningObjectTableVtbl.$", 0x50, true, 0x348c2e56e64d196 );                        
        SDK_FIXED_SIZE( i_running_object_table_vtbl_t, 0x50 );                        
    };                                                          
};
#include "magic/i_running_object_table_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_running_object_table_vtbl_t, 0x50 );
