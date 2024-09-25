#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"
#include "../rtl/avl_tree_t.hpp"
#include "../ex/rundown_ref_t.hpp"

namespace rtl { struct bitmap_t; }

#include "magic/enclave_state_t.start.hpp"
namespace mi
{
    // [struct _MI_ENCLAVE_STATE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enclave_state_t                                        
    {                                                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                        
        _m00 struct rtl::avl_tree_t   enclave_regions;              //{ +0x0000    +0x0000    +0x0000    } | .EnclaveRegions
        _m01 void*                    enclave_metadata_page;        //{ +0x0008    +0x0008    +0x0008    } | .EnclaveMetadataPage
        _m02 struct rtl::bitmap_t*    enclave_metadata_bit_map;     //{ +0x0010    +0x0010    +0x0010    } | .EnclaveMetadataBitMap
        _m03 struct ex::push_lock_t   enclave_metadata_entry_lock;  //{ +0x0018    +0x0018    +0x0018    } | .EnclaveMetadataEntryLock
        _m04 volatile int32_t         enclave_metadata_page_lock;   //{ +0x0020    +0x0020    +0x0020    } | .EnclaveMetadataPageLock
        _m05 nt::list_entry_t         enclave_list;                 //{ +0x0028    +0x0028    +0x0028    } | .EnclaveList
        _m06 struct ex::push_lock_t   enclave_list_lock;            //{ +0x0038    +0x0038    +0x0038    } | .EnclaveListLock
        _m07 struct ex::rundown_ref_t shutdown_rundown;             //{ +0x0040    +0x0040    +0x0040    } | .ShutdownRundown
                                                                  
        SDK_MAGIC_PROPERTIES( "_MI_ENCLAVE_STATE.$", 0x48, true, 0xc04053231c3bdf5c );                            
        SDK_FIXED_SIZE( enclave_state_t, 0x48 );                            
    };                                                            
};
#include "magic/enclave_state_t.end.hpp"
SDK_VERIFY( struct mi::enclave_state_t, 0x48 );
