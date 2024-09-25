#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/verifier_heap_table_t.start.hpp"
namespace rtl
{
    struct heap_parameters_t;
    struct heap_walk_entry_t;

    // [struct _RTL_VERIFIER_HEAP_TABLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct verifier_heap_table_t                                                         
    {                                                                                    
        using vrf_heap_re_allocate_t =                   sdk::function<void*(void*, uint32_t, void*, uint64_t)>*;                           
        using verifier_create_rpc_page_heap_function_t = sdk::function<void*(uint32_t, void*, uint64_t, uint64_t, void*, struct rtl::heap_parameters_t*)>*;                           
        using vrf_heap_extend_t =                        sdk::function<int32_t(void*, uint32_t, void*, uint64_t)>*;                           
        using vrf_heap_walk_t =                          sdk::function<int32_t(void*, struct rtl::heap_walk_entry_t*)>*;                           
        using vrf_heap_set_user_value_t =                sdk::function<uint8_t(void*, uint32_t, void*, void*)>*;                           
        using vrf_heap_get_user_info_t =                 sdk::function<uint8_t(void*, uint32_t, void*, void**, uint32_t*)>*;                           
        using vrf_heap_set_user_flags_t =                sdk::function<uint8_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                           
        using vrf_query_verifier_options_t =             sdk::function<int32_t(uint32_t, uint32_t*, void*)>*;                           
        using vrf_set_verifier_options_t =               sdk::function<int32_t(uint32_t, uint32_t*, void*)>*;                           
                                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                               
        _m00 uint32_t                                         size;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 sdk::function<void*(void*, uint32_t, uint64_t)>* vrf_heap_allocate;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .VrfHeapAllocate
        _m02 vrf_heap_re_allocate_t                           vrf_heap_re_allocate;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VrfHeapReAllocate
        _m03 sdk::function<uint8_t(void*, uint32_t, void*)>*  vrf_heap_free;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VrfHeapFree
        _m04 verifier_create_rpc_page_heap_function_t         vrf_heap_create;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .VrfHeapCreate
        _m05 sdk::function<void*(void*)>*                     vrf_heap_destroy;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .VrfHeapDestroy
        _m06 vrf_heap_extend_t                                vrf_heap_extend;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .VrfHeapExtend
        _m07 sdk::function<uint32_t(uint32_t, void**)>*       vrf_get_process_heaps;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .VrfGetProcessHeaps
        _m08 vrf_heap_walk_t                                  vrf_heap_walk;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .VrfHeapWalk
        _m09 sdk::function<uint8_t(void*)>*                   vrf_heap_lock;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .VrfHeapLock
        _m10 sdk::function<uint8_t(void*)>*                   vrf_heap_unlock;             //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .VrfHeapUnlock
        _m11 sdk::function<uint8_t(void*)>*                   vrf_heap_is_locked;          //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .VrfHeapIsLocked
        _m12 sdk::function<uint8_t(void*, uint32_t, void*)>*  vrf_heap_validate;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .VrfHeapValidate
        _m13 vrf_heap_set_user_value_t                        vrf_heap_set_user_value;     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .VrfHeapSetUserValue
        _m14 vrf_heap_get_user_info_t                         vrf_heap_get_user_info;      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .VrfHeapGetUserInfo
        _m15 vrf_heap_set_user_flags_t                        vrf_heap_set_user_flags;     //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .VrfHeapSetUserFlags
        _m16 sdk::function<uint8_t(void*)>*                   vrf_heap_serialize;          //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .VrfHeapSerialize
        _m17 sdk::function<uint64_t(void*, uint32_t, void*)>* vrf_heap_size;               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .VrfHeapSize
        _m18 sdk::function<uint32_t(void*, uint32_t)>*        vrf_heap_compact;            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .VrfHeapCompact
        _m19 sdk::function<int32_t(void*, uint32_t)>*         vrf_heap_zero;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .VrfHeapZero
        _m20 vrf_query_verifier_options_t                     vrf_query_verifier_options;  //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .VrfQueryVerifierOptions
        _m21 vrf_set_verifier_options_t                       vrf_set_verifier_options;    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .VrfSetVerifierOptions
                                                                                         
        SDK_MAGIC_PROPERTIES( "_RTL_VERIFIER_HEAP_TABLE.$", 0xb0, true, 0x81c5ac9798b8bd8c );                           
        SDK_FIXED_SIZE( verifier_heap_table_t, 0xb0 );                                   
    };                                                                                   
};
#include "magic/verifier_heap_table_t.end.hpp"
SDK_VERIFY( struct rtl::verifier_heap_table_t, 0xb0 );
