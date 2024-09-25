#pragma once
#include <sdkgen/support_library.hpp>
#include "mbcb_t.hpp"
#include "eresource_t.hpp"

#include "magic/bcb_t.start.hpp"
namespace nt
{
    struct vacb_t;
    struct shared_cache_map_t;

    // [struct _BCB]
    // => Windows 11
    //
    struct bcb_t                                             
    {                                                        
        // Windows 11                                        
        //                                                   
        _m00 struct nt::mbcb_t              dummy;             //{ +0x0000    } | .Dummy
        _m01 int16_t                        node_type_code;    //{ +0x0000    } | .NodeTypeCode
        _m02 uint8_t                        dirty;             //{ +0x0002    } | .Dirty
        _m03 uint32_t                       byte_length;       //{ +0x0004    } | .ByteLength
        _m04 int64_t                        file_offset;       //{ +0x0008    } | .FileOffset
        _m05 nt::list_entry_t               bcb_links;         //{ +0x0010    } | .BcbLinks
        _m06 int64_t                        beyond_last_byte;  //{ +0x0020    } | .BeyondLastByte
        _m07 int64_t                        oldest_lsn;        //{ +0x0028    } | .OldestLsn
        _m08 int64_t                        newest_lsn;        //{ +0x0030    } | .NewestLsn
        _m09 struct nt::vacb_t*             vacb;              //{ +0x0038    } | .Vacb
        _m10 uint32_t                       pin_count;         //{ +0x0040    } | .PinCount
        _m11 struct nt::eresource_t         resource;          //{ +0x0048    } | .Resource
        _m12 struct nt::shared_cache_map_t* shared_cache_map;  //{ +0x00b0    } | .SharedCacheMap
        _m13 void*                          base_address;      //{ +0x00b8    } | .BaseAddress
                                                             
        SDK_MAGIC_PROPERTIES( "_BCB.$", 0x0, false, 0x743043bbcf001b98 );                 
        SDK_FIXED_SIZE( bcb_t, 0xc0 );                       
    };                                                       
};
#include "magic/bcb_t.end.hpp"
SDK_VERIFY( struct nt::bcb_t, 0xc0 );
