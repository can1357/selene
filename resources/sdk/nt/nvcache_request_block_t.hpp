#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nvcache_request_block_t.start.hpp"
namespace nt
{
    // [struct _NVCACHE_REQUEST_BLOCK]
    // => WDK 10 (NV)
    //
    struct nvcache_request_block_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint32_t nrb_size;             //{ +0x0000    } | .NRBSize
        _m01 uint16_t function;             //{ +0x0004    } | .Function
        _m02 uint32_t nrb_flags;            //{ +0x0008    } | .NRBFlags
        _m03 uint32_t nrb_status;           //{ +0x000c    } | .NRBStatus
        _m04 uint32_t count;                //{ +0x0010    } | .Count
        _m05 uint64_t lba;                  //{ +0x0018    } | .LBA
        _m06 uint32_t data_buf_size;        //{ +0x0020    } | .DataBufSize
        _m07 uint32_t nv_cache_status;      //{ +0x0024    } | .NVCacheStatus
        _m08 uint32_t nv_cache_sub_status;  //{ +0x0028    } | .NVCacheSubStatus
                                          
        SDK_NONVOL_PROPERTIES( "_NVCACHE_REQUEST_BLOCK.$", 0x0, false, 0xb781584910724c8d );                    
        SDK_FIXED_SIZE( nvcache_request_block_t, 0x30 );                    
    };                                    
};
#include "magic/nvcache_request_block_t.end.hpp"
SDK_VERIFY( struct nt::nvcache_request_block_t, 0x30 );
