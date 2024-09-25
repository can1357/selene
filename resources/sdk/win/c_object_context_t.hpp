#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "s_hash_chain_t.hpp"
#include "../tag/sps_cache_t.hpp"
#include "c_context_prop_list_t.hpp"

namespace tag { struct interface_data_t; }

#include "magic/c_object_context_t.start.hpp"
namespace win
{
    struct i_marshal_t;
    struct i_unknown_t;
    class c_context_life_t;
    class c_com_apartment_t;
    class c_ctx_connection_manager_t;

    // [class CObjectContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_object_context_t                                          
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 uint32_t                               c_refs;             //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._cRefs
        _m01 int32_t                                c_user_refs;        //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._cUserRefs
        _m02 int32_t                                c_internal_refs;    //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._cInternalRefs
        _m03 uint32_t                               dw_flags;           //{ +0x0044    +0x0044    +0x0044    +0x0044    } | ._dwFlags
        _m04 struct win::s_hash_chain_t             prop_chain;         //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._propChain
        _m05 struct win::s_hash_chain_t             uuid_chain;         //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._uuidChain
        _m06 struct tag::interface_data_t*          pif_data;           //{ +0x0068    +0x0068    +0x0068    +0x0068    } | ._pifData
        _m07 uint32_t                               marshal_size_max;   //{ +0x0070    +0x0070    +0x0070    +0x0070    } | ._MarshalSizeMax
        _m08 class win::c_com_apartment_t*          p_apartment;        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | ._pApartment
        _m09 uint32_t                               dw_hash_of_id;      //{ +0x0080    +0x0080    +0x0080    +0x0080    } | ._dwHashOfId
        _m10 struct nt::guid_t                      context_id;         //{ +0x0084    +0x0084    +0x0084    +0x0084    } | ._contextId
        _m11 uint64_t                               urt_ctx_id;         //{ +0x0098    +0x0098    +0x0098    +0x0098    } | ._urtCtxId
        _m12 struct tag::sps_cache_t                ps_cache;           //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | ._PSCache
        _m13 struct win::i_marshal_t*               p_marshal_prop;     //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | ._pMarshalProp
        _m14 int32_t                                c_release_threads;  //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | ._cReleaseThreads
        _m15 class win::c_context_prop_list_t       properties;         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | ._properties
        _m16 struct win::i_unknown_t*               p_mts_context;      //{ +0x0110    +0x0110    +0x0110    +0x0110    } | ._pMtsContext
        _m17 class win::c_context_life_t volatile*  p_context_life;     //{ +0x0118    +0x0118    +0x0118    +0x0118    } | ._pContextLife
        _m18 class win::c_ctx_connection_manager_t* p_connection_mgr;   //{ +0x0120    +0x0120    +0x0120    +0x0120    } | ._pConnectionMgr
                                                                      
        SDK_MAGIC_PROPERTIES( "CObjectContext.$", 0x128, true, 0x9085fcf1b2f58899 );                  
        SDK_FIXED_SIZE( c_object_context_t, 0x128 );                  
    };                                                                
};
#include "magic/c_object_context_t.end.hpp"
SDK_VERIFY( class win::c_object_context_t, 0x128 );
