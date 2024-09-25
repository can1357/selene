#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/csparse_bitmap_t.start.hpp"
namespace rtl
{
    // [struct _RTL_CSPARSE_BITMAP]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct csparse_bitmap_t                                         
    {                                                               
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                          
        _m00 uint64_t*               commit_bitmap;                   //{ +0x0000    +0x0000    +0x0000    } | .CommitBitmap
        _m01 uint64_t*               user_bitmap;                     //{ +0x0008    +0x0008    +0x0008    } | .UserBitmap
        _m02 uint64_t                bit_count;                       //{ +0x0010    +0x0010    +0x0010    } | .BitCount
        _m03 uint64_t                bitmap_lock;                     //{ +0x0018    +0x0018    +0x0018    } | .BitmapLock
        _m04 uint64_t                decommit_page_index;             //{ +0x0020    +0x0020    +0x0020    } | .DecommitPageIndex
        _m05 uint64_t                rtlp_c_sparse_bitmap_wake_lock;  //{ +0x0028    +0x0028    +0x0028    } | .RtlpCSparseBitmapWakeLock
        _m06 uint8_t                 lock_type;                       //{ +0x0030    +0x0030    +0x0030    } | .LockType
        _m07 uint8_t                 address_space;                   //{ +0x0031    +0x0031    +0x0031    } | .AddressSpace
        _m08 uint8_t                 mem_type;                        //{ +0x0032    +0x0032    +0x0032    } | .MemType
        _m09 uint8_t                 alloc_alignment;                 //{ +0x0033    +0x0033    +0x0033    } | .AllocAlignment
        _m10 uint32_t                commit_directory_max_size;       //{ +0x0034    +0x0034    +0x0034    } | .CommitDirectoryMaxSize
        _m11 sdk::array<uint64_t, 1> commit_directory;                //{ +0x0038    +0x0038    +0x0038    } | .CommitDirectory
                                                                    
        SDK_MAGIC_PROPERTIES( "_RTL_CSPARSE_BITMAP.$", 0x40, true, 0x59f513d110b9b41a );                               
        SDK_FIXED_SIZE( csparse_bitmap_t, 0x40 );                               
    };                                                              
};
#include "magic/csparse_bitmap_t.end.hpp"
SDK_VERIFY( struct rtl::csparse_bitmap_t, 0x40 );
