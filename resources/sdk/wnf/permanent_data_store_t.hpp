#pragma once
#include <sdkgen/support_library.hpp>
#include "lock_t.hpp"
#include "data_scope_t.hpp"
#include "node_header_t.hpp"

#include "magic/permanent_data_store_t.start.hpp"
namespace wnf
{
    // [struct _WNF_PERMANENT_DATA_STORE]
    // => Windows 11
    //
    struct permanent_data_store_t                             
    {                                                         
        // Windows 11                                         
        //                                                    
        _m00 struct wnf::node_header_t header;                  //{ +0x0000    } | .Header
        _m01 struct wnf::lock_t        lock;                    //{ +0x0008    } | .Lock
        _m02 void*                     handle;                  //{ +0x0010    } | .Handle
        _m03 nt::list_entry_t          links;                   //{ +0x0018    } | .Links
        _m04 enum wnf::data_scope_t    data_scope_type;         //{ +0x0028    } | .DataScopeType
        _m05 uint32_t                  scope_instance_id_size;  //{ +0x002c    } | .ScopeInstanceIdSize
                                                              
        SDK_MAGIC_PROPERTIES( "_WNF_PERMANENT_DATA_STORE.$", 0x0, false, 0x69bebb296db5a983 );                       
        SDK_FIXED_SIZE( permanent_data_store_t, 0x30 );                       
    };                                                        
};
#include "magic/permanent_data_store_t.end.hpp"
SDK_VERIFY( struct wnf::permanent_data_store_t, 0x30 );
