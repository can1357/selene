#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct guid_t; }

#include "magic/i_runnable_object_vtbl_t.start.hpp"
namespace win
{
    struct i_bind_ctx_t;
    struct i_runnable_object_t;

    // [struct IRunnableObjectVtbl]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct i_runnable_object_vtbl_t                       
    {                                                     
        using query_interface_t =      sdk::function<sdk::hresult(struct win::i_runnable_object_t*, const struct nt::guid_t*, void**)>*;                     
        using add_ref_t =              sdk::function<uint32_t(struct win::i_runnable_object_t*)>*;                     
        using release_t =              sdk::function<uint32_t(struct win::i_runnable_object_t*)>*;                     
        using get_running_class_t =    sdk::function<sdk::hresult(struct win::i_runnable_object_t*, struct nt::guid_t*)>*;                     
        using run_t =                  sdk::function<sdk::hresult(struct win::i_runnable_object_t*, struct win::i_bind_ctx_t*)>*;                     
        using is_running_t =           sdk::function<int32_t(struct win::i_runnable_object_t*)>*;                     
        using lock_running_t =         sdk::function<sdk::hresult(struct win::i_runnable_object_t*, int32_t, int32_t)>*;                     
        using set_contained_object_t = sdk::function<sdk::hresult(struct win::i_runnable_object_t*, int32_t)>*;                     
                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                                
        _m00 query_interface_t       query_interface;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .QueryInterface
        _m01 add_ref_t               add_ref;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AddRef
        _m02 release_t               release;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Release
        _m03 get_running_class_t     get_running_class;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .GetRunningClass
        _m04 run_t                   run;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Run
        _m05 is_running_t            is_running;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IsRunning
        _m06 lock_running_t          lock_running;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .LockRunning
        _m07 set_contained_object_t  set_contained_object;  //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .SetContainedObject
                                                          
        SDK_MAGIC_PROPERTIES( "IRunnableObjectVtbl.$", 0x40, true, 0x81e36974b001ce42 );                     
        SDK_FIXED_SIZE( i_runnable_object_vtbl_t, 0x40 );                     
    };                                                    
};
#include "magic/i_runnable_object_vtbl_t.end.hpp"
SDK_VERIFY( struct win::i_runnable_object_vtbl_t, 0x40 );
